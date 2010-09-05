/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include <asn_internal.h>

#include "EndOfHandShowCards.h"

static int
memb_playerResults_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 10)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_playerResults_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PlayerResult,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_playerResults_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_playerResults_specs_2 = {
	sizeof(struct playerResults),
	offsetof(struct playerResults, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_playerResults_2 = {
	"playerResults",
	"playerResults",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_playerResults_tags_2,
	sizeof(asn_DEF_playerResults_tags_2)
		/sizeof(asn_DEF_playerResults_tags_2[0]), /* 1 */
	asn_DEF_playerResults_tags_2,	/* Same as above */
	sizeof(asn_DEF_playerResults_tags_2)
		/sizeof(asn_DEF_playerResults_tags_2[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_playerResults_2,
	1,	/* Single element */
	&asn_SPC_playerResults_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_EndOfHandShowCards_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EndOfHandShowCards, playerResults),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_playerResults_2,
		memb_playerResults_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerResults"
		},
};
static ber_tlv_tag_t asn_DEF_EndOfHandShowCards_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_EndOfHandShowCards_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 } /* playerResults at 528 */
};
static asn_SEQUENCE_specifics_t asn_SPC_EndOfHandShowCards_specs_1 = {
	sizeof(struct EndOfHandShowCards),
	offsetof(struct EndOfHandShowCards, _asn_ctx),
	asn_MAP_EndOfHandShowCards_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	0,	/* Start extensions */
	2	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_EndOfHandShowCards = {
	"EndOfHandShowCards",
	"EndOfHandShowCards",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_EndOfHandShowCards_tags_1,
	sizeof(asn_DEF_EndOfHandShowCards_tags_1)
		/sizeof(asn_DEF_EndOfHandShowCards_tags_1[0]), /* 1 */
	asn_DEF_EndOfHandShowCards_tags_1,	/* Same as above */
	sizeof(asn_DEF_EndOfHandShowCards_tags_1)
		/sizeof(asn_DEF_EndOfHandShowCards_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_EndOfHandShowCards_1,
	1,	/* Elements count */
	&asn_SPC_EndOfHandShowCards_specs_1	/* Additional specs */
};

