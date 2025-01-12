/**
    Copyright Notice:
    Copyright 2021 DMTF. All rights reserved.
    License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/libspdm/blob/main/LICENSE.md
**/

/** @file
  SPDM common library.
  It follows the SPDM Specification.
**/

#ifndef __SPDM_DEVICE_SECRET_LIB_INTERNAL_H__
#define __SPDM_DEVICE_SECRET_LIB_INTERNAL_H__

#include <library/spdm_device_secret_lib.h>

#define MEASUREMENT_BLOCK_NUMBER 5
#define MEASUREMENT_MANIFEST_SIZE 128

#define TEST_PSK_DATA_STRING "TestPskData"
#define TEST_PSK_HINT_STRING "TestPskHint"

#define TEST_CERT_MAXINT16 1
#define TEST_CERT_MAXUINT16 2
#define TEST_CERT_MAXUINT16_LARGER 3
#define TEST_CERT_SMALL 4

//
// public cert
//
boolean read_responder_public_certificate_chain(
	IN uint32 base_hash_algo, IN uint32 base_asym_algo, OUT void **data,
	OUT uintn *size, OUT void **hash, OUT uintn *hash_size);

boolean read_requester_public_certificate_chain(
	IN uint32 base_hash_algo, IN uint16 req_base_asym_alg, OUT void **data,
	OUT uintn *size, OUT void **hash, OUT uintn *hash_size);

boolean read_responder_root_public_certificate(IN uint32 base_hash_algo,
					       IN uint32 base_asym_algo,
					       OUT void **data, OUT uintn *size,
					       OUT void **hash,
					       OUT uintn *hash_size);

boolean read_requester_root_public_certificate(IN uint32 base_hash_algo,
					       IN uint16 req_base_asym_alg,
					       OUT void **data, OUT uintn *size,
					       OUT void **hash,
					       OUT uintn *hash_size);

boolean read_responder_public_certificate_chain_by_size(
	IN uint32 base_hash_algo, IN uint32 base_asym_algo, IN uint16 CertId,
	OUT void **data, OUT uintn *size, OUT void **hash,
	OUT uintn *hash_size);

boolean read_responder_root_public_certificate_by_size(
	IN uint32 base_hash_algo, IN uint32 base_asym_algo, IN uint16 CertId,
	OUT void **data, OUT uintn *size, OUT void **hash,
	OUT uintn *hash_size);

//
// External
//
boolean read_input_file(IN char8 *file_name, OUT void **file_data,
			OUT uintn *file_size);

void dump_hex_str(IN uint8 *buffer, IN uintn buffer_size);

#endif
