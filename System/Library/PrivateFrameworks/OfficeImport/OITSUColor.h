//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface OITSUColor : NSObject
{
    struct CGColor *mCGColor;	// 8 = 0x8
    unsigned long long mColorRGBSpace;	// 16 = 0x10
}

+ (id)brownColor;	// IMP=0x00100000002ce19b
+ (id)purpleColor;	// IMP=0x00100000002ce163
+ (id)orangeColor;	// IMP=0x00100000002ce12b
+ (id)magentaColor;	// IMP=0x00100000002ce0f8
+ (id)yellowColor;	// IMP=0x00100000002ce0c5
+ (id)cyanColor;	// IMP=0x00100000002ce092
+ (id)blueColor;	// IMP=0x00100000002ce05f
+ (id)greenColor;	// IMP=0x00100000002ce02c
+ (id)redColor;	// IMP=0x00100000002cdff9
+ (id)lightGrayColor;	// IMP=0x00100000002cdfc7
+ (id)grayColor;	// IMP=0x00100000002cdf95
+ (id)whiteColor;	// IMP=0x00100000002cdf68
+ (id)blackColor;	// IMP=0x00100000002cdf3b
+ (id)clearColor;	// IMP=0x00100000002cdf13
+ (id)randomColor;	// IMP=0x00100000002cdece
+ (id)colorWithUIColor:(id)arg1;	// IMP=0x00100000002cde85
+ (id)colorWithHexString:(id)arg1;	// IMP=0x00100000002cde3c
+ (id)colorWithPatternImage:(id)arg1;	// IMP=0x00100000002cddf3
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;	// IMP=0x00100000002cdd99
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;	// IMP=0x00100000002cdd47
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;	// IMP=0x00100000002cdd09
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x00100000002cdcb7
+ (id)colorWithCGColor:(struct CGColor *)arg1;	// IMP=0x00100000002cdc88
+ (id)stringForColor:(id)arg1;	// IMP=0x00100000002d7b22
+ (id)stringForSystemColorID:(int)arg1;	// IMP=0x00100000002d7b01
+ (id)colorWithSystemColorID:(int)arg1;	// IMP=0x00100000002d7a9e
+ (id)colorWithBGR:(unsigned int)arg1;	// IMP=0x00100000002d7a2a
+ (id)colorWithCatalogName:(id)arg1 colorName:(id)arg2;	// IMP=0x00100000002d76c5
+ (id)colorWithDeviceCyan:(double)arg1 magenta:(double)arg2 yellow:(double)arg3 black:(double)arg4 alpha:(double)arg5;	// IMP=0x00100000002d763a
+ (id)colorWithDeviceRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x00100000002d7621
+ (id)colorWithDeviceHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;	// IMP=0x00100000002d75e8
+ (id)colorWithDeviceWhite:(double)arg1 alpha:(double)arg2;	// IMP=0x00100000002d75cf
+ (id)colorWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x00100000002d75b6
+ (id)colorWithCalibratedHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;	// IMP=0x00100000002d757d
+ (id)colorWithCalibratedWhite:(double)arg1 alpha:(double)arg2;	// IMP=0x00100000002d7564
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 alpha:(int)arg4;	// IMP=0x00100000002d7521
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3;	// IMP=0x00100000002d7509
+ (id)colorWithEshColor:(const struct EshColor *)arg1;	// IMP=0x001000000034b67f
+ (id)colorWithCsColour:(const struct CsColour *)arg1;	// IMP=0x001000000034b5d1
+ (id)colorWithRGBBytes:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3;	// IMP=0x0010000000362ff9
+ (id)colorWithRGBValue:(long long)arg1;	// IMP=0x00100000003a534e
+ (id)colorWithBGRValue:(long long)arg1;	// IMP=0x00100000003a52d7
@property(readonly, nonatomic) unsigned long long colorRGBSpace; // @synthesize colorRGBSpace=mColorRGBSpace;
- (id)hexString;	// IMP=0x00000000002d0273
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x00000000002d0227
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x00000000002d01d9
- (id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;	// IMP=0x00000000002d008d
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;	// IMP=0x00000000002d0073
- (_Bool)wantsHighContrastBackgroundForDarkMode:(id)arg1;	// IMP=0x00000000002cffe8
- (_Bool)isNearlyWhite;	// IMP=0x00000000002cff3a
- (_Bool)isOpaque;	// IMP=0x00000000002cff0e
- (double)luminance;	// IMP=0x00000000002cfdbe
- (id)colorWithAlphaComponent:(double)arg1;	// IMP=0x00000000002cfd75
- (id)invertedColor;	// IMP=0x00000000002cfc26
- (id)grayscaleColor;	// IMP=0x00000000002cfb6f
@property(readonly, nonatomic) UIColor *UIColor;
- (double)brightnessComponent;	// IMP=0x00000000002cfaa9
- (double)saturationComponent;	// IMP=0x00000000002cfa18
- (double)hueComponent;	// IMP=0x00000000002cf987
- (void)getRGBAComponents:(double *)arg1;	// IMP=0x00000000002cf864
@property(readonly, nonatomic) double alphaComponent;
@property(readonly, nonatomic) double blueComponent;
@property(readonly, nonatomic) double greenComponent;
@property(readonly, nonatomic) double redComponent;
- (double)p_rgbComponentWithIndex:(unsigned char)arg1;	// IMP=0x00000000002cf75c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002cf751
- (_Bool)isEqualWithTolerance:(id)arg1;	// IMP=0x00000000002cf6d7
- (_Bool)isAlmostEqualToColor:(id)arg1;	// IMP=0x00000000002cf59d
- (_Bool)p_isEqualToColor:(id)arg1 withTolerance:(double)arg2;	// IMP=0x00000000002cf22b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002cf219
- (unsigned long long)hash;	// IMP=0x00000000002cf20e
- (void)dealloc;	// IMP=0x00000000002cf1d4
- (id)initWithUIColor:(id)arg1;	// IMP=0x00000000002cef83
- (id)initWithHexString:(id)arg1;	// IMP=0x00000000002cec0b
- (id)initWithPatternImage:(id)arg1;	// IMP=0x00000000002cea70
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;	// IMP=0x00000000002ce9d6
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;	// IMP=0x00000000002ce9bc
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;	// IMP=0x00000000002ce9a1
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5;	// IMP=0x00000000002ce8bd
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x00000000002ce8a3
- (id)initWithCGColor:(struct CGColor *)arg1;	// IMP=0x00000000002ce88c
- (id)initWithCGColor:(struct CGColor *)arg1 colorSpace:(unsigned long long)arg2;	// IMP=0x00000000002ce1dd
@property(readonly) struct CGColor *CGColor;
- (void)set;	// IMP=0x00000000002d7cbe
- (id)colorWithShadeValue:(double)arg1;	// IMP=0x00000000002d7c3b
- (id)colorWithTintValue:(double)arg1;	// IMP=0x00000000002d7bb7
- (unsigned int)toBGR;	// IMP=0x00000000002d7a12
- (id)copy;	// IMP=0x00000000002d79c6
@property(readonly) int CGColorSpaceModel;
@property(readonly) struct CGColorSpace *CGColorSpace;
- (void)getCyan:(double *)arg1 magenta:(double *)arg2 yellow:(double *)arg3 black:(double *)arg4 alpha:(double *)arg5;	// IMP=0x00000000002d78e1
@property(readonly) double blackComponent;
@property(readonly) double yellowComponent;
@property(readonly) double magentaComponent;
@property(readonly) double cyanComponent;
- (double)p_cmykComponentWithIndex:(unsigned char)arg1;	// IMP=0x00000000002d7814
- (void)getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x00000000002d77c3
@property(readonly) double whiteComponent;
- (void)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x00000000002d76cd
- (id)solidColoredPngImage;	// IMP=0x00000000002d7501
- (id)newSolidColoredBitmap:(struct CGSize)arg1;	// IMP=0x00000000002d74f9
- (CDStruct_a06f635e)ttColor;	// IMP=0x00000000002d744d
- (struct EshColor)eshColor;	// IMP=0x000000000034b71f
- (struct CsColour)csColour;	// IMP=0x000000000034b634
- (void)getRGBBytes:(char *)arg1 green:(char *)arg2 blue:(char *)arg3;	// IMP=0x0000000000363034
- (_Bool)isBlack;	// IMP=0x000000000047953e

@end

