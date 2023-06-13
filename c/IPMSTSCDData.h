/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "IPMTSCD"
 * 	found in "../Annex_A_10711_v2.0.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_IPMSTSCDData_H_
#define	_IPMSTSCDData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GeneralTimeLocationCore;
struct IpmstscdDetDataSeq;

/* IPMSTSCDData */
typedef struct IPMSTSCDData {
	long	 detectorController_index;
	struct GeneralTimeLocationCore	*detectorController_Time_Location	/* OPTIONAL */;
	struct IPMSTSCDData__ipmstscdDetData {
		A_SEQUENCE_OF(struct IpmstscdDetDataSeq) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ipmstscdDetData;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IPMSTSCDData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IPMSTSCDData;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GeneralTimeLocationCore.h"
#include "IpmstscdDetDataSeq.h"

#endif	/* _IPMSTSCDData_H_ */
#include <asn_internal.h>
