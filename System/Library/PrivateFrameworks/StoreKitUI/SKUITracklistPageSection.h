//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class NSString, SKUITracklistColumnData, SKUITracklistPageComponent, SKUIViewElementLayoutContext;
@protocol SKUIEntityProviding;

__attribute__((visibility("hidden")))
@interface SKUITracklistPageSection : SKUIStorePageSection
{
    SKUIViewElementLayoutContext *_cellLayoutContext;	// 8 = 0x8
    SKUITracklistColumnData *_columnData;	// 16 = 0x10
    id <SKUIEntityProviding> _entityProvider;	// 24 = 0x18
    long long _lastNeedsMoreCount;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002dca7e
- (double)_widthForButtonElements:(id)arg1;	// IMP=0x00000000002dc17c
- (id)_viewElementForIndex:(long long)arg1;	// IMP=0x00000000002dbe8e
- (void)_requestCellLayoutWithColumnData:(id)arg1;	// IMP=0x00000000002dbc6d
- (id)_representativeStringForViewElement:(id)arg1;	// IMP=0x00000000002dbadf
- (void)_reloadEntityProvider;	// IMP=0x00000000002dba2d
- (_Bool)_isDynamicTracklist;	// IMP=0x00000000002dba18
- (void)_enumerateVisibleViewElementsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002db862
- (id)_columnData;	// IMP=0x00000000002dac8f
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x00000000002dab07
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000002da9fe
- (void)willAppearInContext:(id)arg1;	// IMP=0x00000000002da80a
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000002da718
- (struct UIEdgeInsets)sectionContentInset;	// IMP=0x00000000002da618
- (_Bool)requestLayoutWithReloadReason:(long long)arg1;	// IMP=0x00000000002da34c
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;	// IMP=0x00000000002da234
- (id)relevantEntityProviders;	// IMP=0x00000000002da190
- (void)prefetchResourcesWithReason:(long long)arg1;	// IMP=0x00000000002da0af
- (long long)numberOfCells;	// IMP=0x00000000002d9e37
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d9bed
- (id)firstAppearanceIndexPath;	// IMP=0x00000000002d9ad1
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;	// IMP=0x00000000002d9a3f
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002d9901
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002d97c3
- (void)collectionViewWillScrollToOffset:(struct CGPoint)arg1 visibleRange:(struct SKUIIndexPathRange)arg2;	// IMP=0x00000000002d968f
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;	// IMP=0x00000000002d929b
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x00000000002d90fc
- (id)cellForIndexPath:(id)arg1;	// IMP=0x00000000002d8e01
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x00000000002d8cfc
- (long long)applyUpdateType:(long long)arg1;	// IMP=0x00000000002d8cab
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x00000000002d8bbb
- (void)dealloc;	// IMP=0x00000000002d8b70
- (id)initWithPageComponent:(id)arg1;	// IMP=0x00000000002d8b24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUITracklistPageComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end
