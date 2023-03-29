/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "IPMTSCD"
 * 	found in "ISO10711.asn"
 */

#include "GeneralTimeLocationCore.h"

static int
memb_otdv_LocationLongitude_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -180000000 && value <= 180000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_otdv_LocationLatitude_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -90000000 && value <= 90000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_otdv_LocationElevation_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8192 && value <= 57344)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_GeneralTimeLocationCore_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GeneralTimeLocationCore, otdv_CurrentTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Time,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"otdv-CurrentTime"
		},
	{ ATF_POINTER, 3, offsetof(struct GeneralTimeLocationCore, otdv_LocationLongitude),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_otdv_LocationLongitude_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"otdv-LocationLongitude"
		},
	{ ATF_POINTER, 2, offsetof(struct GeneralTimeLocationCore, otdv_LocationLatitude),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_otdv_LocationLatitude_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"otdv-LocationLatitude"
		},
	{ ATF_POINTER, 1, offsetof(struct GeneralTimeLocationCore, otdv_LocationElevation),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_otdv_LocationElevation_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"otdv-LocationElevation"
		},
};
static const ber_tlv_tag_t asn_DEF_GeneralTimeLocationCore_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GeneralTimeLocationCore_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* otdv-CurrentTime */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* otdv-LocationLongitude */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* otdv-LocationLatitude */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* otdv-LocationElevation */
};
static asn_SEQUENCE_specifics_t asn_SPC_GeneralTimeLocationCore_specs_1 = {
	sizeof(struct GeneralTimeLocationCore),
	offsetof(struct GeneralTimeLocationCore, _asn_ctx),
	asn_MAP_GeneralTimeLocationCore_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GeneralTimeLocationCore = {
	"GeneralTimeLocationCore",
	"GeneralTimeLocationCore",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_GeneralTimeLocationCore_tags_1,
	sizeof(asn_DEF_GeneralTimeLocationCore_tags_1)
		/sizeof(asn_DEF_GeneralTimeLocationCore_tags_1[0]), /* 1 */
	asn_DEF_GeneralTimeLocationCore_tags_1,	/* Same as above */
	sizeof(asn_DEF_GeneralTimeLocationCore_tags_1)
		/sizeof(asn_DEF_GeneralTimeLocationCore_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_GeneralTimeLocationCore_1,
	4,	/* Elements count */
	&asn_SPC_GeneralTimeLocationCore_specs_1	/* Additional specs */
};

