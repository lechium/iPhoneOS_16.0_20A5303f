//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarVisualProvider_FixedSplit.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_Split828 : _UIStatusBarVisualProvider_FixedSplit
{
}

+ (_Bool)shrinksSingleCharacterTypes;	// IMP=0x0010000000f644e6
+ (double)LTEAPlusFontSize;	// IMP=0x0010000000f644d8
+ (double)additionalBottomLeadingMargin;	// IMP=0x0010000000f64474
+ (double)baseFontSize;	// IMP=0x0010000000f6444a
+ (double)pillCenteringOffset;	// IMP=0x0010000000f64415
+ (double)leadingCenteringOffset;	// IMP=0x0010000000f64407
+ (double)leadingSmallPillSpacing;	// IMP=0x0010000000f643f9
+ (struct CGSize)notchSize;	// IMP=0x0010000000f643c7
+ (double)nativeDisplayWidth;	// IMP=0x0010000000f643b9
+ (double)height;	// IMP=0x0010000000f643ab
- (double)condensedPointSizeForCellularType:(long long)arg1 defaultPointSize:(double)arg2 baselineOffset:(double *)arg3;	// IMP=0x0000000000f644ee
- (id)stringForCellularType:(long long)arg1 condensed:(_Bool)arg2;	// IMP=0x0000000000f644ac
- (double)expandedIconScale;	// IMP=0x0000000000f6449e
- (double)normalIconScale;	// IMP=0x0000000000f64490
- (double)bottomLeadingTopOffset;	// IMP=0x0000000000f64482
- (double)lowerExpandedBaselineOffset;	// IMP=0x0000000000f64466
- (double)baselineBottomInset;	// IMP=0x0000000000f64458
- (struct CGSize)smallPillSize;	// IMP=0x0000000000f64439
- (struct CGSize)pillSize;	// IMP=0x0000000000f64423
- (double)leadingItemSpacing;	// IMP=0x0000000000f643eb
- (double)itemSpacing;	// IMP=0x0000000000f643dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

