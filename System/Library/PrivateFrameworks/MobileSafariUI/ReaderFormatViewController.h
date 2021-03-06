//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, SFReaderAppearanceThemeSelector, UICollectionView, UICollectionViewCellRegistration;
@protocol SFReaderContext, _SFSettingsAlertOptionsGroupController;

__attribute__((visibility("hidden")))
@interface ReaderFormatViewController : UIViewController
{
    UICollectionView *_collectionView;	// 8 = 0x8
    SFReaderAppearanceThemeSelector *_themeSelector;	// 16 = 0x10
    id <_SFSettingsAlertOptionsGroupController> _fontGroupController;	// 24 = 0x18
    UICollectionViewCellRegistration *_cellRegistrations[2];	// 32 = 0x20
    id <SFReaderContext> _readerContext;	// 48 = 0x30
    long long _provenance;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001a3f2e
@property(readonly, nonatomic) long long provenance; // @synthesize provenance=_provenance;
@property(readonly, nonatomic) id <SFReaderContext> readerContext; // @synthesize readerContext=_readerContext;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000000001a3efa
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000001a3df0
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000001a3d54
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000001a3c16
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000001a3bb3
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000001a3ba8
- (void)_updateCloseButton;	// IMP=0x00000000001a39d2
- (void)viewDidLayoutSubviews;	// IMP=0x00000000001a3991
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001a3841
- (void)viewDidLoad;	// IMP=0x00000000001a330e
- (void)loadView;	// IMP=0x00000000001a312f
- (id)initWithReaderContext:(id)arg1 provenance:(long long)arg2;	// IMP=0x00000000001a3012

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

