//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileViewController.h"

@class NSString, PUAssetActionManager, PUAssetReference, PUAssetViewModel, PUBrowsingViewModel, UIButton;

__attribute__((visibility("hidden")))
@interface PUOneUpSelectionIndicatorTileViewController : PUTileViewController
{
    _Bool __performingChanges;	// 8 = 0x8
    _Bool __needsUpdateButton;	// 9 = 0x9
    _Bool __buttonVisible;	// 10 = 0xa
    PUBrowsingViewModel *_browsingViewModel;	// 16 = 0x10
    PUAssetReference *_assetReference;	// 24 = 0x18
    PUAssetActionManager *_actionManager;	// 32 = 0x20
    UIButton *__button;	// 40 = 0x28
    PUAssetViewModel *_assetViewModel;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000294794
@property(retain, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
@property(nonatomic, getter=_isButtonVisible, setter=_setButtonVisible:) _Bool _buttonVisible; // @synthesize _buttonVisible=__buttonVisible;
@property(retain, nonatomic, setter=_setButton:) UIButton *_button; // @synthesize _button=__button;
@property(nonatomic, setter=_setNeedsUpdateButton:) _Bool _needsUpdateButton; // @synthesize _needsUpdateButton=__needsUpdateButton;
@property(nonatomic, getter=_isPerformingChanges, setter=_setPerformingChanges:) _Bool _performingChanges; // @synthesize _performingChanges=__performingChanges;
@property(retain, nonatomic) PUAssetActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) PUAssetReference *assetReference; // @synthesize assetReference=_assetReference;
@property(retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x0000000000294608
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000294411
- (void)_setButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000294314
- (void)_updateButtonIfNeeded;	// IMP=0x0000000000293dda
- (void)_invalidateButton;	// IMP=0x0000000000293dc3
- (_Bool)_needsUpdate;	// IMP=0x0000000000293db1
- (void)_setNeedsUpdate;	// IMP=0x0000000000293dab
- (void)_updateIfNeeded;	// IMP=0x0000000000293cf6
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000293c5b
- (void)_handleButton:(id)arg1;	// IMP=0x0000000000293abe
- (id)_selectionManager;	// IMP=0x0000000000293a28
- (id)_reviewActionManager;	// IMP=0x00000000002939d1
- (void)becomeReusable;	// IMP=0x00000000002935b2
- (void)viewDidLoad;	// IMP=0x0000000000293571

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

