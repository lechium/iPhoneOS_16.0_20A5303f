//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface UIStatusBarForegroundStyleAttributes : NSObject
{
    double _height;	// 8 = 0x8
    long long _legibilityStyle;	// 16 = 0x10
    long long _idiom;	// 24 = 0x18
    NSMutableDictionary *_cachedFonts;	// 32 = 0x20
    _Bool _isTintColorBlack;	// 40 = 0x28
    _Bool _hasBusyBackground;	// 41 = 0x29
    NSString *_cachedUniqueIdentifier;	// 48 = 0x30
    _Bool _canShowBreadcrumbs;	// 56 = 0x38
    UIColor *_tintColor;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000ee30da
@property(readonly, retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) _Bool canShowBreadcrumbs; // @synthesize canShowBreadcrumbs=_canShowBreadcrumbs;
- (_Bool)supportsShowingBuildVersion;	// IMP=0x0000000000ee30b6
- (long long)idiom;	// IMP=0x0000000000ee30ac
- (_Bool)usesVerticalLayout;	// IMP=0x0000000000ee30a4
- (struct CGPoint)positionForMoonMaskInBounds:(struct CGRect)arg1;	// IMP=0x0000000000ee3011
- (double)sizeForMoonMaskVisible:(_Bool)arg1;	// IMP=0x0000000000ee2fa0
- (id)textForNetworkType:(int)arg1;	// IMP=0x0000000000ee2e23
- (double)bluetoothBatteryExtraPadding;	// IMP=0x0000000000ee2e00
- (double)baselineOffsetForStyle:(long long)arg1;	// IMP=0x0000000000ee2d1f
- (id)textColorForStyle:(long long)arg1;	// IMP=0x0000000000ee2d0d
- (id)makeTextFontForStyle:(long long)arg1;	// IMP=0x0000000000ee2c22
- (_Bool)_shouldUseBoldFontForStyle:(long long)arg1;	// IMP=0x0000000000ee2bf8
- (id)textFontForStyle:(long long)arg1;	// IMP=0x0000000000ee2b2b
- (id)expandedNameForImageName:(id)arg1;	// IMP=0x0000000000ee2b12
- (id)cachedImageWithText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 textAlignment:(long long)arg5 style:(long long)arg6 itemType:(int)arg7;	// IMP=0x0000000000ee29f1
- (id)imageWithText:(id)arg1 ofItemType:(int)arg2 forWidth:(double)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6 style:(long long)arg7 withLegibilityStyle:(long long)arg8 legibilityStrength:(double)arg9 shouldCache:(_Bool)arg10;	// IMP=0x0000000000ee24f7
- (id)imageWithText:(id)arg1 ofItemType:(int)arg2 forWidth:(double)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6 style:(long long)arg7 withLegibilityStyle:(long long)arg8 legibilityStrength:(double)arg9;	// IMP=0x0000000000ee24cc
- (id)imageIdWithText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 style:(long long)arg5;	// IMP=0x0000000000ee237d
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4 inTempGroup:(id)arg5 shouldCache:(_Bool)arg6;	// IMP=0x0000000000ee2201
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4 inTempGroup:(id)arg5;	// IMP=0x0000000000ee21df
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4;	// IMP=0x0000000000ee21c7
- (id)imageNamed:(id)arg1 withLegibilityStyle:(long long)arg2 legibilityStrength:(double)arg3;	// IMP=0x0000000000ee20c4
- (id)accessibilityHUDImageNamed:(id)arg1;	// IMP=0x0000000000ee2036
- (id)imageNamed:(id)arg1;	// IMP=0x0000000000ee1eba
- (id)untintedImageNamed:(id)arg1;	// IMP=0x0000000000ee1d75
- (id)uncachedImageNamed:(id)arg1;	// IMP=0x0000000000ee1bf1
- (void)cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3;	// IMP=0x0000000000ee1a53
- (void)_cacheQueue_cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3 groupFullName:(id)arg4 tintColor:(id)arg5;	// IMP=0x0000000000ee182f
- (void)_cacheImage:(id)arg1 named:(id)arg2;	// IMP=0x0000000000ee181a
- (id)cachedImageNamed:(id)arg1 inTempGroup:(id)arg2;	// IMP=0x0000000000ee1646
- (id)_cacheQueue_cachedImageNamed:(id)arg1 inTempGroup:(id)arg2 groupFullName:(id)arg3;	// IMP=0x0000000000ee1466
- (id)_cachedImageNamed:(id)arg1;	// IMP=0x0000000000ee12ad
- (double)shadowPadding;	// IMP=0x0000000000ee12a4
- (double)rightEdgePadding;	// IMP=0x0000000000ee1284
- (double)leftEdgePadding;	// IMP=0x0000000000ee1276
- (double)middlePadding;	// IMP=0x0000000000ee1268
- (double)standardPadding;	// IMP=0x0000000000ee125a
- (double)scale;	// IMP=0x0000000000ee1203
- (void)drawTextInRect:(struct CGRect)arg1 withColor:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000ee11f2
- (void)drawText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 textAlignment:(long long)arg5 style:(long long)arg6 textSize:(struct CGSize)arg7 textHeight:(double)arg8;	// IMP=0x0000000000ee0fe1
- (double)textOffsetForStyle:(long long)arg1;	// IMP=0x0000000000ee0fd3
- (void)_drawText:(id)arg1 inRect:(struct CGRect)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6;	// IMP=0x0000000000ee0ed8
- (void)drawBluetoothBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(double)arg2;	// IMP=0x0000000000ee0d8c
- (id)bluetoothBatteryColorForCapacity:(double)arg1 usingTintColor:(_Bool)arg2;	// IMP=0x0000000000ee0cc5
- (id)bluetoothBatteryImageNameWithCapacity:(double)arg1;	// IMP=0x0000000000ee0bd2
- (struct UIEdgeInsets)edgeInsetsForBluetoothBatteryInsides;	// IMP=0x0000000000ee0b97
- (void)drawBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(int)arg2 style:(unsigned long long)arg3 usingTintColor:(_Bool)arg4;	// IMP=0x0000000000ee0989
- (void)drawBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(int)arg2 style:(unsigned long long)arg3;	// IMP=0x0000000000ee096e
- (id)batteryColorForCapacity:(int)arg1 style:(unsigned long long)arg2 usingTintColor:(_Bool)arg3;	// IMP=0x0000000000ee0914
- (id)_batteryColorForCapacity:(int)arg1 lowCapacity:(int)arg2 style:(unsigned long long)arg3 usingTintColor:(_Bool)arg4;	// IMP=0x0000000000ee0821
- (struct UIEdgeInsets)edgeInsetsForBatteryInsides;	// IMP=0x0000000000ee07c5
- (double)_roundDimension:(double)arg1;	// IMP=0x0000000000ee076d
- (double)batteryAccessoryMargin;	// IMP=0x0000000000ee075f
- (long long)activityIndicatorStyleWithSyncActivity:(_Bool)arg1;	// IMP=0x0000000000ee0753
- (long long)legibilityStyle;	// IMP=0x0000000000ee0749
- (double)height;	// IMP=0x0000000000ee073e
- (id)uniqueIdentifier;	// IMP=0x0000000000ee06f7
- (id)generateUniqueIdentifier;	// IMP=0x0000000000ee0632
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ee058b
- (id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 tintColor:(id)arg3 hasBusyBackground:(_Bool)arg4;	// IMP=0x0000000000ee0520
- (id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 tintColor:(id)arg3 hasBusyBackground:(_Bool)arg4 idiom:(long long)arg5;	// IMP=0x0000000000ee043c

@end

