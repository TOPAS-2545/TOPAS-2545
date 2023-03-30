/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "IpmstscdOccTypeDetectorInformation-Type2-Message"
 * 	found in "../ISO10711.asn"
 */

#ifndef	_Det_Accmulated_H_
#define	_Det_Accmulated_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum det_Status {
	det_Status_normal	= 0,
	det_Status_fault	= 1,
	det_Status_invalid	= 2
} e_det_Status;

/* Det-Accmulated */
typedef struct Det_Accmulated {
	A_SEQUENCE_OF(struct Member {
		long	 det_nbr;
		long	*det_Status	/* OPTIONAL */;
		long	 density;
		long	 occupancy;
		long	 detPulseErr;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Det_Accmulated_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_det_Status_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Det_Accmulated;

#ifdef __cplusplus
}
#endif

#endif	/* _Det_Accmulated_H_ */
#include <asn_internal.h>
