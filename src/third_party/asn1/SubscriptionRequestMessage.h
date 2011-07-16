/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_SubscriptionRequestMessage_H_
#define	_SubscriptionRequestMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

	/* Dependencies */
	typedef enum subscriptionAction {
		subscriptionAction_unsubscribeGameList	= 1,
		 subscriptionAction_resubscribeGameList	= 2
	}
	         e_subscriptionAction;

	/* SubscriptionRequestMessage */
	typedef struct SubscriptionRequestMessage {
		long	 subscriptionAction;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */

		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} SubscriptionRequestMessage_t;

	/* Implementation */
	/* extern asn_TYPE_descriptor_t asn_DEF_subscriptionAction_2;	// (Use -fall-defs-global to expose) */
	extern asn_TYPE_descriptor_t asn_DEF_SubscriptionRequestMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _SubscriptionRequestMessage_H_ */
#include <asn_internal.h>
