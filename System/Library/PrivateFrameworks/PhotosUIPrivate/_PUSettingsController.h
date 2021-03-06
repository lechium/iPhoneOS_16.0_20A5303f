//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeToolsUI/PTUISettingsController.h>

@class NSString, PTSettings, PXSettings, PXToast, UINavigationController;

__attribute__((visibility("hidden")))
@interface _PUSettingsController : PTUISettingsController
{
    _Bool _hasWarnedForOverrides;	// 8 = 0x8
    UINavigationController *_searchNavigationController;	// 16 = 0x10
    PTSettings *_rootSettings;	// 24 = 0x18
    CDUnknownBlockType _onViewDidDisappearBlock;	// 32 = 0x20
    CDUnknownBlockType _dismissButtonFactory;	// 40 = 0x28
    CDUnknownBlockType _ellipsisBarButtonItemFactory;	// 48 = 0x30
    PXToast *_toast;	// 56 = 0x38
    UINavigationController *_configurationsNavigationController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000040e452
@property(nonatomic) _Bool hasWarnedForOverrides; // @synthesize hasWarnedForOverrides=_hasWarnedForOverrides;
@property(readonly, nonatomic) UINavigationController *configurationsNavigationController; // @synthesize configurationsNavigationController=_configurationsNavigationController;
@property(retain, nonatomic) PXToast *toast; // @synthesize toast=_toast;
@property(copy, nonatomic) CDUnknownBlockType ellipsisBarButtonItemFactory; // @synthesize ellipsisBarButtonItemFactory=_ellipsisBarButtonItemFactory;
@property(copy, nonatomic) CDUnknownBlockType dismissButtonFactory; // @synthesize dismissButtonFactory=_dismissButtonFactory;
@property(copy, nonatomic) CDUnknownBlockType onViewDidDisappearBlock; // @synthesize onViewDidDisappearBlock=_onViewDidDisappearBlock;
@property(readonly, nonatomic) PTSettings *rootSettings; // @synthesize rootSettings=_rootSettings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;	// IMP=0x000000000040e2f9
- (void)_hideToast;	// IMP=0x000000000040e21b
- (void)_showReminderToQuitAfterChange;	// IMP=0x000000000040e091
- (void)_clearSettingsOverride;	// IMP=0x000000000040df61
- (void)_warnForSettingsOverride;	// IMP=0x000000000040de32
- (void)handleEllipsisBarButtonItem:(id)arg1;	// IMP=0x000000000040d9f6
@property(readonly, nonatomic) UINavigationController *searchNavigationController; // @synthesize searchNavigationController=_searchNavigationController;
- (void)_updateNavigationItemOfViewController:(id)arg1;	// IMP=0x000000000040d82f
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000040d7b7
- (void)_invalidateNavigationItems;	// IMP=0x000000000040d67d
- (void)callOnViewDidDisappearBlock;	// IMP=0x000000000040d54c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000040d50b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000040d45e
@property(readonly, nonatomic) PXSettings *currentSettings;
- (id)initWithRootSettings:(id)arg1;	// IMP=0x000000000040d327

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

