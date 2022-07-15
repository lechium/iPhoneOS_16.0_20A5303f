//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, PUWallpaperPosterController, PUWallpaperPosterDateView, UIButton, UIView, _PUWallpaperDebugMutablePreferences, _PUWallpaperDebugRenderingEnvironment;

__attribute__((visibility("hidden")))
@interface PUWallpaperPlaygroundViewController : UIViewController
{
    _Bool _showsControls;	// 8 = 0x8
    UIView *_backgroundView;	// 16 = 0x10
    UIView *_foregroundView;	// 24 = 0x18
    UIView *_floatingView;	// 32 = 0x20
    UIView *_hostingView;	// 40 = 0x28
    _PUWallpaperDebugRenderingEnvironment *_environment;	// 48 = 0x30
    _PUWallpaperDebugMutablePreferences *_preferences;	// 56 = 0x38
    PUWallpaperPosterController *_posterController;	// 64 = 0x40
    PUWallpaperPosterDateView *_dateView;	// 72 = 0x48
    NSArray *_assets;	// 80 = 0x50
    id _shuffleTriggerObserver;	// 88 = 0x58
    UIButton *_doneButton;	// 96 = 0x60
    UIButton *_settingsButton;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000ec3e3
@property(retain, nonatomic) UIButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, nonatomic) id shuffleTriggerObserver; // @synthesize shuffleTriggerObserver=_shuffleTriggerObserver;
@property(readonly, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) PUWallpaperPosterDateView *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) PUWallpaperPosterController *posterController; // @synthesize posterController=_posterController;
@property(readonly, nonatomic) _PUWallpaperDebugMutablePreferences *preferences; // @synthesize preferences=_preferences;
@property(readonly, nonatomic) _PUWallpaperDebugRenderingEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) UIView *hostingView; // @synthesize hostingView=_hostingView;
@property(nonatomic) _Bool showsControls; // @synthesize showsControls=_showsControls;
@property(readonly, nonatomic) UIView *floatingView; // @synthesize floatingView=_floatingView;
@property(readonly, nonatomic) UIView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)presentPlaygroundWithPresentingViewController:(id)arg1;	// IMP=0x00000000000ec1dc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000ec191
- (void)pu_updatePreferences:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ec10d
- (void)_handleShuffleTrigger;	// IMP=0x00000000000ec053
- (void)_handleTwoFingerTap:(id)arg1;	// IMP=0x00000000000ec04d
- (void)_handleTap:(id)arg1;	// IMP=0x00000000000ec01a
- (void)_dismiss;	// IMP=0x00000000000ebf26
- (void)_setupControls;	// IMP=0x00000000000eb87a
- (void)_setupPosterController;	// IMP=0x00000000000eb6c4
- (void)_setupRendererViews;	// IMP=0x00000000000eb3f1
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000eb269
- (void)viewDidLoad;	// IMP=0x00000000000eb11a
- (_Bool)prefersStatusBarHidden;	// IMP=0x00000000000eb108
- (long long)preferredStatusBarStyle;	// IMP=0x00000000000eb0fd
- (id)_renderingEnvironmentForAssets:(id)arg1;	// IMP=0x00000000000eb043
- (void)dealloc;	// IMP=0x00000000000eafc7
- (id)initWithAssets:(id)arg1;	// IMP=0x00000000000eae0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double pu_backlightTransformAnimationDuration;
@property(readonly) Class superclass;

@end
