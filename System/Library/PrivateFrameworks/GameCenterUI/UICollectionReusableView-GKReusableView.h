//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@interface UICollectionReusableView (GKReusableView)
+ (void)_gkSetupSelectableThreeLineLayoutWithCell:(id)arg1 icon:(id)arg2 selectionView:(id)arg3 upperLine:(id)arg4 middleLine:(id)arg5 lowerLine:(id)arg6 metricOverrides:(id)arg7;	// IMP=0x0060000000011e5f
+ (void)_gkSetupSelectableTwoLineLayoutWithCell:(id)arg1 icon:(id)arg2 selectionView:(id)arg3 upperLine:(id)arg4 lowerLine:(id)arg5 metricOverrides:(id)arg6;	// IMP=0x0060000000011623
+ (id)_gkSetupThreeLineLayoutWithSuperview:(id)arg1 icon:(id)arg2 upperLine:(id)arg3 middleLine:(id)arg4 lowerLine:(id)arg5 metricOverrides:(id)arg6;	// IMP=0x00600000000110fe
+ (id)_gkSetupTwoLineLayoutWithSuperview:(id)arg1 icon:(id)arg2 upperLabel:(id)arg3 lowerLabel:(id)arg4 leadingBetween:(double)arg5 fontTextStyle:(id)arg6 metricOverrides:(id)arg7;	// IMP=0x0060000000010bf8
+ (void)_gkAdjustConstraintMargins:(id)arg1 leading:(double)arg2 trailing:(double)arg3;	// IMP=0x006000000001070b
+ (id)_gkStandardConstraintMetricsForIdiom:(long long)arg1 withOverrides:(id)arg2;	// IMP=0x00600000000105b8
+ (id)_gkStandardConstraintMetricsForIdiom:(long long)arg1;	// IMP=0x00600000000103de
+ (void)registerSupplementaryViewClassesForKind:(id)arg1 withCollectionView:(id)arg2;	// IMP=0x006000000001037b
- (id)_gkNewStandardImageView;	// IMP=0x0010000000010b7a
- (id)_gkNewStandardInfoLabel;	// IMP=0x0010000000010a49
- (id)_gkNewStandardTitleLabel;	// IMP=0x0010000000010918
- (void)_gkSetLeadingGuideConstraint:(id)arg1 trailingGuideConstraint:(id)arg2;	// IMP=0x001000000001065a
@end
