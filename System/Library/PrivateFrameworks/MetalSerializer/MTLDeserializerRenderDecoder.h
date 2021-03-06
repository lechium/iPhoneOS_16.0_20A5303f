//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _MTLDeserializer;
@protocol MTLCommandBuffer, MTLRenderCommandEncoderSPI, MTLRenderPipelineState;

__attribute__((visibility("hidden")))
@interface MTLDeserializerRenderDecoder : NSObject
{
    _MTLDeserializer *deserializer;	// 8 = 0x8
    id <MTLRenderCommandEncoderSPI> renderEncoder;	// 16 = 0x10
    id <MTLCommandBuffer> commandBuffer;	// 24 = 0x18
    id <MTLRenderPipelineState> _pipelineState;	// 32 = 0x20
    unsigned int _maxColorAttachmentIndex;	// 40 = 0x28
}

@property(readonly) unsigned char type;
- (void)fault;	// IMP=0x000000000000b3f4
- (void)decodeWithHeader:(CDStruct_d6d194d4 *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000a32e
- (id)newDescriptor:(id)arg1;	// IMP=0x000000000000a2a6
- (id)newDescriptorFromVersion1:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000009a86
- (void)decodeSetStencilResolveTexture:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000099fc
- (void)decodeSetDepthResolveTexture:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000009972
- (void)decodeSetColorResolveTexture:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000009898
- (void)decodeSetStencilCleared:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000009882
- (void)decodeSetDepthCleared:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000986c
- (void)decodeSetTransformFeedbackState:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000981e
- (void)decodeSetTriangleFillModeFrontBack:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000097ca
- (void)decodeSetPrimitiveRestartIndexEnabled:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000009709
- (void)decodeSetProvokingVertexMode:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000096bb
- (void)decodeSetViewportTransformEnabled:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000009667
- (void)decodeSetFragmentSamplerState:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000009581
- (void)decodeSetVertexSamplerState:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000949b
- (void)decodeSetClipPlane:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000093e7
- (void)decodeSetPointSize:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000009397
- (void)decodeSetAlphaTestReferenceValue:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000009347
- (void)decodeSetLineWidth:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000092f7
- (void)decodeUseResourcesWithStages:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000009184
- (void)decodeUseResources:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000009017
- (void)decodeUseHeapsWithStages:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008ea9
- (void)decodeUseHeaps:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008d40
- (void)decodeTextureBarrier:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008d3a
- (void)decodeSetVisibilityResultMode:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008ce5
- (void)decodeSetViewports:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008b18
- (void)decodeSetViewport:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008a8c
- (void)decodeSetVertexTextures:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000889b
- (void)decodeSetVertexSamplerStatesLODClamp:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008651
- (void)decodeSetVertexSamplerStates:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008477
- (void)decodeSetVertexBufferOffset:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000083b1
- (void)decodeSetVertexBuffers:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000819c
- (void)decodeSetTriangleFillMode:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000814e
- (void)decodeSetTesselationFactorScale:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000080fe
- (void)decodeSetTesselationFactorBuffer:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000808c
- (void)decodeSetStencilStoreActionOptions:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000803e
- (void)decodeSetStencilStoreAction:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000007ff0
- (void)decodeSetStencilRef:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000007f9e
- (void)decodeSetScissorRects:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000007dde
- (void)decodeSetScissorRect:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000007d6d
- (void)decodeSetRenderPipelineState:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000007ca2
- (void)decodeSetFrontFacingWinding:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000007c54
- (void)decodeSetFragmentTextures:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000007a63
- (void)decodeSetFragmentSamplerStatesLODClamp:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000007819
- (void)decodeSetFragmentSamplerStates:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000762b
- (void)decodeSetFragmentBufferOffset:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000007565
- (void)decodeSetFragmentBuffers:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000007350
- (void)decodeSetDepthClipMode:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000007302
- (void)decodeSetDepthBias:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000729f
- (void)decodeSetCullMode:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000007251
- (void)decodeSetDepthStoreActionOptions:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000007203
- (void)decodeSetDepthStoreAction:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000071b5
- (void)decodeSetDepthStencilState:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000007108
- (void)decodeSetColorStoreActionOptions:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000007062
- (void)decodeSetColorStoreAction:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006fc5
- (void)decodeSetBlendColor:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006f65
- (void)decodeRenderWaitForFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006f02
- (void)decodeRenderUpdateFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006e9f
- (void)decodeRenderBarrierScope:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006e73
- (void)decodeRenderBarrierResources:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006e6d
- (void)decodeExecuteCommandsInBufferRanged:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006e67
- (void)decodeExecuteCommandsInBuffer:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006e61
- (void)decodeDrawIndexedPatchesIndirect:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006d1d
- (void)decodeDrawPatchesIndirect:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006c10
- (void)decodeDrawIndexedPrimitivesIndirect:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006aea
- (void)decodeDrawPrimitivesIndirect:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006a0a
- (void)decodeDrawIndexedPatches16:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000068e0
- (void)decodeDrawIndexedPatches64:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000067ad
- (void)decodeDrawPatches16:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000066d2
- (void)decodeDrawPatches64:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000065f6
- (void)decodeDrawIndexedInstancedBasePrimitives16_2:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000064f0
- (void)decodeDrawIndexedInstancedBasePrimitives64_2:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000063e7
- (void)decodeDrawIndexedInstancedBasePrimitives16:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000062e2
- (void)decodeDrawIndexedInstancedBasePrimitives64:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000061d9
- (void)decodeDrawIndexedInstancedPrimitives16:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000060ea
- (void)decodeDrawIndexedInstancedPrimitives64:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005ff8
- (void)decodeDrawIndexedPrimitives16:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005f03
- (void)decodeDrawIndexedPrimitives64:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005e0e
- (void)decodeDrawInstancedBasePrimitives16:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005d52
- (void)decodeDrawInstancedBasePrimitives64:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005c93
- (void)decodeDrawInstancedPrimitives16:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005bea
- (void)decodeDrawInstancedPrimitives64:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005b3b
- (void)decodeDrawPrimitives16:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005a99
- (void)decodeDrawPrimitives64:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005998
- (void)readVariableCommand:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2 maxExpectedSize:(unsigned long long)arg3 into:(void *)arg4;	// IMP=0x00000000000058fc
- (void)readCommand:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2 expectedSize:(unsigned long long)arg3 into:(void *)arg4;	// IMP=0x000000000000583d
- (void)dealloc;	// IMP=0x00000000000057eb
- (id)initWithDeserializer:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x00000000000057a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

