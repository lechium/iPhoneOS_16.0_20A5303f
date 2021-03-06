//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (HKAdditions)
- (void)_updateForCurrentSizeCategory;	// IMP=0x009000000001e53e
- (double)hk_layoutHeightFittingWidth:(double)arg1;	// IMP=0x009000000001e515
- (void)hk_maskAllCornersWithRadius:(double)arg1;	// IMP=0x009000000001e4fc
- (void)hk_maskCorners:(unsigned long long)arg1 radius:(double)arg2;	// IMP=0x009000000001e438
- (void)hk_constraintAspectRatioFromSize:(struct CGSize)arg1;	// IMP=0x009000000001e3bf
- (void)hk_alignVerticalConstraintsWithGuide:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;	// IMP=0x009000000001e2fd
- (void)hk_alignHorizontalConstraintsWithGuide:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;	// IMP=0x009000000001e23b
- (void)hk_alignVerticalConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;	// IMP=0x009000000001e179
- (void)hk_alignHorizontalConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;	// IMP=0x009000000001e0b7
- (void)hk_alignConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;	// IMP=0x009000000001df99
- (void)hk_alignConstraintsWithTopAnchor:(id)arg1 bottomAnchor:(id)arg2 insets:(struct NSDirectionalEdgeInsets)arg3;	// IMP=0x009000000001de7b
- (void)hk_alignConstraintsWithLeadingAnchor:(id)arg1 trailingAnchor:(id)arg2 insets:(struct NSDirectionalEdgeInsets)arg3;	// IMP=0x009000000001dd5d
- (void)hk_alignConstraintsWithViewController:(id)arg1;	// IMP=0x009000000001da0b
- (void)hk_alignCenterConstraintsWithView:(id)arg1;	// IMP=0x009000000001d8b2
- (void)hk_alignHorizontalConstraintsWithView:(id)arg1 margin:(double)arg2;	// IMP=0x009000000001d743
- (void)hk_alignVerticalConstraintsWithView:(id)arg1 margin:(double)arg2;	// IMP=0x009000000001d5d4
- (void)hk_alignConstraintsWithGuide:(id)arg1;	// IMP=0x009000000001d358
- (void)hk_alignConstraintsWithView:(id)arg1;	// IMP=0x009000000001d0dc
- (void)hk_constrainToSuperviewAlongEdges:(id)arg1 constant:(double)arg2;	// IMP=0x009000000001cde4
- (void)hk_constrainToView:(id)arg1 fromEdge:(long long)arg2 toEdge:(long long)arg3 constant:(double)arg4;	// IMP=0x009000000001cd02
- (long long)hk_trailingTextAlignmentAtOrBelowSizeCategory:(id)arg1;	// IMP=0x009000000001ccc9
- (_Bool)hk_isLeftToRight;	// IMP=0x009000000001cc93
- (id)hk_addConstraintsWithFormat:(id)arg1 options:(unsigned long long)arg2 views:(id)arg3;	// IMP=0x009000000001cc7b
- (id)hk_addConstraintsWithFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;	// IMP=0x009000000001cc29
- (id)hk_addEqualsConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedTo:(id)arg3 attribute:(long long)arg4 constant:(double)arg5;	// IMP=0x009000000001cbb8
- (id)hk_addEqualsConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedTo:(id)arg3 constant:(double)arg4;	// IMP=0x009000000001cb47
@end

