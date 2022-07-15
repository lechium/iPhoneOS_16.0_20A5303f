//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MediaControlsContainerView, MediaControlsSeparatorView, MediaControlsTimeControl, MediaControlsTransportStackView;

__attribute__((visibility("hidden")))
@interface MediaControlsParentContainerView : UIView
{
    long long _style;	// 8 = 0x8
    long long _selectedMode;	// 16 = 0x10
    MediaControlsContainerView *_containerView;	// 24 = 0x18
    MediaControlsSeparatorView *_topDividerView;	// 32 = 0x20
    MediaControlsSeparatorView *_bottomDividerView;	// 40 = 0x28
    UIView *_mediaControlsRoutingPickerView;	// 48 = 0x30
    long long _routingViewControllerAnimationCount;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000496ee
@property(nonatomic) long long routingViewControllerAnimationCount; // @synthesize routingViewControllerAnimationCount=_routingViewControllerAnimationCount;
@property(retain, nonatomic) UIView *mediaControlsRoutingPickerView; // @synthesize mediaControlsRoutingPickerView=_mediaControlsRoutingPickerView;
@property(retain, nonatomic) MediaControlsSeparatorView *bottomDividerView; // @synthesize bottomDividerView=_bottomDividerView;
@property(retain, nonatomic) MediaControlsSeparatorView *topDividerView; // @synthesize topDividerView=_topDividerView;
@property(retain, nonatomic) MediaControlsContainerView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) long long selectedMode; // @synthesize selectedMode=_selectedMode;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)handleHoverGestureRecognizer:(id)arg1;	// IMP=0x00000000000495c6
@property(retain, nonatomic) UIView *routingView;
- (void)_setInitialFrameForRoutingView:(id)arg1;	// IMP=0x00000000000493e9
- (void)_toggleRoutingPickerAnimated:(_Bool)arg1;	// IMP=0x0000000000049053
- (void)_updateTimeControlVisibility:(id)arg1;	// IMP=0x0000000000048e2f
- (void)_updateRoutingPickerVisibilityAnimated:(_Bool)arg1;	// IMP=0x0000000000048d6a
@property(retain, nonatomic) MediaControlsTimeControl *timeControl;
@property(retain, nonatomic) MediaControlsTransportStackView *transportStackView;
- (void)setSelectedMode:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000048c95
- (void)didMoveToWindow;	// IMP=0x0000000000048b8d
- (void)layoutSubviews;	// IMP=0x00000000000486f4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000048450

@end
