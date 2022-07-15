//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactCell.h"

@class CNStarkActionView, NSDictionary, NSString, UILabel;
@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNStarkFaceTimeCell : CNContactCell
{
    id <CNPropertyCellDelegate> _delegate;	// 8 = 0x8
    NSDictionary *_labelTextAttributes;	// 16 = 0x10
    UILabel *_faceTimeLabel;	// 24 = 0x18
    CNStarkActionView *_actionView;	// 32 = 0x20
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00100000000c24c9
- (void).cxx_destruct;	// IMP=0x00000000000c2478
@property(readonly, nonatomic) CNStarkActionView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) UILabel *faceTimeLabel; // @synthesize faceTimeLabel=_faceTimeLabel;
@property(copy, nonatomic) NSDictionary *labelTextAttributes; // @synthesize labelTextAttributes=_labelTextAttributes;
@property(nonatomic) __weak id <CNPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionViewTapped:(id)arg1;	// IMP=0x00000000000c23ed
- (void)updateTransportButtons;	// IMP=0x00000000000c23e7
- (_Bool)shouldShowStar;	// IMP=0x00000000000c23df
- (_Bool)supportsTintColorValue;	// IMP=0x00000000000c23d7
- (void)performDefaultAction;	// IMP=0x00000000000c2360
- (void)setSeparatorStyle:(long long)arg1;	// IMP=0x00000000000c232f
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000c220e
- (id)constantConstraints;	// IMP=0x00000000000c1e33
- (id)variableConstraints;	// IMP=0x00000000000c1e26
- (void)_cnui_applyContactStyle;	// IMP=0x00000000000c1d25
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000c1b29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
