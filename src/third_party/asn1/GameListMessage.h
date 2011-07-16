/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_GameListMessage_H_
#define	_GameListMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NonZeroId.h"
#include "GameListNew.h"
#include "GameListUpdate.h"
#include "GameListPlayerJoined.h"
#include "GameListPlayerLeft.h"
#include "GameListAdminChanged.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

	/* Dependencies */
	typedef enum gameListNotification_PR {
		gameListNotification_PR_NOTHING,	/* No components present */
		gameListNotification_PR_gameListNew,
		gameListNotification_PR_gameListUpdate,
		gameListNotification_PR_gameListPlayerJoined,
		gameListNotification_PR_gameListPlayerLeft,
		gameListNotification_PR_gameListAdminChanged,
		/* Extensions may appear below */

	}
	gameListNotification_PR;

	/* GameListMessage */
	typedef struct GameListMessage {
		NonZeroId_t	 gameId;
		struct gameListNotification {
			gameListNotification_PR present;
			union GameListMessage__gameListNotification_u {
				GameListNew_t	 gameListNew;
				GameListUpdate_t	 gameListUpdate;
				GameListPlayerJoined_t	 gameListPlayerJoined;
				GameListPlayerLeft_t	 gameListPlayerLeft;
				GameListAdminChanged_t	 gameListAdminChanged;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;

			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} gameListNotification;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */

		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} GameListMessage_t;

	/* Implementation */
	extern asn_TYPE_descriptor_t asn_DEF_GameListMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _GameListMessage_H_ */
#include <asn_internal.h>
