//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface CIImageProcessorInput
{
}

@property(readonly, nonatomic) id <MTLTexture> metalTexture;
@property(readonly, nonatomic) const void *baseAddress;
- (void)dealloc;	// IMP=0x00000000000ceb44
- (id)initWithSurface:(struct __IOSurface *)arg1 texture:(struct Texture)arg2 allowSRGB:(_Bool)arg3 bounds:(struct CGRect)arg4 context:(void *)arg5;	// IMP=0x00000000000ceafb

// Remaining properties
@property(readonly, nonatomic) unsigned long long bytesPerRow;
@property(readonly, nonatomic) int format;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer;
@property(readonly, nonatomic) struct CGRect region;
@property(readonly, nonatomic) struct __IOSurface *surface;

@end

