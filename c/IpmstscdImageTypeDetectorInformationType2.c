/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "IPMTSCD"
 * 	found in "../Annex_A_10711_v2.0.asn"
 * 	`asn1c -fcompound-names`
 */

#include "IpmstscdImageTypeDetectorInformationType2.h"

static int
memb_congestionLength1_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 150)) {
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
memb_vehicleStartPosition1_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 150)) {
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
memb_congestionLength2_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 150)) {
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
memb_vehicleStartPosition2_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 150)) {
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
memb_directionDensity_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 32)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_congestionInfo_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IpmstscdImageTypeDetectorInformationType2__congestionInfo, congestionLength1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_congestionLength1_constraint_2,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"congestionLength1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IpmstscdImageTypeDetectorInformationType2__congestionInfo, vehicleStartPosition1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_vehicleStartPosition1_constraint_2,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vehicleStartPosition1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IpmstscdImageTypeDetectorInformationType2__congestionInfo, congestionLength2),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_congestionLength2_constraint_2,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"congestionLength2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IpmstscdImageTypeDetectorInformationType2__congestionInfo, vehicleStartPosition2),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_vehicleStartPosition2_constraint_2,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vehicleStartPosition2"
		},
};
static const ber_tlv_tag_t asn_DEF_congestionInfo_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_congestionInfo_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* congestionLength1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* vehicleStartPosition1 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* congestionLength2 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* vehicleStartPosition2 */
};
static asn_SEQUENCE_specifics_t asn_SPC_congestionInfo_specs_2 = {
	sizeof(struct IpmstscdImageTypeDetectorInformationType2__congestionInfo),
	offsetof(struct IpmstscdImageTypeDetectorInformationType2__congestionInfo, _asn_ctx),
	asn_MAP_congestionInfo_tag2el_2,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_congestionInfo_2 = {
	"congestionInfo",
	"congestionInfo",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_congestionInfo_tags_2,
	sizeof(asn_DEF_congestionInfo_tags_2)
		/sizeof(asn_DEF_congestionInfo_tags_2[0]) - 1, /* 1 */
	asn_DEF_congestionInfo_tags_2,	/* Same as above */
	sizeof(asn_DEF_congestionInfo_tags_2)
		/sizeof(asn_DEF_congestionInfo_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_congestionInfo_2,
	4,	/* Elements count */
	&asn_SPC_congestionInfo_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_directionDensity_7[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_DirectionDensitySeq,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_directionDensity_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_directionDensity_specs_7 = {
	sizeof(struct IpmstscdImageTypeDetectorInformationType2__directionDensity),
	offsetof(struct IpmstscdImageTypeDetectorInformationType2__directionDensity, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_directionDensity_7 = {
	"directionDensity",
	"directionDensity",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_directionDensity_tags_7,
	sizeof(asn_DEF_directionDensity_tags_7)
		/sizeof(asn_DEF_directionDensity_tags_7[0]) - 1, /* 1 */
	asn_DEF_directionDensity_tags_7,	/* Same as above */
	sizeof(asn_DEF_directionDensity_tags_7)
		/sizeof(asn_DEF_directionDensity_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_directionDensity_7,
	1,	/* Single element */
	&asn_SPC_directionDensity_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_IpmstscdImageTypeDetectorInformationType2_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IpmstscdImageTypeDetectorInformationType2, congestionInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_congestionInfo_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"congestionInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IpmstscdImageTypeDetectorInformationType2, directionDensity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_directionDensity_7,
		memb_directionDensity_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"directionDensity"
		},
};
static const ber_tlv_tag_t asn_DEF_IpmstscdImageTypeDetectorInformationType2_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IpmstscdImageTypeDetectorInformationType2_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* congestionInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* directionDensity */
};
static asn_SEQUENCE_specifics_t asn_SPC_IpmstscdImageTypeDetectorInformationType2_specs_1 = {
	sizeof(struct IpmstscdImageTypeDetectorInformationType2),
	offsetof(struct IpmstscdImageTypeDetectorInformationType2, _asn_ctx),
	asn_MAP_IpmstscdImageTypeDetectorInformationType2_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_IpmstscdImageTypeDetectorInformationType2 = {
	"IpmstscdImageTypeDetectorInformationType2",
	"IpmstscdImageTypeDetectorInformationType2",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_IpmstscdImageTypeDetectorInformationType2_tags_1,
	sizeof(asn_DEF_IpmstscdImageTypeDetectorInformationType2_tags_1)
		/sizeof(asn_DEF_IpmstscdImageTypeDetectorInformationType2_tags_1[0]), /* 1 */
	asn_DEF_IpmstscdImageTypeDetectorInformationType2_tags_1,	/* Same as above */
	sizeof(asn_DEF_IpmstscdImageTypeDetectorInformationType2_tags_1)
		/sizeof(asn_DEF_IpmstscdImageTypeDetectorInformationType2_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_IpmstscdImageTypeDetectorInformationType2_1,
	2,	/* Elements count */
	&asn_SPC_IpmstscdImageTypeDetectorInformationType2_specs_1	/* Additional specs */
};

