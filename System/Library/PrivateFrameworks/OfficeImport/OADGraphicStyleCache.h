//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, OADGraphicFeatureCache;

__attribute__((visibility("hidden")))
@interface OADGraphicStyleCache : NSObject
{
    OADGraphicFeatureCache *mFillCacheArray[4];	// 8 = 0x8
    OADGraphicFeatureCache *mStrokeCache;	// 40 = 0x28
    OADGraphicFeatureCache *mShadowCache;	// 48 = 0x30
    OADGraphicFeatureCache *mColorCache;	// 56 = 0x38
    OADGraphicFeatureCache *mFontFaceCache;	// 64 = 0x40
    OADGraphicFeatureCache *mTextStyleCache;	// 72 = 0x48
    OADGraphicFeatureCache *mTableIdCache;	// 80 = 0x50
    NSMutableDictionary *mTableStyleCache;	// 88 = 0x58
    OADGraphicFeatureCache *mChartIdCache;	// 96 = 0x60
    OADGraphicFeatureCache *mDrawableStyleCacheArray[4];	// 104 = 0x68
}

+ (int)fillCatagory:(id)arg1;	// IMP=0x00600000000adc97
- (void).cxx_destruct;	// IMP=0x000000000034c944
- (void)applyCachedDrawableStyle:(id)arg1 toTextBodyProperties:(id)arg2;	// IMP=0x000000000034c851
- (void)applyCachedDrawableStyle:(id)arg1 toParagraphProperties:(id)arg2;	// IMP=0x000000000034c75e
- (void)applyCachedDrawableStyle:(id)arg1 toGraphicProperties:(id)arg2;	// IMP=0x000000000034c3c4
- (id)cachedDrawableStylesOfCategory:(int)arg1;	// IMP=0x000000000034c3aa
- (id)chartStyleIds;	// IMP=0x000000000034c394
- (id)tableStyleIds;	// IMP=0x000000000034c37e
- (id)fillsOfCategory:(int)arg1;	// IMP=0x000000000034c365
- (id)shadows;	// IMP=0x000000000034c34f
- (id)strokes;	// IMP=0x000000000034c339
- (id)countedDrawableStyleOfCategory:(int)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000034c31c
- (unsigned long long)cacheDrawablePropertiesOfCategory:(int)arg1 withGraphicProperties:(id)arg2 textBodyProperties:(id)arg3 paragraphProperties:(id)arg4 characterProperties:(id)arg5 colorContext:(id)arg6;	// IMP=0x000000000034bdf6
- (unsigned long long)cacheDrawablePropertiesOfCategory:(int)arg1 withFillCategory:(int)arg2 fillIndex:(unsigned long long)arg3 strokeIndex:(unsigned long long)arg4 shadowIndex:(unsigned long long)arg5 reflectionOpacity:(float)arg6 textStyleIndex:(unsigned long long)arg7;	// IMP=0x000000000034bd38
- (void)cacheChartStyleId:(int)arg1;	// IMP=0x00000000002152c3
- (id)tableStyleForId:(id)arg1;	// IMP=0x000000000034bd12
- (void)cacheTableStyle:(id)arg1;	// IMP=0x00000000001fccf4
- (unsigned long long)cacheShadow:(id)arg1;	// IMP=0x00000000000ae1e4
- (unsigned long long)cacheStroke:(id)arg1;	// IMP=0x00000000000adbe4
- (unsigned long long)cacheFill:(id)arg1 returnCategory:(int *)arg2;	// IMP=0x000000000010221e
- (id)fontFaceCache;	// IMP=0x0000000000103c37
- (id)colorCache;	// IMP=0x0000000000103c68
- (void)dealloc;	// IMP=0x00000000000b1028
- (id)init;	// IMP=0x000000000000b1f7

@end
