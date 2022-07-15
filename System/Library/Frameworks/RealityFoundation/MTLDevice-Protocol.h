//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RealityFoundation/NSObject-Protocol.h>

@class MTLAccelerationStructureDescriptor, MTLBinaryArchiveDescriptor, MTLCompileOptions, MTLComputePipelineDescriptor, MTLCounterSampleBufferDescriptor, MTLDepthStencilDescriptor, MTLHeapDescriptor, MTLIOCommandQueueDescriptor, MTLIndirectCommandBufferDescriptor, MTLMeshRenderPipelineDescriptor, MTLRasterizationRateMapDescriptor, MTLRenderPipelineDescriptor, MTLSamplerDescriptor, MTLSharedEventHandle, MTLStitchedLibraryDescriptor, MTLTextureDescriptor, MTLTileRenderPipelineDescriptor, NSArray, NSBundle, NSString, NSURL, OS_dispatch_data;
@protocol MTLAccelerationStructure, MTLArgumentEncoder, MTLBinaryArchive, MTLBuffer, MTLBufferBinding, MTLCommandQueue, MTLComputePipelineState, MTLCounterSampleBuffer, MTLDepthStencilState, MTLDynamicLibrary, MTLEvent, MTLFence, MTLFunction, MTLHeap, MTLIOCommandQueue, MTLIOFileHandle, MTLIndirectCommandBuffer, MTLLibrary, MTLRasterizationRateMap, MTLRenderPipelineState, MTLSamplerState, MTLSharedEvent, MTLTexture;

