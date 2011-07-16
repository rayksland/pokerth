/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CHATCLEANER-PROTOCOL"
 * 	found in "../../../docs/chatcleaner.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_CleanerChatRequestMessage_H_
#define	_CleanerChatRequestMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "CleanerChatType.h"
#include <UTF8String.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

	/* CleanerChatRequestMessage */
	typedef struct CleanerChatRequestMessage {
		unsigned long	 requestId;
		CleanerChatType_t	 cleanerChatType;
		unsigned long	 playerId;
		UTF8String_t	 playerName;
		UTF8String_t	 chatMessage;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */

		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} CleanerChatRequestMessage_t;

	/* Implementation */
	/* extern asn_TYPE_descriptor_t asn_DEF_requestId_2;	// (Use -fall-defs-global to expose) */
	/* extern asn_TYPE_descriptor_t asn_DEF_playerId_4;	// (Use -fall-defs-global to expose) */
	extern asn_TYPE_descriptor_t asn_DEF_CleanerChatRequestMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _CleanerChatRequestMessage_H_ */
#include <asn_internal.h>
