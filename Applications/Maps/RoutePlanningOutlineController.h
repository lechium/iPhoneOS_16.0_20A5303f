//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSString, UICollectionView, UICollectionViewLayout, UIView;

@interface RoutePlanningOutlineController
{
    NSArray *_outlineSections;	// 8 = 0x8
    NSArray *_visibleOutlineSections;	// 16 = 0x10
    unsigned long long _batchUpdateCounter;	// 24 = 0x18
    NSMutableDictionary *_sectionsByIdentifier;	// 32 = 0x20
    long long _numberOfSections;	// 40 = 0x28
    NSMutableDictionary *_sectionCountByIdentifier;	// 48 = 0x30
    NSMutableDictionary *_sectionStartIndexByIdentifier;	// 56 = 0x38
    NSMutableDictionary *_sectionIdentifiersByStartIndex;	// 64 = 0x40
    _Bool _hideContent;	// 72 = 0x48
    UICollectionView *_collectionView;	// 80 = 0x50
    CDUnknownBlockType _postReloadHandler;	// 88 = 0x58
    UIView *_headerView;	// 96 = 0x60
}

+ (id)defaultCollectionViewLayout;	// IMP=0x002000000074ba50
- (void).cxx_destruct;	// IMP=0x002000000074d883
@property(nonatomic) _Bool hideContent; // @synthesize hideContent=_hideContent;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) CDUnknownBlockType postReloadHandler; // @synthesize postReloadHandler=_postReloadHandler;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)outlineSectionRequiresReload:(id)arg1;	// IMP=0x001000000074d810
- (long long)sectionIndexForOutlineSection:(id)arg1;	// IMP=0x001000000074d77d
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x001000000074d606
- (_Bool)collectionView:(id)arg1 selectionFollowsFocusForItemAtIndexPath:(id)arg2;	// IMP=0x001000000074d588
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x001000000074d4ed
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x001000000074d474
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x001000000074d3f6
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;	// IMP=0x001000000074d37d
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;	// IMP=0x001000000074d304
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x001000000074d286
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x001000000074d21b
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x001000000074d20a
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x001000000074d056
- (long long)_localSectionForGlobalSectionIndex:(long long)arg1 forSection:(id)arg2;	// IMP=0x001000000074cfc8
- (long long)indexOfFirstPopulatedSection;	// IMP=0x001000000074cf19
- (id)outlineSectionAtIndex:(long long)arg1;	// IMP=0x001000000074cc5c
- (void)performBatchSectionUpdates:(CDUnknownBlockType)arg1;	// IMP=0x001000000074ca46
- (void)didUpdateVisibleOutlineSections;	// IMP=0x001000000074ca40
- (void)_recalculateSectionCounts;	// IMP=0x001000000074c710
- (void)_updateVisibleOutlineSections;	// IMP=0x001000000074c55d
- (void)prepareOutlineSections;	// IMP=0x001000000074c3ec
- (id)_findVisualEffectView;	// IMP=0x001000000074c353
- (id)_blurredBackgroundView;	// IMP=0x001000000074c2cb
- (_Bool)_shouldUseBlurredBackground;	// IMP=0x001000000074c2ae
@property(readonly, nonatomic) UICollectionViewLayout *collectionViewLayout;
- (id)initWithCollectionView:(id)arg1;	// IMP=0x001000000074b93f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

