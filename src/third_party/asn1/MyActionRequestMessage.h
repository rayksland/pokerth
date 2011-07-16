/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_MyActionRequestMessage_H_
#define	_MyActionRequestMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NonZeroId.h"
#include "NetGameState.h"
#include "NetPlayerAction.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

	/* MyActionRequestMessage */
	typedef struct MyActionRequestMessage {
		NonZeroId_t	 gameId;
		NonZeroId_t	 handNum;
		NetGameState_t	 gameState;
		NetPlayerAction_t	 myAction;
		long	 myRelativeBet;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */

		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} MyActionRequestMessage_t;

	/* Implementation */
	extern asn_TYPE_descriptor_t asn_DEF_MyActionRequestMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _MyActionRequestMessage_H_ */
#include <asn_internal.h>
