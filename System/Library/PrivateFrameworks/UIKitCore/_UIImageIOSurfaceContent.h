//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIImageIOSurfaceContent
{
    struct __IOSurface *_surfaceRef;	// 40 = 0x28
}

- (_Bool)canEmitDrawingCommands;	// IMP=0x0000000000674388
- (_Bool)canDrawImage;	// IMP=0x0000000000674380
- (id)description;	// IMP=0x0000000000674350
- (unsigned long long)hash;	// IMP=0x000000000067433f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006742d3
- (struct CGSize)sizeInPixels;	// IMP=0x0000000000674268
- (_Bool)isIOSurface;	// IMP=0x0000000000674260
- (struct __IOSurface *)IOSurface;	// IMP=0x000000000067424f
- (void)dealloc;	// IMP=0x000000000067420e
- (id)initWithScale:(double)arg1;	// IMP=0x0000000000674187
- (id)initWithIOSurface:(struct __IOSurface *)arg1 scale:(double)arg2;	// IMP=0x000000000067403e

@end

