/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CHATCLEANER-PROTOCOL"
 * 	found in "../../../docs/chatcleaner.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include "CleanerChatTypeGame.h"

static int
gameId_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
                    asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	unsigned long value;

	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: value not given (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}

	value = *(const unsigned long *)sptr;

	if((value >= 1 && value <= 4294967295)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: constraint failed (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static void
gameId_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeInteger.free_struct;
	td->print_struct   = asn_DEF_NativeInteger.print_struct;
	td->ber_decoder    = asn_DEF_NativeInteger.ber_decoder;
	td->der_encoder    = asn_DEF_NativeInteger.der_encoder;
	td->xer_decoder    = asn_DEF_NativeInteger.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeInteger.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeInteger.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeInteger.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeInteger.per_constraints;
	td->elements       = asn_DEF_NativeInteger.elements;
	td->elements_count = asn_DEF_NativeInteger.elements_count;
	/* td->specifics      = asn_DEF_NativeInteger.specifics;	// Defined explicitly */
}

static void
gameId_2_free(asn_TYPE_descriptor_t *td,
              void *struct_ptr, int contents_only) {
	gameId_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
gameId_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
               int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	gameId_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
gameId_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
                    void **structure, const void *bufptr, size_t size, int tag_mode) {
	gameId_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
gameId_2_encode_der(asn_TYPE_descriptor_t *td,
                    void *structure, int tag_mode, ber_tlv_tag_t tag,
                    asn_app_consume_bytes_f *cb, void *app_key) {
	gameId_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
gameId_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
                    void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	gameId_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
gameId_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
                    int ilevel, enum xer_encoder_flags_e flags,
                    asn_app_consume_bytes_f *cb, void *app_key) {
	gameId_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static int
memb_gameId_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
                         asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	unsigned long value;

	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: value not given (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}

	value = *(const unsigned long *)sptr;

	if((value >= 1 && value <= 4294967295)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: constraint failed (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_INTEGER_specifics_t asn_SPC_gameId_specs_2 = {
	0,	0,	0,	0,	0,
	0,	/* Native long size */
	1	/* Unsigned representation */
};
static ber_tlv_tag_t asn_DEF_gameId_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gameId_2 = {
	"gameId",
	"gameId",
	gameId_2_free,
	gameId_2_print,
	gameId_2_constraint,
	gameId_2_decode_ber,
	gameId_2_encode_der,
	gameId_2_decode_xer,
	gameId_2_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_gameId_tags_2,
	sizeof(asn_DEF_gameId_tags_2)
	/sizeof(asn_DEF_gameId_tags_2[0]), /* 1 */
	asn_DEF_gameId_tags_2,	/* Same as above */
	sizeof(asn_DEF_gameId_tags_2)
	/sizeof(asn_DEF_gameId_tags_2[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_gameId_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CleanerChatTypeGame_1[] = {
	{	ATF_NOFLAGS, 0, offsetof(struct CleanerChatTypeGame, gameId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_gameId_2,
		memb_gameId_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameId"
	},
};
static ber_tlv_tag_t asn_DEF_CleanerChatTypeGame_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CleanerChatTypeGame_tag2el_1[] = {
	{ (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 } /* gameId at 52 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CleanerChatTypeGame_specs_1 = {
	sizeof(struct CleanerChatTypeGame),
	offsetof(struct CleanerChatTypeGame, _asn_ctx),
	asn_MAP_CleanerChatTypeGame_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	0,	/* Start extensions */
	2	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CleanerChatTypeGame = {
	"CleanerChatTypeGame",
	"CleanerChatTypeGame",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CleanerChatTypeGame_tags_1,
	sizeof(asn_DEF_CleanerChatTypeGame_tags_1)
	/sizeof(asn_DEF_CleanerChatTypeGame_tags_1[0]), /* 1 */
	asn_DEF_CleanerChatTypeGame_tags_1,	/* Same as above */
	sizeof(asn_DEF_CleanerChatTypeGame_tags_1)
	/sizeof(asn_DEF_CleanerChatTypeGame_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CleanerChatTypeGame_1,
	1,	/* Elements count */
	&asn_SPC_CleanerChatTypeGame_specs_1	/* Additional specs */
};

