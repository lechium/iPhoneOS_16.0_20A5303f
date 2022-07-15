//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, OKProducerPreset, PUSlideshowMediaItem, PUSlideshowSession, PUSlideshowSettingsViewControllerSpec, PUSlideshowSettingsViewModel, UITableView;
@protocol PUSlideshowSettingsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUSlideshowSettingsViewController : UIViewController
{
    PUSlideshowSession *_session;	// 8 = 0x8
    PUSlideshowSettingsViewModel *_settingsViewModel;	// 16 = 0x10
    PUSlideshowSettingsViewControllerSpec *_spec;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
    _Bool _shouldHideTableViewWhenViewWillDisappear;	// 40 = 0x28
    _Bool __needsUpdateSpec;	// 41 = 0x29
    _Bool __needsUpdateTableView;	// 42 = 0x2a
    _Bool __needsUpdateNavigationBar;	// 43 = 0x2b
    _Bool __needsUpdatePreset;	// 44 = 0x2c
    _Bool __needsUpdateMediaItem;	// 45 = 0x2d
    _Bool __needsUpdateMusicOn;	// 46 = 0x2e
    id <PUSlideshowSettingsViewControllerDelegate> _delegate;	// 48 = 0x30
    OKProducerPreset *__pendingPreset;	// 56 = 0x38
    PUSlideshowMediaItem *__pendingMediaItem;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000461cb3
@property(retain, nonatomic, setter=_setPendingMediaItem:) PUSlideshowMediaItem *_pendingMediaItem; // @synthesize _pendingMediaItem=__pendingMediaItem;
@property(retain, nonatomic, setter=_setPendingPreset:) OKProducerPreset *_pendingPreset; // @synthesize _pendingPreset=__pendingPreset;
@property(nonatomic, setter=_setNeedsUpdateMusicOn:) _Bool _needsUpdateMusicOn; // @synthesize _needsUpdateMusicOn=__needsUpdateMusicOn;
@property(nonatomic, setter=_setNeedsUpdateMediaItem:) _Bool _needsUpdateMediaItem; // @synthesize _needsUpdateMediaItem=__needsUpdateMediaItem;
@property(nonatomic, setter=_setNeedsUpdatePreset:) _Bool _needsUpdatePreset; // @synthesize _needsUpdatePreset=__needsUpdatePreset;
@property(nonatomic, setter=_setNeedsUpdateNavigationBar:) _Bool _needsUpdateNavigationBar; // @synthesize _needsUpdateNavigationBar=__needsUpdateNavigationBar;
@property(nonatomic, setter=_setNeedsUpdateTableView:) _Bool _needsUpdateTableView; // @synthesize _needsUpdateTableView=__needsUpdateTableView;
@property(nonatomic, setter=_setNeedsUpdateSpec:) _Bool _needsUpdateSpec; // @synthesize _needsUpdateSpec=__needsUpdateSpec;
@property(nonatomic) __weak id <PUSlideshowSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)PUSlideshowSpeedCell:(id)arg1 stepDurationDidChange:(double)arg2;	// IMP=0x0000000000461b45
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x0000000000461af4
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;	// IMP=0x0000000000461a9d
- (void)musicPickerDidFinish:(id)arg1;	// IMP=0x0000000000461a53
- (void)musicPicker:(id)arg1 didPickMediaItem:(id)arg2;	// IMP=0x000000000046199c
- (void)themePickerDidFinish:(id)arg1;	// IMP=0x0000000000461952
- (void)themePicker:(id)arg1 didPickPreset:(id)arg2;	// IMP=0x000000000046188e
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x0000000000461837
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000004616b4
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000460f85
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000460f7a
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000460f6f
- (void)_toggleMusic:(id)arg1;	// IMP=0x0000000000460efb
- (void)_toggleRepeat:(id)arg1;	// IMP=0x0000000000460e87
- (void)_didTapDoneButton:(id)arg1;	// IMP=0x0000000000460dd6
- (void)_synchronizedChangedSettings;	// IMP=0x0000000000460c3a
- (void)_updateMusicOnIfNeeded;	// IMP=0x0000000000460baa
- (void)_updateMediaItemIfNeeded;	// IMP=0x0000000000460b1a
- (void)_updatePresetIfNeeded;	// IMP=0x0000000000460ac9
- (void)_updateNavigationBarIfNeeded;	// IMP=0x0000000000460a32
- (void)_updateTableViewIfNeeded;	// IMP=0x0000000000460948
- (void)_updateSpecIfNeeded;	// IMP=0x000000000046084a
- (void)_updateIfNeeded;	// IMP=0x0000000000460754
- (void)_invalidateMusicOn;	// IMP=0x0000000000460721
- (void)_invalidateMediaItem;	// IMP=0x00000000004606ee
- (void)_invalidatePreset;	// IMP=0x00000000004606bb
- (void)_invalidateNavigationBar;	// IMP=0x0000000000460688
- (void)_invalidateTableView;	// IMP=0x0000000000460655
- (void)_invalidateSpec;	// IMP=0x0000000000460622
- (void)_setNeedsUpdate;	// IMP=0x000000000046061c
- (_Bool)_needsUpdate;	// IMP=0x00000000004605a7
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000046045d
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000460345
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000004602f1
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000046020d
- (void)viewDidLoad;	// IMP=0x000000000046004f
- (void)dealloc;	// IMP=0x000000000045ffe0
- (id)initWithSession:(id)arg1;	// IMP=0x000000000045fe80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
