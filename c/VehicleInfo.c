/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "IpmstscdIDTypeDetectorInformation-Type2-Message"
 * 	found in "../ISO10711.asn"
 */

#include "VehicleInfo.h"

static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Member, vehicleID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vehicleID"
		},
	{ ATF_POINTER, 1, offsetof(struct Member, idData),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"idData"
		},
};
static const ber_tlv_tag_t asn_DEF_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* vehicleID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* idData */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct Member),
	offsetof(struct Member, _asn_ctx),
	asn_MAP_Member_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Member_tags_2,
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	asn_DEF_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Member_2,
	2,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_VehicleInfo_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_VehicleInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_VehicleInfo_specs_1 = {
	sizeof(struct VehicleInfo),
	offsetof(struct VehicleInfo, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_VehicleInfo = {
	"VehicleInfo",
	"VehicleInfo",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_VehicleInfo_tags_1,
	sizeof(asn_DEF_VehicleInfo_tags_1)
		/sizeof(asn_DEF_VehicleInfo_tags_1[0]), /* 1 */
	asn_DEF_VehicleInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_VehicleInfo_tags_1)
		/sizeof(asn_DEF_VehicleInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_VehicleInfo_1,
	1,	/* Single element */
	&asn_SPC_VehicleInfo_specs_1	/* Additional specs */
};

