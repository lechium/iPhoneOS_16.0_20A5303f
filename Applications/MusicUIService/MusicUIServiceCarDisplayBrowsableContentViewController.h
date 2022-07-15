//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MCDPlayableContentViewController, NSMutableDictionary, NSString;

@interface MusicUIServiceCarDisplayBrowsableContentViewController : UIViewController
{
    MCDPlayableContentViewController *_nowPlayingViewController;	// 8 = 0x8
    NSString *_displayedViewControllerKey;	// 16 = 0x10
    NSMutableDictionary *_bundleIDsToStacks;	// 24 = 0x18
    _Bool _firstLaunchCompleted;	// 32 = 0x20
    CDUnknownBlockType _needsSwitch;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000096a7
- (id)preferredFocusEnvironments;	// IMP=0x001000000000960c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000000955d
- (void)saveCurrentStack;	// IMP=0x00100000000094a1
- (void)_performSwitchToNowPlayingForBundleID:(id)arg1 showNowPlaying:(_Bool)arg2;	// IMP=0x00100000000091da
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000009136
- (void)switchToState:(id)arg1;	// IMP=0x0010000000008f50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
