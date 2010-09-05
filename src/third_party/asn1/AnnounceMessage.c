/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include <asn_internal.h>

#include "AnnounceMessage.h"

static int
serverType_5_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
serverType_5_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
serverType_5_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	serverType_5_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
serverType_5_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	serverType_5_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
serverType_5_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	serverType_5_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
serverType_5_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	serverType_5_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
serverType_5_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	serverType_5_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
serverType_5_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	serverType_5_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static int
memb_latestBetaRevision_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_numPlayersOnServer_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_INTEGER_enum_map_t asn_MAP_serverType_value2enum_5[] = {
	{ 0,	13,	"serverTypeLAN" },
	{ 1,	24,	"serverTypeInternetNoAuth" },
	{ 2,	22,	"serverTypeInternetAuth" }
};
static unsigned int asn_MAP_serverType_enum2value_5[] = {
	2,	/* serverTypeInternetAuth(2) */
	1,	/* serverTypeInternetNoAuth(1) */
	0	/* serverTypeLAN(0) */
};
static asn_INTEGER_specifics_t asn_SPC_serverType_specs_5 = {
	asn_MAP_serverType_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_serverType_enum2value_5,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_serverType_tags_5[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_serverType_5 = {
	"serverType",
	"serverType",
	serverType_5_free,
	serverType_5_print,
	serverType_5_constraint,
	serverType_5_decode_ber,
	serverType_5_encode_der,
	serverType_5_decode_xer,
	serverType_5_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_serverType_tags_5,
	sizeof(asn_DEF_serverType_tags_5)
		/sizeof(asn_DEF_serverType_tags_5[0]), /* 1 */
	asn_DEF_serverType_tags_5,	/* Same as above */
	sizeof(asn_DEF_serverType_tags_5)
		/sizeof(asn_DEF_serverType_tags_5[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	&asn_SPC_serverType_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_AnnounceMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AnnounceMessage, protocolVersion),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Version,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"protocolVersion"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AnnounceMessage, latestGameVersion),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Version,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"latestGameVersion"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AnnounceMessage, latestBetaRevision),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_latestBetaRevision_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"latestBetaRevision"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AnnounceMessage, serverType),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_serverType_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"serverType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AnnounceMessage, numPlayersOnServer),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_numPlayersOnServer_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"numPlayersOnServer"
		},
};
static ber_tlv_tag_t asn_DEF_AnnounceMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_AnnounceMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 2, 0, 1 }, /* latestBetaRevision at 83 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 4, -1, 0 }, /* numPlayersOnServer at 89 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 3, 0, 0 }, /* serverType at 85 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 1 }, /* protocolVersion at 81 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 0 } /* latestGameVersion at 82 */
};
static asn_SEQUENCE_specifics_t asn_SPC_AnnounceMessage_specs_1 = {
	sizeof(struct AnnounceMessage),
	offsetof(struct AnnounceMessage, _asn_ctx),
	asn_MAP_AnnounceMessage_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_AnnounceMessage = {
	"AnnounceMessage",
	"AnnounceMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_AnnounceMessage_tags_1,
	sizeof(asn_DEF_AnnounceMessage_tags_1)
		/sizeof(asn_DEF_AnnounceMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_AnnounceMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_AnnounceMessage_tags_1)
		/sizeof(asn_DEF_AnnounceMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_AnnounceMessage_1,
	5,	/* Elements count */
	&asn_SPC_AnnounceMessage_specs_1	/* Additional specs */
};

