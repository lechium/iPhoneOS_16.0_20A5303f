//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MTLCommandBuffer, MTLTexture;

__attribute__((visibility("hidden")))
@interface CIImageProcessorOutput
{
    id <MTLCommandBuffer> _cmdBuffer;	// 88 = 0x58
}

- (id)metalContext;	// IMP=0x00000000000cea2a
- (unsigned int)contextID;	// IMP=0x00000000000cea0f
- (struct CGColorSpace *)workingColorSpace;	// IMP=0x00000000000ce9f8
- (_Bool)metalCommandBufferRequested;	// IMP=0x00000000000ce9e3
@property(readonly, nonatomic) id <MTLCommandBuffer> metalCommandBuffer;
@property(readonly, nonatomic) id <MTLTexture> metalTexture;
@property(readonly, nonatomic) void *baseAddress;
- (void)dealloc;	// IMP=0x00000000000ce6fe
- (id)initWithSurface:(struct __IOSurface *)arg1 texture:(struct Texture)arg2 allowSRGB:(_Bool)arg3 bounds:(struct CGRect)arg4 context:(void *)arg5;	// IMP=0x00000000000ce673

// Remaining properties
@property(readonly, nonatomic) unsigned long long bytesPerRow;
@property(readonly, nonatomic) int format;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer;
@property(readonly, nonatomic) struct CGRect region;
@property(readonly, nonatomic) struct __IOSurface *surface;

@end
