//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, RouteStepItem;

@interface RouteStepListView : UIView
{
    UIView *_hairlineView;	// 8 = 0x8
    NSLayoutConstraint *_hairlineLeadingConstraint;	// 16 = 0x10
    NSLayoutConstraint *_hairlineTrailingConstraint;	// 24 = 0x18
    NSLayoutConstraint *_hairlineHeightConstraint;	// 32 = 0x20
    RouteStepItem *_item;	// 40 = 0x28
}

+ (double)heightForItem:(id)arg1 width:(double)arg2 maximumHeight:(double)arg3;	// IMP=0x00200000009f9c98
- (void).cxx_destruct;	// IMP=0x00200000009f9f5d
@property(retain, nonatomic) RouteStepItem *item; // @synthesize item=_item;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000009f9e83
- (void)_updateHairline;	// IMP=0x00100000009f9de9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000009f99a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
