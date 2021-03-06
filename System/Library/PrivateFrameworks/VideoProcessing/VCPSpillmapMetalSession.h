//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPSImageBilinearScale, MTLTextureDescriptor;
@protocol MTLCommandQueue, MTLComputePipelineState, MTLDevice;

@interface VCPSpillmapMetalSession : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    id <MTLCommandQueue> _commandQueue;	// 16 = 0x10
    MPSImageBilinearScale *_bilinearScale;	// 24 = 0x18
    MTLTextureDescriptor *_bgraTextureDescriptor;	// 32 = 0x20
    MTLTextureDescriptor *_spillmapTextureDescriptor;	// 40 = 0x28
    struct CF<__CVPixelBufferPool *> _spillBufferPoolUnprotected;	// 48 = 0x30
    struct CF<__CVPixelBufferPool *> _spillBufferPoolScreenScrapingProtected;	// 56 = 0x38
    struct CF<__CVPixelBufferPool *> _spillBufferPoolHDCPType0;	// 64 = 0x40
    struct CF<__CVPixelBufferPool *> _spillBufferPoolHDCPType1;	// 72 = 0x48
    struct CF<__CFDictionary *> _spillmapBufferProperties;	// 80 = 0x50
    id <MTLComputePipelineState> _colorspaceConversion;	// 88 = 0x58
    struct CF<__CVMetalTextureCache *> _textureCacheLuma;	// 96 = 0x60
    struct CF<__CVMetalTextureCache *> _textureCacheChroma;	// 104 = 0x68
}

- (id).cxx_construct;	// IMP=0x000000000000d293
- (void).cxx_destruct;	// IMP=0x000000000000d200
- (int)calculateDrmSpillmapMetal:(struct __CVBuffer *)arg1 emitSpillmap:(struct __CVBuffer **)arg2 setLayout:(int)arg3;	// IMP=0x000000000000cabc
- (int)convertYuv420:(struct __CVBuffer *)arg1 withCommandBuffer:(id)arg2 outTexture:(id)arg3;	// IMP=0x000000000000c845
- (id)loadTexture:(struct __CVBuffer *)arg1 withAttributes:(id)arg2 forPlane:(unsigned int)arg3;	// IMP=0x000000000000c733
- (int)configureSession:(struct __IOSurface *)arg1 setWidth:(int)arg2 setHeight:(int)arg3;	// IMP=0x000000000000c08a
- (int)configureGPU;	// IMP=0x000000000000bc40
- (id)init;	// IMP=0x000000000000bbbe

@end

