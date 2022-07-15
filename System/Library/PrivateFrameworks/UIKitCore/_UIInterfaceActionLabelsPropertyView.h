//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSLayoutConstraint, NSString, UIInterfaceAction, UILabel;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionLabelsPropertyView : UIView
{
    NSLayoutConstraint *_leadingLabelLeadingConstraint;	// 8 = 0x8
    NSLayoutConstraint *_leadingLabelVerticalPositionConstraint;	// 16 = 0x10
    NSLayoutConstraint *_trailingLabelTrailingConstraint;	// 24 = 0x18
    NSLayoutConstraint *_trailingLabelVerticalPositionConstraint;	// 32 = 0x20
    NSLayoutConstraint *_interLabelSpacingConstraint;	// 40 = 0x28
    UILabel *_classificationLabel;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    NSArray *_labelConstraints;	// 64 = 0x40
    UIInterfaceAction *_action;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000496a6
@property(readonly, nonatomic) UIInterfaceAction *action; // @synthesize action=_action;
- (id)_newLabel;	// IMP=0x00000000000495bc
- (id)_classificationLabelIfVisible;	// IMP=0x0000000000049580
- (void)_reloadContentClassificationLabelDisplayProperties;	// IMP=0x0000000000049465
- (void)_reloadContentForTitleDisplayProperties;	// IMP=0x0000000000049351
- (id)_interfaceActionViewState;	// IMP=0x00000000000492eb
- (void)_applyVisualStyleToLabels;	// IMP=0x0000000000049229
- (void)_applyVisualStyle;	// IMP=0x00000000000491e5
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x00000000000491d3
- (id)viewForLastBaselineLayout;	// IMP=0x00000000000491be
- (id)viewForFirstBaselineLayout;	// IMP=0x00000000000491a9
- (void)tintColorDidChange;	// IMP=0x0000000000049197
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000049185
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;	// IMP=0x0000000000049173
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;	// IMP=0x0000000000048ae0
- (id)_visualStyle;	// IMP=0x0000000000048ac3
- (void)dealloc;	// IMP=0x0000000000048a77
- (id)initWithAction:(id)arg1;	// IMP=0x0000000000048933

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
