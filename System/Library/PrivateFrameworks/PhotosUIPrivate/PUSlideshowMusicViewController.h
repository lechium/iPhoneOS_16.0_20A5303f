//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, PUSlideshowMediaItem, PUSlideshowSettingsViewControllerSpec, UITableView;
@protocol PUSlideshowMusicDelegate;

__attribute__((visibility("hidden")))
@interface PUSlideshowMusicViewController : UIViewController
{
    NSArray *_mediaItems;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    PUSlideshowSettingsViewControllerSpec *_spec;	// 24 = 0x18
    _Bool _shouldHideTableViewWhenViewWillDisappear;	// 32 = 0x20
    _Bool __needsUpdateSpec;	// 33 = 0x21
    _Bool __needsUpdateBackgroundView;	// 34 = 0x22
    _Bool __needsUpdateTableView;	// 35 = 0x23
    PUSlideshowMediaItem *_currentMediaItem;	// 40 = 0x28
    id <PUSlideshowMusicDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000045ae25
@property(nonatomic, setter=_setNeedsUpdateTableView:) _Bool _needsUpdateTableView; // @synthesize _needsUpdateTableView=__needsUpdateTableView;
@property(nonatomic, setter=_setNeedsUpdateBackgroundView:) _Bool _needsUpdateBackgroundView; // @synthesize _needsUpdateBackgroundView=__needsUpdateBackgroundView;
@property(nonatomic, setter=_setNeedsUpdateSpec:) _Bool _needsUpdateSpec; // @synthesize _needsUpdateSpec=__needsUpdateSpec;
@property(nonatomic) __weak id <PUSlideshowMusicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PUSlideshowMediaItem *currentMediaItem; // @synthesize currentMediaItem=_currentMediaItem;
- (_Bool)pu_wantsNavigationBarVisible;	// IMP=0x000000000045ad7f
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;	// IMP=0x000000000045ad03
- (void)mediaPickerDidCancel:(id)arg1;	// IMP=0x000000000045ace9
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;	// IMP=0x000000000045ac22
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x000000000045aaf7
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000045aae6
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000045a916
- (void)_didPickMediaItem:(id)arg1;	// IMP=0x000000000045a86d
- (void)_didFinish;	// IMP=0x000000000045a7bb
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000045a4a6
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000045a47d
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000045a472
- (void)_updateTableViewIfNeeded;	// IMP=0x000000000045a421
- (void)_updateBackgroundViewIfNeeded;	// IMP=0x000000000045a394
- (void)_updateSpecIfNeeded;	// IMP=0x000000000045a296
- (void)_updateIfNeeded;	// IMP=0x000000000045a1c7
- (void)_invalidateTableView;	// IMP=0x000000000045a194
- (void)_invalidateBackgroundView;	// IMP=0x000000000045a161
- (void)_invalidateSpec;	// IMP=0x000000000045a12e
- (void)_setNeedsUpdate;	// IMP=0x000000000045a128
- (_Bool)_needsUpdate;	// IMP=0x000000000045a0ef
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000045a099
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000459f18
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000459e17
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000459d71
- (void)viewDidLoad;	// IMP=0x0000000000459bd4
- (void)dealloc;	// IMP=0x0000000000459b88
- (id)init;	// IMP=0x0000000000459ad4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
