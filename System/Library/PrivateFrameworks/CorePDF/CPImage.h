//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CPImage
{
    struct CPPDFImage *imageData;	// 168 = 0xa8
    _Bool renderedBoundsComputed;	// 176 = 0xb0
}

- (_Bool)isVisible;	// IMP=0x000000000000bf41
- (long long)zOrder;	// IMP=0x000000000000bf2f
- (void)accept:(id)arg1;	// IMP=0x000000000000bf14
- (void)recomputeRenderedBounds;	// IMP=0x000000000000bd09
- (struct CGRect)bounds;	// IMP=0x000000000000bce6
- (struct CGRect)renderedBounds;	// IMP=0x000000000000bc6d
- (struct CPPDFImage *)imageData;	// IMP=0x000000000000bc5c
- (id)initWithBounds:(struct CGRect)arg1;	// IMP=0x000000000000bc0a
- (id)initWithPDFImage:(struct CPPDFImage *)arg1;	// IMP=0x000000000000c1e2

@end

