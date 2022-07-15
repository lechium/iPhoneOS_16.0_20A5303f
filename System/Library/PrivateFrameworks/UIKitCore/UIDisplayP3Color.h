//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIColor.h"

__attribute__((visibility("hidden")))
@interface UIDisplayP3Color : UIColor
{
    double redComponent;	// 8 = 0x8
    double greenComponent;	// 16 = 0x10
    double blueComponent;	// 24 = 0x18
    double alphaComponent;	// 32 = 0x20
    _Atomic struct CGColor *_cachedColor;	// 40 = 0x28
}

- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x0000000000874a97
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x0000000000874891
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;	// IMP=0x00000000008747b1
- (double)alphaComponent;	// IMP=0x000000000087479f
- (struct CGColor *)CGColor;	// IMP=0x0000000000874749
- (unsigned long long)hash;	// IMP=0x00000000008746c4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000087448d
- (_Bool)_isDeepColor;	// IMP=0x00000000008743d7
- (id)description;	// IMP=0x0000000000874339
- (id)colorSpaceName;	// IMP=0x000000000087432c
- (void)setStroke;	// IMP=0x00000000008742e1
- (void)setFill;	// IMP=0x0000000000874296
- (void)set;	// IMP=0x0000000000874233
- (struct CGColor *)_createCGColorWithAlpha:(double)arg1;	// IMP=0x000000000087411d
- (id)colorWithAlphaComponent:(double)arg1;	// IMP=0x000000000087407f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000874074
- (void)dealloc;	// IMP=0x0000000000874033
- (id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x0000000000873edd

@end
