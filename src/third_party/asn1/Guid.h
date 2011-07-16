/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_Guid_H_
#define	_Guid_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

	/* Guid */
	typedef OCTET_STRING_t	 Guid_t;

	/* Implementation */
	extern asn_TYPE_descriptor_t asn_DEF_Guid;
	asn_struct_free_f Guid_free;
	asn_struct_print_f Guid_print;
	asn_constr_check_f Guid_constraint;
	ber_type_decoder_f Guid_decode_ber;
	der_type_encoder_f Guid_encode_der;
	xer_type_decoder_f Guid_decode_xer;
	xer_type_encoder_f Guid_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _Guid_H_ */
#include <asn_internal.h>
