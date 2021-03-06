//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class GuidanceManeuverView, MNGuidanceSignDescription, MUBlurView, NSString, NSUUID, RouteStepListMetrics, UILabel;

@interface NavSecondarySignViewController : UIViewController
{
    RouteStepListMetrics *_metrics;	// 8 = 0x8
    GuidanceManeuverView *_guidanceManeuverView;	// 16 = 0x10
    MNGuidanceSignDescription *_latestPrimarySign;	// 24 = 0x18
    MNGuidanceSignDescription *_latestSecondarySign;	// 32 = 0x20
    _Bool _isShowingMidstepLaneGuidance;	// 40 = 0x28
    NSUUID *_drawnPrimarySignID;	// 48 = 0x30
    NSUUID *_drawnSecondarySignID;	// 56 = 0x38
    UILabel *_primaryTextLabel;	// 64 = 0x40
    MUBlurView *_backgroundView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000860adb
@property(retain, nonatomic) MUBlurView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)_updateSign;	// IMP=0x00100000008605d6
- (id)_currentSign;	// IMP=0x00100000008605a8
- (void)navigationService:(id)arg1 hideLaneDirectionsForId:(id)arg2;	// IMP=0x0010000000860583
- (void)navigationService:(id)arg1 showLaneDirections:(id)arg2;	// IMP=0x001000000086052b
- (void)navigationService:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x001000000086037f
- (void)_insertBackgroundView;	// IMP=0x001000000086022e
- (void)viewDidLoad;	// IMP=0x001000000085f813
- (id)init;	// IMP=0x001000000085f727
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000085f71f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

