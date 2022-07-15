//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface WDOfficeArt
{
    OADDrawable *mDrawable;	// 16 = 0x10
    _Bool mFloating;	// 24 = 0x18
}

+ (int)textBoxTextTypeForRegularTextType:(int)arg1;	// IMP=0x00600000003f9bb3
- (void).cxx_destruct;	// IMP=0x00000000003f9c10
- (id)description;	// IMP=0x00000000003f9bd2
- (void)propagateTextTypeToDrawables;	// IMP=0x00000000001add13
- (void)setTextType:(int)arg1 recursivelyToDrawable:(id)arg2;	// IMP=0x00000000001adde7
- (id)imageName;	// IMP=0x00000000003f9a8e
- (id)imageData;	// IMP=0x00000000003f9908
- (void)setImageBlipRef:(id)arg1;	// IMP=0x00000000003f982a
- (id)imageBlipRef;	// IMP=0x00000000003f9732
- (void)setFloating:(_Bool)arg1;	// IMP=0x00000000001adcd9
- (_Bool)isFloating;	// IMP=0x000000000015c0cc
- (void)clearDrawable;	// IMP=0x00000000003f9711
- (_Bool)isDrawableOverridden;	// IMP=0x000000000015d403
- (id)overrideDrawable;	// IMP=0x00000000003f9709
- (void)setDrawable:(id)arg1;	// IMP=0x00000000000dc993
- (id)drawable;	// IMP=0x00000000000e1277
- (int)runType;	// IMP=0x000000000015d2a6
- (id)initWithParagraph:(id)arg1;	// IMP=0x00000000000d9b1e
- (void)checkForFloating:(id)arg1;	// IMP=0x000000000015b970

@end
