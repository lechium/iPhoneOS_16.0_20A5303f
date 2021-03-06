//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutConstraint, NSString, ShortcutsRowBackgroundView, SuggestionsDataProvider, UICollectionView, UICollectionViewCompositionalLayout, UICollectionViewDiffableDataSource, UITraitCollection;
@protocol ShortcutsRowCellProviderDelegate;

@interface ShortcutsRowCellProvider : NSObject
{
    UICollectionViewCompositionalLayout *_collectionViewLayout;	// 8 = 0x8
    NSArray *_shortcuts;	// 16 = 0x10
    NSArray *_cellModels;	// 24 = 0x18
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 32 = 0x20
    ShortcutsRowBackgroundView *_backgroundView;	// 40 = 0x28
    UICollectionView *_collectionView;	// 48 = 0x30
    id <ShortcutsRowCellProviderDelegate> _delegate;	// 56 = 0x38
    NSLayoutConstraint *_heightConstraint;	// 64 = 0x40
    SuggestionsDataProvider *_suggestionsDataProvider;	// 72 = 0x48
    UITraitCollection *_traitCollection;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000711634
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(retain, nonatomic) SuggestionsDataProvider *suggestionsDataProvider; // @synthesize suggestionsDataProvider=_suggestionsDataProvider;
@property(readonly, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(nonatomic) __weak id <ShortcutsRowCellProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)_captureTapActionWithModel:(id)arg1;	// IMP=0x00100000007114fb
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000711353
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00100000007112da
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00100000007112c8
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x001000000071102e
- (void)homeDataProvidingObjectDidUpdate:(id)arg1;	// IMP=0x0010000000711017
- (id)_modelAtIndexPath:(id)arg1;	// IMP=0x0010000000710f71
- (void)_updateBackgroundView;	// IMP=0x0010000000710f5b
- (void)_buildModels;	// IMP=0x0010000000710cb6
- (void)_updateContentAnimated:(_Bool)arg1;	// IMP=0x0010000000710b11
- (id)_collectionViewLayout;	// IMP=0x0010000000710475
- (void)_updateHeightConstraint;	// IMP=0x00100000007103e3
- (void)fetchMissingImages;	// IMP=0x00100000007102ba
- (id)initWithCollectionView:(id)arg1;	// IMP=0x001000000070fefe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

