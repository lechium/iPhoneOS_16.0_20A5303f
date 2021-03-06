//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, OKProducerPreset, PUSlideshowSettingsViewControllerSpec, UITableView;
@protocol PUSlideshowThemeDelegate;

__attribute__((visibility("hidden")))
@interface PUSlideshowThemeViewController : UIViewController
{
    NSArray *_presets;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    PUSlideshowSettingsViewControllerSpec *_spec;	// 24 = 0x18
    _Bool _shouldHideTableViewWhenViewWillDisappear;	// 32 = 0x20
    _Bool __needsUpdateSpec;	// 33 = 0x21
    _Bool __needsUpdateBackgroundView;	// 34 = 0x22
    _Bool __needsUpdateTableView;	// 35 = 0x23
    OKProducerPreset *_currentPreset;	// 40 = 0x28
    id <PUSlideshowThemeDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000464c91
@property(nonatomic, setter=_setNeedsUpdateTableView:) _Bool _needsUpdateTableView; // @synthesize _needsUpdateTableView=__needsUpdateTableView;
@property(nonatomic, setter=_setNeedsUpdateBackgroundView:) _Bool _needsUpdateBackgroundView; // @synthesize _needsUpdateBackgroundView=__needsUpdateBackgroundView;
@property(nonatomic, setter=_setNeedsUpdateSpec:) _Bool _needsUpdateSpec; // @synthesize _needsUpdateSpec=__needsUpdateSpec;
@property(nonatomic) __weak id <PUSlideshowThemeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) OKProducerPreset *currentPreset; // @synthesize currentPreset=_currentPreset;
- (_Bool)pu_wantsNavigationBarVisible;	// IMP=0x0000000000464beb
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;	// IMP=0x0000000000464b6f
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000464aba
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000464945
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000464928
- (void)_didPickPreset:(id)arg1;	// IMP=0x0000000000464894
- (void)_didFinish;	// IMP=0x00000000004647e2
- (void)_updateTableViewIfNeeded;	// IMP=0x0000000000464791
- (void)_updateBackgroundViewIfNeeded;	// IMP=0x00000000004646ad
- (void)_updateSpecIfNeeded;	// IMP=0x00000000004645af
- (void)_updateIfNeeded;	// IMP=0x00000000004644e0
- (void)_invalidateTableView;	// IMP=0x00000000004644ad
- (void)_invalidateBackgroundView;	// IMP=0x000000000046447a
- (void)_invalidateSpec;	// IMP=0x0000000000464447
- (void)_setNeedsUpdate;	// IMP=0x0000000000464441
- (_Bool)_needsUpdate;	// IMP=0x0000000000464408
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000004643b2
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000464231
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000464130
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000046408a
- (void)viewDidLoad;	// IMP=0x0000000000463f09
- (void)dealloc;	// IMP=0x0000000000463ebd
- (id)init;	// IMP=0x0000000000463c35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

