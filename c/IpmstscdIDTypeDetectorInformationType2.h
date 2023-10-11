/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "IPMTSCD"
 * 	found in "../DataPacketStructuresV3MarkRetallack.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_IpmstscdIDTypeDetectorInformationType2_H_
#define	_IpmstscdIDTypeDetectorInformationType2_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VehicleInfoSeq;

/* IpmstscdIDTypeDetectorInformationType2 */
typedef struct IpmstscdIDTypeDetectorInformationType2 {
	struct IpmstscdIDTypeDetectorInformationType2__vehicleInfo {
		A_SEQUENCE_OF(struct VehicleInfoSeq) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} vehicleInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IpmstscdIDTypeDetectorInformationType2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IpmstscdIDTypeDetectorInformationType2;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "VehicleInfoSeq.h"

#endif	/* _IpmstscdIDTypeDetectorInformationType2_H_ */
#include <asn_internal.h>