@protocol MTLDevice <NSObject>
@property(nonatomic, readonly) _Bool supportsPrimitiveMotionBlur;
@property(nonatomic, readonly) _Bool supportsRaytracingFromRender;
@property(nonatomic, readonly) _Bool supportsFunctionPointersFromRender;
@property(nonatomic, readonly) _Bool supportsFunctionPointers;
- (CDStruct_4bcfbbae)heapAccelerationStructureSizeAndAlignWithDescriptor:(MTLAccelerationStructureDescriptor *)arg1;
- (CDStruct_4bcfbbae)heapAccelerationStructureSizeAndAlignWithSize:(unsigned long long)arg1;
- (id <MTLAccelerationStructure>)newAccelerationStructureWithDescriptor:(MTLAccelerationStructureDescriptor *)arg1;
- (id <MTLAccelerationStructure>)newAccelerationStructureWithSize:(unsigned long long)arg1;
- (CDStruct_14f26992)accelerationStructureSizesWithDescriptor:(MTLAccelerationStructureDescriptor *)arg1;
@property(nonatomic, readonly) _Bool supportsRaytracing;
- (id <MTLBinaryArchive>)newBinaryArchiveWithDescriptor:(MTLBinaryArchiveDescriptor *)arg1 error:(id *)arg2;
- (id <MTLDynamicLibrary>)newDynamicLibraryWithURL:(NSURL *)arg1 error:(id *)arg2;
- (id <MTLDynamicLibrary>)newDynamicLibrary:(id <MTLLibrary>)arg1 error:(id *)arg2;
@property(nonatomic, readonly) _Bool supportsRenderDynamicLibraries;
@property(nonatomic, readonly) _Bool supportsDynamicLibraries;
- (_Bool)supportsVertexAmplificationCount:(unsigned long long)arg1;
- (_Bool)supportsCounterSampling:(unsigned long long)arg1;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithBufferBinding:(id <MTLBufferBinding>)arg1;
- (void)sampleTimestamps:(unsigned long long *)arg1 gpuTimestamp:(unsigned long long *)arg2;
- (id <MTLCounterSampleBuffer>)newCounterSampleBufferWithDescriptor:(MTLCounterSampleBufferDescriptor *)arg1 error:(id *)arg2;
@property(nonatomic, readonly) NSArray *counterSets;
@property(nonatomic, readonly) long long maxBufferLength;
- (CDStruct_14f26992)sparseTileSizeWithTextureType:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 sampleCount:(unsigned long long)arg3 sparsePageSize:(long long)arg4;
- (unsigned long long)sparseTileSizeInBytesForSparsePageSize:(long long)arg1;
@property(nonatomic, readonly) long long sparseTileSizeInBytes;
- (CDStruct_14f26992)sparseTileSizeWithTextureType:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 sampleCount:(unsigned long long)arg3;
- (id <MTLIOFileHandle>)newIOHandleWithURL:(NSURL *)arg1 compressionMethod:(long long)arg2 error:(id *)arg3;
- (id <MTLIOCommandQueue>)newIOCommandQueueWithDescriptor:(MTLIOCommandQueueDescriptor *)arg1 error:(id *)arg2;
- (id <MTLIOFileHandle>)newIOHandleWithURL:(NSURL *)arg1 error:(id *)arg2;
- (id <MTLSharedEvent>)newSharedEventWithHandle:(MTLSharedEventHandle *)arg1;
- (id <MTLSharedEvent>)newSharedEvent;
- (id <MTLEvent>)newEvent;
- (id <MTLIndirectCommandBuffer>)newIndirectCommandBufferWithDescriptor:(MTLIndirectCommandBufferDescriptor *)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id <MTLRasterizationRateMap>)newRasterizationRateMapWithDescriptor:(MTLRasterizationRateMapDescriptor *)arg1;
- (_Bool)supportsRasterizationRateMapWithLayerCount:(unsigned long long)arg1;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithArguments:(NSArray *)arg1;
- (void)getDefaultSamplePositions:(CDStruct_b2fbf00d *)arg1 count:(unsigned long long)arg2;
- (_Bool)areProgrammableSamplePositionsSupported;
@property(nonatomic, readonly) long long maxArgumentBufferSamplerCount;
@property(nonatomic, readonly) long long maxThreadgroupMemoryLength;
- (void)newRenderPipelineStateWithMeshDescriptor:(MTLMeshRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLRenderPipelineState>, MTLRenderPipelineReflection *, NSError *))arg3;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithMeshDescriptor:(MTLMeshRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newRenderPipelineStateWithTileDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLRenderPipelineState>, MTLRenderPipelineReflection *, NSError *))arg3;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithTileDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (unsigned long long)minimumTextureBufferAlignmentForPixelFormat:(unsigned long long)arg1;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (_Bool)supportsTextureSampleCount:(unsigned long long)arg1;
- (_Bool)supportsFamily:(long long)arg1;
- (_Bool)supportsFeatureSet:(unsigned long long)arg1;
- (id <MTLFence>)newFence;
- (void)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLComputePipelineState>, MTLComputePipelineReflection *, NSError *))arg3;
- (id <MTLComputePipelineState>)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLComputePipelineState>, MTLComputePipelineReflection *, NSError *))arg3;
- (void)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 completionHandler:(void (^)(id <MTLComputePipelineState>, NSError *))arg2;
- (id <MTLComputePipelineState>)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id <MTLComputePipelineState>)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLRenderPipelineState>, MTLRenderPipelineReflection *, NSError *))arg3;
- (void)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 completionHandler:(void (^)(id <MTLRenderPipelineState>, NSError *))arg2;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 error:(id *)arg2;
- (void)newLibraryWithStitchedDescriptor:(MTLStitchedLibraryDescriptor *)arg1 completionHandler:(void (^)(id <MTLLibrary>, NSError *))arg2;
- (id <MTLLibrary>)newLibraryWithStitchedDescriptor:(MTLStitchedLibraryDescriptor *)arg1 error:(id *)arg2;
- (void)newLibraryWithSource:(NSString *)arg1 options:(MTLCompileOptions *)arg2 completionHandler:(void (^)(id <MTLLibrary>, NSError *))arg3;
- (id <MTLLibrary>)newLibraryWithSource:(NSString *)arg1 options:(MTLCompileOptions *)arg2 error:(id *)arg3;
- (id <MTLLibrary>)newLibraryWithData:(OS_dispatch_data *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newLibraryWithURL:(NSURL *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newLibraryWithFile:(NSString *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newDefaultLibraryWithBundle:(NSBundle *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newDefaultLibrary;
- (id <MTLSamplerState>)newSamplerStateWithDescriptor:(MTLSamplerDescriptor *)arg1;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id <MTLDepthStencilState>)newDepthStencilStateWithDescriptor:(MTLDepthStencilDescriptor *)arg1;
- (id <MTLBuffer>)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(void (^)(void *, unsigned long long))arg4;
- (id <MTLBuffer>)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id <MTLBuffer>)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id <MTLHeap>)newHeapWithDescriptor:(MTLHeapDescriptor *)arg1;
- (CDStruct_4bcfbbae)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (CDStruct_4bcfbbae)heapTextureSizeAndAlignWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id <MTLCommandQueue>)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (id <MTLCommandQueue>)newCommandQueue;
@property(nonatomic, readonly) long long currentAllocatedSize;
@property(nonatomic, readonly) _Bool supportsShaderBarycentricCoordinates;
- (_Bool)areBarycentricCoordsSupported;
@property(nonatomic, readonly) _Bool supportsPullModelInterpolation;
@property(nonatomic, readonly) _Bool supportsBCTextureCompression;
@property(nonatomic, readonly) _Bool supportsQueryTextureLOD;
@property(nonatomic, readonly) _Bool supports32BitMSAA;
@property(nonatomic, readonly) _Bool supports32BitFloatFiltering;
- (_Bool)areRasterOrderGroupsSupported;
@property(nonatomic, readonly) unsigned long long argumentBuffersSupport;
@property(nonatomic, readonly) unsigned long long readWriteTextureSupport;
- (_Bool)isDepth24Stencil8PixelFormatSupported;
@property(nonatomic, readonly) unsigned long long recommendedMaxWorkingSetSize;
@property(nonatomic, readonly) _Bool hasUnifiedMemory;
- (_Bool)isRemovable;
- (_Bool)isHeadless;
- (_Bool)isLowPower;
@property(nonatomic, readonly) CDStruct_14f26992 maxThreadsPerThreadgroup;
@property(nonatomic, readonly) unsigned long long registryID;
@property(nonatomic, readonly) NSString *name;

@optional
- (void)convertSparseTileRegions:(const CDStruct_4c83c94d *)arg1 toPixelRegions:(CDStruct_4c83c94d *)arg2 withTileSize:(CDStruct_14f26992)arg3 numRegions:(unsigned long long)arg4;
- (void)convertSparsePixelRegions:(const CDStruct_4c83c94d *)arg1 toTileRegions:(CDStruct_4c83c94d *)arg2 withTileSize:(CDStruct_14f26992)arg3 alignmentMode:(unsigned long long)arg4 numRegions:(unsigned long long)arg5;

// Remaining properties
@property(nonatomic, readonly) _Bool barycentricCoordsSupported;
@property(nonatomic, readonly) _Bool depth24Stencil8PixelFormatSupported;
@property(nonatomic, readonly) _Bool headless;
@property(nonatomic, readonly) _Bool lowPower;
@property(nonatomic, readonly) _Bool programmableSamplePositionsSupported;
@property(nonatomic, readonly) _Bool rasterOrderGroupsSupported;
@property(nonatomic, readonly) _Bool removable;
@end
