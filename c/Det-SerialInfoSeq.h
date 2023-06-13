/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "IPMTSCD"
 * 	found in "../Annex_A_10711_v2.0.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_Det_SerialInfoSeq_H_
#define	_Det_SerialInfoSeq_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Det_SerialInfoSeq__det_Status {
	Det_SerialInfoSeq__det_Status_normal	= 0,
	Det_SerialInfoSeq__det_Status_fault	= 1,
	Det_SerialInfoSeq__det_Status_invalid	= 2
} e_Det_SerialInfoSeq__det_Status;

/* Det-SerialInfoSeq */
typedef struct Det_SerialInfoSeq {
	long	 det_nbr;
	long	*det_Status	/* OPTIONAL */;
	OCTET_STRING_t	 serialInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Det_SerialInfoSeq_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_det_Status_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Det_SerialInfoSeq;

#ifdef __cplusplus
}
#endif

#endif	/* _Det_SerialInfoSeq_H_ */
#include <asn_internal.h>
