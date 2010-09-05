/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include <asn_internal.h>

#include "UnauthenticatedLogin.h"

static int
memb_nickName_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 64)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_UnauthenticatedLogin_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UnauthenticatedLogin, nickName),
		(ASN_TAG_CLASS_UNIVERSAL | (12 << 2)),
		0,
		&asn_DEF_UTF8String,
		memb_nickName_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"nickName"
		},
	{ ATF_POINTER, 1, offsetof(struct UnauthenticatedLogin, avatar),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_AvatarHash,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"avatar"
		},
};
static ber_tlv_tag_t asn_DEF_UnauthenticatedLogin_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UnauthenticatedLogin_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 1, 0, 0 }, /* avatar at 120 */
    { (ASN_TAG_CLASS_UNIVERSAL | (12 << 2)), 0, 0, 0 } /* nickName at 119 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UnauthenticatedLogin_specs_1 = {
	sizeof(struct UnauthenticatedLogin),
	offsetof(struct UnauthenticatedLogin, _asn_ctx),
	asn_MAP_UnauthenticatedLogin_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UnauthenticatedLogin = {
	"UnauthenticatedLogin",
	"UnauthenticatedLogin",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_UnauthenticatedLogin_tags_1,
	sizeof(asn_DEF_UnauthenticatedLogin_tags_1)
		/sizeof(asn_DEF_UnauthenticatedLogin_tags_1[0]), /* 1 */
	asn_DEF_UnauthenticatedLogin_tags_1,	/* Same as above */
	sizeof(asn_DEF_UnauthenticatedLogin_tags_1)
		/sizeof(asn_DEF_UnauthenticatedLogin_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UnauthenticatedLogin_1,
	2,	/* Elements count */
	&asn_SPC_UnauthenticatedLogin_specs_1	/* Additional specs */
};

