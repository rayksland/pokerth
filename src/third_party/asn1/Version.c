/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include "Version.h"

static int
memb_major_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
                        asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;

	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: value not given (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}

	value = *(const long *)sptr;

	if((value >= 0 && value <= 65535)) {
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
memb_minor_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
                        asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;

	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: value not given (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}

	value = *(const long *)sptr;

	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: constraint failed (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_Version_1[] = {
	{	ATF_NOFLAGS, 0, offsetof(struct Version, major),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_major_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"major"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct Version, minor),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_minor_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"minor"
	},
};
static ber_tlv_tag_t asn_DEF_Version_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Version_tag2el_1[] = {
	{ (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 1 }, /* major at 108 */
	{ (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 0 } /* minor at 109 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Version_specs_1 = {
	sizeof(struct Version),
	offsetof(struct Version, _asn_ctx),
	asn_MAP_Version_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Version = {
	"Version",
	"Version",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Version_tags_1,
	sizeof(asn_DEF_Version_tags_1)
	/sizeof(asn_DEF_Version_tags_1[0]), /* 1 */
	asn_DEF_Version_tags_1,	/* Same as above */
	sizeof(asn_DEF_Version_tags_1)
	/sizeof(asn_DEF_Version_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Version_1,
	2,	/* Elements count */
	&asn_SPC_Version_specs_1	/* Additional specs */
};

