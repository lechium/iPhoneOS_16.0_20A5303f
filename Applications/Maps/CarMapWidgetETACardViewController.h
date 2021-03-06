//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class GuidanceETA, MISSING_TYPE, NSArray, NSString, UILabel, UIStackView, UIVisualEffectView;

@interface CarMapWidgetETACardViewController : UIViewController
{
    MISSING_TYPE *_etaLabel;	// 8 = 0x8
    UILabel *_timeLabel;	// 16 = 0x10
    UILabel *_distanceLabel;	// 24 = 0x18
    NSArray *_currentArrangedSubviews;	// 32 = 0x20
    UIStackView *_labelStackView;	// 40 = 0x28
    UIVisualEffectView *_cardBackgroundView;	// 48 = 0x30
    _Bool _shouldUseWideLayout;	// 56 = 0x38
    GuidanceETA *_latestETA;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000008465db
@property(nonatomic) _Bool shouldUseWideLayout; // @synthesize shouldUseWideLayout=_shouldUseWideLayout;
@property(retain, nonatomic) GuidanceETA *latestETA; // @synthesize latestETA=_latestETA;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (id)_cardBackgroundView;	// IMP=0x0010000000846498
- (id)_effectForInterfaceStyle:(long long)arg1;	// IMP=0x001000000084646e
- (CDStruct_0af47fae)cornerMaskForCarCardLayout:(CDStruct_de0926f2)arg1;	// IMP=0x0010000000846432
- (id)backgroundViewForCarCardLayout:(CDStruct_de0926f2)arg1 scale:(double)arg2 userInterfaceStyle:(long long)arg3;	// IMP=0x0010000000846420
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000008461a8
- (void)_updateContents;	// IMP=0x0010000000845d98
- (void)_updateArrangedSubviewsIfNeeded;	// IMP=0x0010000000845c28
- (void)_setupConstraints;	// IMP=0x00100000008456a3
- (void)viewDidLayoutSubviews;	// IMP=0x001000000084559b
- (void)viewDidLoad;	// IMP=0x0010000000845190

// Remaining properties
@property(nonatomic) struct CGSize availableCardSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic, getter=isTransitioning) _Bool transitioning;

@end

