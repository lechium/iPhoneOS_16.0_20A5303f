//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLComputePipelineDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor
{
    struct MTLComputePipelineDescriptorPrivate _private;	// 16 = 0x10
    struct FlatBufferBuilder _builder;	// 176 = 0xb0
}

- (id).cxx_construct;	// IMP=0x00000000000d0a7d
- (void).cxx_destruct;	// IMP=0x00000000000d0a6c
- (const void *)getPipelineScript;	// IMP=0x00000000000d0a32
- (id)newSerializedComputeDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000d06c5
- (id)newSerializedComputeData;	// IMP=0x00000000000d06af
- (void)validateWithDevice:(id)arg1;	// IMP=0x00000000000d0679
- (_Bool)validateWithDevice:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d04e9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d0276
- (unsigned long long)hash;	// IMP=0x00000000000d0089
- (void)setPluginData:(id)arg1;	// IMP=0x00000000000d0049
- (id)pluginData;	// IMP=0x00000000000d0037
- (id)buffers;	// IMP=0x00000000000d0025
- (const struct MTLComputePipelineDescriptorPrivate *)_descriptorPrivate;	// IMP=0x00000000000d0015
- (void)setProfileControl:(id)arg1;	// IMP=0x00000000000cffc8
- (id)profileControl;	// IMP=0x00000000000cffb3
- (void)setNeedsCustomBorderColorSamplers:(_Bool)arg1;	// IMP=0x00000000000cffa2
- (_Bool)needsCustomBorderColorSamplers;	// IMP=0x00000000000cff91
- (void)setOpenCLModeEnabled:(_Bool)arg1;	// IMP=0x00000000000cff75
- (_Bool)openCLModeEnabled;	// IMP=0x00000000000cff60
- (void)setOpenGLModeEnabled:(_Bool)arg1;	// IMP=0x00000000000cff46
- (_Bool)openGLModeEnabled;	// IMP=0x00000000000cff33
- (void)setResourceIndex:(unsigned long long)arg1;	// IMP=0x00000000000cff21
- (unsigned long long)resourceIndex;	// IMP=0x00000000000cff0f
- (void)setForceResourceIndex:(_Bool)arg1;	// IMP=0x00000000000cfefe
- (_Bool)forceResourceIndex;	// IMP=0x00000000000cfeed
- (long long)textureWriteFPRoundingMode;	// IMP=0x00000000000cfedb
- (void)setTextureWriteFPRoundingMode:(long long)arg1;	// IMP=0x00000000000cfec9
- (long long)textureWriteRoundingMode;	// IMP=0x00000000000cfeb7
- (void)setTextureWriteRoundingMode:(long long)arg1;	// IMP=0x00000000000cfea5
- (_Bool)supportIndirectCommandBuffers;	// IMP=0x00000000000cfe94
- (void)setSupportIndirectCommandBuffers:(_Bool)arg1;	// IMP=0x00000000000cfe83
- (unsigned long long)maxTotalThreadsPerThreadgroup;	// IMP=0x00000000000cfe71
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1;	// IMP=0x00000000000cfe25
- (_Bool)threadGroupSizeIsMultipleOfThreadExecutionWidth;	// IMP=0x00000000000cfe14
- (void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(_Bool)arg1;	// IMP=0x00000000000cfe03
- (id)pipelineLibrary;	// IMP=0x00000000000cfdf1
- (void)setPipelineLibrary:(id)arg1;	// IMP=0x00000000000cfdb1
- (void)setDynamicLibraries:(id)arg1;	// IMP=0x00000000000cfd9f
- (id)dynamicLibraries;	// IMP=0x00000000000cfd8d
- (void)setInsertLibraries:(id)arg1;	// IMP=0x00000000000cfd6f
- (id)insertLibraries;	// IMP=0x00000000000cfd5d
- (void)setPreloadedLibraries:(id)arg1;	// IMP=0x00000000000cfd16
- (id)preloadedLibraries;	// IMP=0x00000000000cfd04
- (void)setBinaryLibraries:(id)arg1;	// IMP=0x00000000000cfcf2
- (id)binaryLibraries;	// IMP=0x00000000000cfce0
- (void)setBinaryArchives:(id)arg1;	// IMP=0x00000000000cfc99
- (id)binaryArchives;	// IMP=0x00000000000cfc87
- (void)setMaxCallStackDepth:(unsigned long long)arg1;	// IMP=0x00000000000cfc72
- (unsigned long long)maxCallStackDepth;	// IMP=0x00000000000cfc5d
- (void)setSupportAddingBinaryFunctions:(_Bool)arg1;	// IMP=0x00000000000cfc49
- (_Bool)supportAddingBinaryFunctions;	// IMP=0x00000000000cfc35
- (void)setLinkedFunctions:(id)arg1;	// IMP=0x00000000000cfba7
- (id)linkedFunctions;	// IMP=0x00000000000cfb70
- (void)setFunctionPointers:(id)arg1;	// IMP=0x00000000000cfb29
- (id)functionPointers;	// IMP=0x00000000000cfb17
- (id)driverCompilerOptions;	// IMP=0x00000000000cfb05
- (void)setDriverCompilerOptions:(id)arg1;	// IMP=0x00000000000cfabe
- (id)stageInputDescriptor;	// IMP=0x00000000000cfa8d
- (void)setStageInputDescriptor:(id)arg1;	// IMP=0x00000000000cfa05
- (id)computeFunction;	// IMP=0x00000000000cf9f3
- (void)setComputeFunction:(id)arg1;	// IMP=0x00000000000cf8fb
- (void)setLabel:(id)arg1;	// IMP=0x00000000000cf85e
- (id)label;	// IMP=0x00000000000cf84d
- (void)reset;	// IMP=0x00000000000cf759
- (id)description;	// IMP=0x00000000000cf745
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000ceece
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cec8d
- (void)dealloc;	// IMP=0x00000000000cebe1
- (id)init;	// IMP=0x00000000000ceb4e

@end
