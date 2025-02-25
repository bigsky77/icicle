
	// Copyright 2023 Ingonyama
	//
	// Licensed under the Apache License, Version 2.0 (the "License");
	// you may not use this file except in compliance with the License.
	// You may obtain a copy of the License at
	//
	//     http://www.apache.org/licenses/LICENSE-2.0
	//
	// Unless required by applicable law or agreed to in writing, software
	// distributed under the License is distributed on an "AS IS" BASIS,
	// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	// See the License for the specific language governing permissions and
	// limitations under the License.
	
// Code generated by Ingonyama DO NOT EDIT

#include <cuda.h>
#include <cuda_runtime.h>
#include <stdbool.h>
// msm.h

#ifndef _BW6761_MSM_H
#define _BW6761_MSM_H

#ifdef __cplusplus
extern "C" {
#endif

// Incomplete declaration of BW6761 projective and affine structs
typedef struct BW6761_projective_t BW6761_projective_t;
typedef struct BW6761_g2_projective_t BW6761_g2_projective_t;
typedef struct BW6761_affine_t BW6761_affine_t;
typedef struct BW6761_g2_affine_t BW6761_g2_affine_t;
typedef struct BW6761_scalar_t BW6761_scalar_t;
typedef cudaStream_t CudaStream_t;

int msm_cuda_bw6_761(
  BW6761_projective_t* out, BW6761_affine_t* points, BW6761_scalar_t* scalars, size_t count, size_t device_id);

int msm_batch_cuda_bw6_761(
  BW6761_projective_t* out,
  BW6761_affine_t* points,
  BW6761_scalar_t* scalars,
  size_t batch_size,
  size_t msm_size,
  size_t device_id);

int commit_cuda_bw6_761(
  BW6761_projective_t* d_out,
  BW6761_scalar_t* d_scalars,
  BW6761_affine_t* d_points,
  size_t count,
  unsigned large_bucket_factor,
  size_t device_id);

int commit_batch_cuda_bw6_761(
  BW6761_projective_t* d_out,
  BW6761_scalar_t* d_scalars,
  BW6761_affine_t* d_points,
  size_t count,
  size_t batch_size,
  size_t device_id);

int msm_g2_cuda_bw6_761(
  BW6761_g2_projective_t* out,
  BW6761_g2_affine_t* points,
  BW6761_scalar_t* scalars,
  size_t count,
  size_t device_id);

int msm_batch_g2_cuda_bw6_761(
  BW6761_g2_projective_t* out,
  BW6761_g2_affine_t* points,
  BW6761_scalar_t* scalars,
  size_t batch_size,
  size_t msm_size,
  size_t device_id);

int commit_g2_cuda_bw6_761(
  BW6761_g2_projective_t* d_out,
  BW6761_scalar_t* d_scalars,
  BW6761_g2_affine_t* d_points,
  size_t count,
  unsigned large_bucket_factor,
  size_t device_id);

int commit_batch_g2_cuda_bw6_761(
  BW6761_g2_projective_t* d_out,
  BW6761_scalar_t* d_scalars,
  BW6761_g2_affine_t* d_points,
  size_t count,
  size_t batch_size,
  size_t device_id,
  cudaStream_t stream);

#ifdef __cplusplus
}
#endif

#endif /* _BW6761_MSM_H */
