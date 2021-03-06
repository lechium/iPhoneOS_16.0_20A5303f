//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface MFPGradientBrush
{
    struct CGAffineTransform mTransform;	// 8 = 0x8
    NSArray *mBlend;	// 56 = 0x38
    NSArray *mColorBlend;	// 64 = 0x40
    int mWrapMode;	// 72 = 0x48
    NSArray *mStops;	// 80 = 0x50
    struct CGShading *mShading;	// 88 = 0x58
    struct CGFunction *mShadingFunction;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000003688f9
- (void)createPhoneBrush;	// IMP=0x000000000036888a
- (id)color;	// IMP=0x0000000000368875
- (void)fillPath:(id)arg1;	// IMP=0x00000000003687fa
- (void)setWrapMode:(int)arg1;	// IMP=0x00000000003687ea
- (void)setColorBlend:(id)arg1;	// IMP=0x00000000003687d6
- (void)setBlend:(id)arg1;	// IMP=0x00000000003687c2
- (void)setTransform:(struct CGAffineTransform)arg1;	// IMP=0x000000000036879b
- (void)dealloc;	// IMP=0x000000000036870a
- (id)init;	// IMP=0x00000000003686af
- (void)createShading;	// IMP=0x0000000000369132
- (void)createShadingFunction;	// IMP=0x0000000000368fb2
- (void)createStopsFromStartAndEndColors;	// IMP=0x0000000000368e76
- (void)createStopsFromBlend;	// IMP=0x0000000000368c29
- (void)createStopsFromColorBlend;	// IMP=0x0000000000368c0d
- (id)colorAtPosition:(float)arg1;	// IMP=0x000000000036894b
- (id)endColor;	// IMP=0x0000000000368943
- (id)startColor;	// IMP=0x000000000036893b

@end

