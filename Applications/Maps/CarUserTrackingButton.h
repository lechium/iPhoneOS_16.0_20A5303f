//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/_MKUserTrackingButton.h>

@class CarDynamicBlurView, NSLayoutConstraint, NSString, UITapGestureRecognizer;

@interface CarUserTrackingButton : _MKUserTrackingButton
{
    UITapGestureRecognizer *_recognizer;	// 8 = 0x8
    struct CGRect _lastBounds;	// 16 = 0x10
    unsigned long long _lastRoundedCorners;	// 48 = 0x30
    CarDynamicBlurView *_blurView;	// 56 = 0x38
    NSLayoutConstraint *_heightConstraint;	// 64 = 0x40
    unsigned long long _roundedCorners;	// 72 = 0x48
    struct UIEdgeInsets _touchInsets;	// 80 = 0x50
}

+ (id)buttonWithUserTrackingView:(id)arg1;	// IMP=0x0020000000a5ab15
- (void).cxx_destruct;	// IMP=0x0020000000a5b3e2
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0010000000a5b303
- (void)_repositionViews;	// IMP=0x0010000000a5b2fd
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0010000000a5b2a4
- (_Bool)canBecomeFocused;	// IMP=0x0010000000a5b29c
- (void)tappedButton:(id)arg1;	// IMP=0x0010000000a5b285
@property(readonly, nonatomic) _Bool needsContinuousRoundedCorners;
@property(nonatomic) double roundedCornerRadius;
- (void)layoutSubviews;	// IMP=0x0010000000a5b124
- (unsigned long long)behavior;	// IMP=0x0010000000a5b119
- (_Bool)_isHighlightedForState:(long long)arg1;	// IMP=0x0010000000a5b111
- (long long)_activityIndicatorStyle;	// IMP=0x0010000000a5b106
- (void)_updateColors;	// IMP=0x0010000000a5b020
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000a5af1d
- (void)didMoveToWindow;	// IMP=0x0010000000a5aeaf
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000a5acb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

