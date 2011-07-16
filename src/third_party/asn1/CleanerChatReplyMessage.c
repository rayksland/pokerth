/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CHATCLEANER-PROTOCOL"
 * 	found in "../../../docs/chatcleaner.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include "CleanerChatReplyMessage.h"

static int
requestId_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
requestId_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
requestId_2_free(asn_TYPE_descriptor_t *td,
                 void *struct_ptr, int contents_only) {
	requestId_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
requestId_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
                  int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	requestId_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
requestId_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
                       void **structure, const void *bufptr, size_t size, int tag_mode) {
	requestId_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
requestId_2_encode_der(asn_TYPE_descriptor_t *td,
                       void *structure, int tag_mode, ber_tlv_tag_t tag,
                       asn_app_consume_bytes_f *cb, void *app_key) {
	requestId_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
requestId_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
                       void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	requestId_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
requestId_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
                       int ilevel, enum xer_encoder_flags_e flags,
                       asn_app_consume_bytes_f *cb, void *app_key) {
	requestId_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static int
playerId_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
playerId_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
playerId_4_free(asn_TYPE_descriptor_t *td,
                void *struct_ptr, int contents_only) {
	playerId_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
playerId_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
                 int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	playerId_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
playerId_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
                      void **structure, const void *bufptr, size_t size, int tag_mode) {
	playerId_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
playerId_4_encode_der(asn_TYPE_descriptor_t *td,
                      void *structure, int tag_mode, ber_tlv_tag_t tag,
                      asn_app_consume_bytes_f *cb, void *app_key) {
	playerId_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
playerId_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
                      void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	playerId_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
playerId_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
                      int ilevel, enum xer_encoder_flags_e flags,
                      asn_app_consume_bytes_f *cb, void *app_key) {
	playerId_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static int
cleanerActionType_5_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
                               asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
cleanerActionType_5_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
	/* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
cleanerActionType_5_free(asn_TYPE_descriptor_t *td,
                         void *struct_ptr, int contents_only) {
	cleanerActionType_5_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
cleanerActionType_5_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
                          int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	cleanerActionType_5_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
cleanerActionType_5_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
                               void **structure, const void *bufptr, size_t size, int tag_mode) {
	cleanerActionType_5_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
cleanerActionType_5_encode_der(asn_TYPE_descriptor_t *td,
                               void *structure, int tag_mode, ber_tlv_tag_t tag,
                               asn_app_consume_bytes_f *cb, void *app_key) {
	cleanerActionType_5_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
cleanerActionType_5_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
                               void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	cleanerActionType_5_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
cleanerActionType_5_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
                               int ilevel, enum xer_encoder_flags_e flags,
                               asn_app_consume_bytes_f *cb, void *app_key) {
	cleanerActionType_5_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static int
memb_requestId_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_playerId_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_cleanerText_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
                              asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const UTF8String_t *st = (const UTF8String_t *)sptr;
	size_t size;

	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: value not given (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}

	size = UTF8String_length(st);
	if((ssize_t)size < 0) {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: UTF-8: broken encoding (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}

	if((size >= 1 && size <= 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: constraint failed (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_INTEGER_specifics_t asn_SPC_requestId_specs_2 = {
	0,	0,	0,	0,	0,
	0,	/* Native long size */
	1	/* Unsigned representation */
};
static ber_tlv_tag_t asn_DEF_requestId_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_requestId_2 = {
	"requestId",
	"requestId",
	requestId_2_free,
	requestId_2_print,
	requestId_2_constraint,
	requestId_2_decode_ber,
	requestId_2_encode_der,
	requestId_2_decode_xer,
	requestId_2_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_requestId_tags_2,
	sizeof(asn_DEF_requestId_tags_2)
	/sizeof(asn_DEF_requestId_tags_2[0]), /* 1 */
	asn_DEF_requestId_tags_2,	/* Same as above */
	sizeof(asn_DEF_requestId_tags_2)
	/sizeof(asn_DEF_requestId_tags_2[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_requestId_specs_2	/* Additional specs */
};

static asn_INTEGER_specifics_t asn_SPC_playerId_specs_4 = {
	0,	0,	0,	0,	0,
	0,	/* Native long size */
	1	/* Unsigned representation */
};
static ber_tlv_tag_t asn_DEF_playerId_tags_4[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_playerId_4 = {
	"playerId",
	"playerId",
	playerId_4_free,
	playerId_4_print,
	playerId_4_constraint,
	playerId_4_decode_ber,
	playerId_4_encode_der,
	playerId_4_decode_xer,
	playerId_4_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_playerId_tags_4,
	sizeof(asn_DEF_playerId_tags_4)
	/sizeof(asn_DEF_playerId_tags_4[0]), /* 1 */
	asn_DEF_playerId_tags_4,	/* Same as above */
	sizeof(asn_DEF_playerId_tags_4)
	/sizeof(asn_DEF_playerId_tags_4[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_playerId_specs_4	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_cleanerActionType_value2enum_5[] = {
	{ 0,	17,	"cleanerActionNone" },
	{ 1,	20,	"cleanerActionWarning" },
	{ 2,	17,	"cleanerActionKick" },
	{ 3,	16,	"cleanerActionBan" }
};
static unsigned int asn_MAP_cleanerActionType_enum2value_5[] = {
	3,	/* cleanerActionBan(3) */
	2,	/* cleanerActionKick(2) */
	0,	/* cleanerActionNone(0) */
	1	/* cleanerActionWarning(1) */
};
static asn_INTEGER_specifics_t asn_SPC_cleanerActionType_specs_5 = {
	asn_MAP_cleanerActionType_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_cleanerActionType_enum2value_5,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_cleanerActionType_tags_5[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cleanerActionType_5 = {
	"cleanerActionType",
	"cleanerActionType",
	cleanerActionType_5_free,
	cleanerActionType_5_print,
	cleanerActionType_5_constraint,
	cleanerActionType_5_decode_ber,
	cleanerActionType_5_encode_der,
	cleanerActionType_5_decode_xer,
	cleanerActionType_5_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_cleanerActionType_tags_5,
	sizeof(asn_DEF_cleanerActionType_tags_5)
	/sizeof(asn_DEF_cleanerActionType_tags_5[0]), /* 1 */
	asn_DEF_cleanerActionType_tags_5,	/* Same as above */
	sizeof(asn_DEF_cleanerActionType_tags_5)
	/sizeof(asn_DEF_cleanerActionType_tags_5[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cleanerActionType_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CleanerChatReplyMessage_1[] = {
	{	ATF_NOFLAGS, 0, offsetof(struct CleanerChatReplyMessage, requestId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_requestId_2,
		memb_requestId_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"requestId"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct CleanerChatReplyMessage, cleanerChatType),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_CleanerChatType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"cleanerChatType"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct CleanerChatReplyMessage, playerId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_playerId_4,
		memb_playerId_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerId"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct CleanerChatReplyMessage, cleanerActionType),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_cleanerActionType_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"cleanerActionType"
	},
	{	ATF_POINTER, 1, offsetof(struct CleanerChatReplyMessage, cleanerText),
		(ASN_TAG_CLASS_UNIVERSAL | (12 << 2)),
		0,
		&asn_DEF_UTF8String,
		memb_cleanerText_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"cleanerText"
	},
};
static ber_tlv_tag_t asn_DEF_CleanerChatReplyMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CleanerChatReplyMessage_tag2el_1[] = {
	{ (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 1 }, /* requestId at 64 */
	{ (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 2, -1, 0 }, /* playerId at 66 */
	{ (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 3, 0, 0 }, /* cleanerActionType at 68 */
	{ (ASN_TAG_CLASS_UNIVERSAL | (12 << 2)), 4, 0, 0 }, /* cleanerText at 73 */
	{ (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 }, /* cleanerChatTypeLobby at 44 */
	{ (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cleanerChatTypeGame at 46 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CleanerChatReplyMessage_specs_1 = {
	sizeof(struct CleanerChatReplyMessage),
	offsetof(struct CleanerChatReplyMessage, _asn_ctx),
	asn_MAP_CleanerChatReplyMessage_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CleanerChatReplyMessage = {
	"CleanerChatReplyMessage",
	"CleanerChatReplyMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CleanerChatReplyMessage_tags_1,
	sizeof(asn_DEF_CleanerChatReplyMessage_tags_1)
	/sizeof(asn_DEF_CleanerChatReplyMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_CleanerChatReplyMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_CleanerChatReplyMessage_tags_1)
	/sizeof(asn_DEF_CleanerChatReplyMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_CleanerChatReplyMessage_1,
	5,	/* Elements count */
	&asn_SPC_CleanerChatReplyMessage_specs_1	/* Additional specs */
};

