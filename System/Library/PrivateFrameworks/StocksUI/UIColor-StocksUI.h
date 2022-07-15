//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIColor.h>

@interface UIColor (StocksUI)
+ (double)colorComponentLuminance:(double)arg1;	// IMP=0x0020000000185ff0
- (double)relativeLuminance;	// IMP=0x0010000000185fb0
@property(nonatomic, readonly) double defaultBrightnessAdjustment;
- (id)stocksAccessibilityAdjustedForIncreaseContrastAgainstWithBackgroundColor:(id)arg1;	// IMP=0x0010000000185dc0
- (id)stocksAccessibilityAdjustedForIncreaseContrastAdjustingDarker:(_Bool)arg1;	// IMP=0x0010000000185d20
- (id)stocksAccessibilityAdjustedDarkerForIncreaseContrast;	// IMP=0x0010000000185a10
- (id)stocksAccessibilityAdjustedLighterForIncreaseContrast;	// IMP=0x00100000001859b0
- (id)stocksAccessibilityAdjustedForIncreaseContrast;	// IMP=0x00100000001858e0
@end
