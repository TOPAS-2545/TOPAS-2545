/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO14827-2"
 * 	found in "../ISO14927-1.asn"
 */

#include "Time.h"

static int
memb_deci_seconds_constraint_8(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 9)) {
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
memb_centi_seconds_constraint_8(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 99)) {
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
memb_milliseconds_constraint_8(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 999)) {
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
memb_timezone_Hour_qty_constraint_13(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -13 && value <= 13)) {
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
memb_time_Minute_qty_constraint_13(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 59)) {
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
memb_time_Year_qty_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -32768 && value <= 32767)) {
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
memb_time_Month_qty_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 12)) {
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
memb_time_Day_qty_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 31)) {
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
memb_time_Hour_qty_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 23)) {
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
memb_time_Minute_qty_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 59)) {
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
memb_time_Second_qty_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 60)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int asn_DFL_5_set_0(int set_value, void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static int asn_DFL_6_set_0(int set_value, void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static int asn_DFL_7_set_0(int set_value, void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static asn_TYPE_member_t asn_MBR_time_SecondFractions_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct time_SecondFractions, choice.deci_seconds),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_deci_seconds_constraint_8,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"deci-seconds"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct time_SecondFractions, choice.centi_seconds),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_centi_seconds_constraint_8,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"centi-seconds"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct time_SecondFractions, choice.milliseconds),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_milliseconds_constraint_8,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"milliseconds"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_time_SecondFractions_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* deci-seconds */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* centi-seconds */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, 0, 0 } /* milliseconds */
};
static asn_CHOICE_specifics_t asn_SPC_time_SecondFractions_specs_8 = {
	sizeof(struct time_SecondFractions),
	offsetof(struct time_SecondFractions, _asn_ctx),
	offsetof(struct time_SecondFractions, present),
	sizeof(((struct time_SecondFractions *)0)->present),
	asn_MAP_time_SecondFractions_tag2el_8,
	3,	/* Count of tags in the map */
	0,
	3	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_time_SecondFractions_8 = {
	"time-SecondFractions",
	"time-SecondFractions",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_time_SecondFractions_8,
	3,	/* Elements count */
	&asn_SPC_time_SecondFractions_specs_8	/* Additional specs */
};

static int asn_DFL_14_set_0(int set_value, void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static int asn_DFL_15_set_0(int set_value, void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static asn_TYPE_member_t asn_MBR_time_Timezone_13[] = {
	{ ATF_NOFLAGS, 2, offsetof(struct time_Timezone, timezone_Hour_qty),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_timezone_Hour_qty_constraint_13,
		0,	/* PER is not compiled, use -gen-PER */
		asn_DFL_14_set_0,	/* DEFAULT 0 */
		"timezone-Hour-qty"
		},
	{ ATF_NOFLAGS, 1, offsetof(struct time_Timezone, time_Minute_qty),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_time_Minute_qty_constraint_13,
		0,	/* PER is not compiled, use -gen-PER */
		asn_DFL_15_set_0,	/* DEFAULT 0 */
		"time-Minute-qty"
		},
};
static const ber_tlv_tag_t asn_DEF_time_Timezone_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_time_Timezone_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* timezone-Hour-qty */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 } /* time-Minute-qty */
};
static asn_SEQUENCE_specifics_t asn_SPC_time_Timezone_specs_13 = {
	sizeof(struct time_Timezone),
	offsetof(struct time_Timezone, _asn_ctx),
	asn_MAP_time_Timezone_tag2el_13,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_time_Timezone_13 = {
	"time-Timezone",
	"time-Timezone",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_time_Timezone_tags_13,
	sizeof(asn_DEF_time_Timezone_tags_13)
		/sizeof(asn_DEF_time_Timezone_tags_13[0]), /* 2 */
	asn_DEF_time_Timezone_tags_13,	/* Same as above */
	sizeof(asn_DEF_time_Timezone_tags_13)
		/sizeof(asn_DEF_time_Timezone_tags_13[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_time_Timezone_13,
	2,	/* Elements count */
	&asn_SPC_time_Timezone_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Time_1[] = {
	{ ATF_POINTER, 6, offsetof(struct Time, time_Year_qty),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_time_Year_qty_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"time-Year-qty"
		},
	{ ATF_POINTER, 5, offsetof(struct Time, time_Month_qty),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_time_Month_qty_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"time-Month-qty"
		},
	{ ATF_POINTER, 4, offsetof(struct Time, time_Day_qty),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_time_Day_qty_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"time-Day-qty"
		},
	{ ATF_NOFLAGS, 3, offsetof(struct Time, time_Hour_qty),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_time_Hour_qty_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		asn_DFL_5_set_0,	/* DEFAULT 0 */
		"time-Hour-qty"
		},
	{ ATF_NOFLAGS, 2, offsetof(struct Time, time_Minute_qty),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_time_Minute_qty_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		asn_DFL_6_set_0,	/* DEFAULT 0 */
		"time-Minute-qty"
		},
	{ ATF_NOFLAGS, 1, offsetof(struct Time, time_Second_qty),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_time_Second_qty_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		asn_DFL_7_set_0,	/* DEFAULT 0 */
		"time-Second-qty"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Time, time_SecondFractions),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_time_SecondFractions_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"time-SecondFractions"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Time, time_Timezone),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_time_Timezone_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"time-Timezone"
		},
};
static const ber_tlv_tag_t asn_DEF_Time_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Time_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* time-Year-qty */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* time-Month-qty */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* time-Day-qty */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* time-Hour-qty */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* time-Minute-qty */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* time-Second-qty */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 1 }, /* time-SecondFractions */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 7, -1, 0 } /* time-Timezone */
};
static asn_SEQUENCE_specifics_t asn_SPC_Time_specs_1 = {
	sizeof(struct Time),
	offsetof(struct Time, _asn_ctx),
	asn_MAP_Time_tag2el_1,
	8,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	7,	/* Start extensions */
	9	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Time = {
	"Time",
	"Time",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Time_tags_1,
	sizeof(asn_DEF_Time_tags_1)
		/sizeof(asn_DEF_Time_tags_1[0]), /* 1 */
	asn_DEF_Time_tags_1,	/* Same as above */
	sizeof(asn_DEF_Time_tags_1)
		/sizeof(asn_DEF_Time_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Time_1,
	8,	/* Elements count */
	&asn_SPC_Time_specs_1	/* Additional specs */
};

