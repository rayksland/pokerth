/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_GameStartModeRejoin_H_
#define	_GameStartModeRejoin_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

	/* Forward declarations */
	struct RejoinPlayerData;

	/* GameStartModeRejoin */
	typedef struct GameStartModeRejoin {
		struct rejoinPlayerData {
			A_SEQUENCE_OF(struct RejoinPlayerData) list;

			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} rejoinPlayerData;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */

		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} GameStartModeRejoin_t;

	/* Implementation */
	extern asn_TYPE_descriptor_t asn_DEF_GameStartModeRejoin;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RejoinPlayerData.h"

#endif	/* _GameStartModeRejoin_H_ */
#include <asn_internal.h>
