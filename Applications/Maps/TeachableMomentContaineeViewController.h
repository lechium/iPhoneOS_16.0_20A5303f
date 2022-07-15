//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CardButton, MapsLoopingVideoPlayerView, TeachableMomentConfiguration, UIButton, UILabel, UIView;

@interface TeachableMomentContaineeViewController
{
    TeachableMomentConfiguration *_configuration;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UIView *_animationContainer;	// 24 = 0x18
    MapsLoopingVideoPlayerView *_playerView;	// 32 = 0x20
    UIButton *_buttomButton;	// 40 = 0x28
    CardButton *_closeButton;	// 48 = 0x30
}

+ (_Bool)hasShownTeachableMoment;	// IMP=0x00200000008a9efc
- (void).cxx_destruct;	// IMP=0x00200000008aa38f
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x00100000008aa1e8
- (void)willChangeContainerStyle:(unsigned long long)arg1;	// IMP=0x00100000008aa1c6
- (void)_setHasShownTeachableMomentFlag;	// IMP=0x00100000008aa143
- (void)_updateForCurrentState;	// IMP=0x00100000008a9fa1
- (id)_videoNameForCurrentState;	// IMP=0x00100000008a9f4d
- (_Bool)_isDarkMode;	// IMP=0x00100000008a9f04
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000008a9ea6
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000008a9de8
- (void)_closeButtonAction:(id)arg1;	// IMP=0x00100000008a9dd6
- (void)viewDidLoad;	// IMP=0x00100000008a8d0b
- (id)initWithTeachableMomentConfiguration:(id)arg1;	// IMP=0x00100000008a8bef

@end
