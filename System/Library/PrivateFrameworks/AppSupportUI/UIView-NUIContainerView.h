//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString;

@interface UIView (NUIContainerView)
- (void)setUntransformedFrame:(struct CGRect)arg1;	// IMP=0x00200000000024b5
@property(nonatomic) _Bool invalidatingIntrinsicContentSizeAlsoInvalidatesSuperview;
@property(nonatomic) double customFirstBaselineOffsetFromTop;
@property(nonatomic) double customBaselineOffsetFromBottom;
@property(nonatomic) struct UIEdgeInsets customAlignmentRectInsets;
- (void)setLayoutSize:(struct CGSize)arg1 withHorizontalContentPriority:(float)arg2 verticalContentPriority:(float)arg3;	// IMP=0x00200000000021aa
- (void)setLayoutSize:(struct CGSize)arg1 withContentPriority:(float)arg2;	// IMP=0x0020000000002195
@property(nonatomic) struct CGSize maximumLayoutSize;
@property(nonatomic) struct CGSize minimumLayoutSize;
@property(nonatomic) _Bool neverCacheEffectiveLayoutSize;
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;	// IMP=0x0020000000001fca
- (double)effectiveFirstBaselineOffsetFromTop;	// IMP=0x0020000000001e3c
- (double)effectiveBaselineOffsetFromBottom;	// IMP=0x0020000000001c3c
- (struct CGSize)effectiveLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x0020000000001776
- (void)nukeContentLayoutSizeCacheFromOrbit;	// IMP=0x00200000000026cf
- (void)_didInvalidateIntrinsicContentSize;	// IMP=0x0020000000002d1c
- (double)systemSpacingToSuperView:(id)arg1 edge:(unsigned long long)arg2 baselineRelative:(_Bool)arg3 multiplier:(double)arg4;	// IMP=0x0020000000002bdc
- (double)systemSpacingToAdjecentSiblingView:(id)arg1 axis:(long long)arg2 baselineRelative:(_Bool)arg3 multiplier:(double)arg4;	// IMP=0x0020000000002b5f
- (void)setCurrentEffectiveLayoutSizeFittingSizeShouldNotBeCached;	// IMP=0x0020000000002b0e
- (double)effectiveFirstBaselineOffsetFromContentTop;	// IMP=0x0020000000002a7e
- (double)effectiveBaselineOffsetFromContentBottom;	// IMP=0x00200000000029ed
- (struct UIEdgeInsets)effectiveAlignmentRectInsets;	// IMP=0x002000000000280d
- (double)effectiveScreenScale;	// IMP=0x00200000000027fb
- (struct CGSize)calculateLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x0020000000002f5d
- (_Bool)canUseFastLayoutSizeCalulation;	// IMP=0x0020000000002f55
- (id)debugSizeCache;	// IMP=0x0020000000002e6d
- (id)debugSizeCacheDict;	// IMP=0x0020000000002d89
- (id)contentLayoutSizeCacheDescription;	// IMP=0x0020000000002d77
- (long long)_nui_baselineViewType;	// IMP=0x0020000000003217
- (_Bool)_isContainerView;	// IMP=0x002000000000c1c6
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;	// IMP=0x002000000000c17c
- (struct CGSize)testableEffectiveLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x00200000000228e8
- (struct CGSize)testableSizeThatFits:(struct CGSize)arg1;	// IMP=0x0020000000022882
- (struct CGSize)sizeToBestFitAndLayoutIfNeeded;	// IMP=0x00200000000227d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
