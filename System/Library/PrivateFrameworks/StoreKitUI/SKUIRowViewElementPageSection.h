//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class NSString, SKUIRowComponent, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIRowViewElementPageSection : SKUIStorePageSection
{
    SKUIViewElementLayoutContext *_cellLayoutContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002842dd
- (double)_singleColumnWidth;	// IMP=0x0000000000284095
- (id)_reuseIdentifierForViewElement:(id)arg1;	// IMP=0x0000000000283f82
- (id)_reuseIdentifierForLockupViewElement:(id)arg1;	// IMP=0x0000000000283f4b
- (id)_reuseIdentifierForCardViewElement:(id)arg1;	// IMP=0x0000000000283f18
- (void)_requestLayoutForCells;	// IMP=0x0000000000283e50
- (double)_interiorColumnSpacing;	// IMP=0x0000000000283cf4
- (id)_firstChildForColumn:(id)arg1;	// IMP=0x0000000000283bbd
- (void)_enumerateViewElementsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002839aa
- (struct UIEdgeInsets)_contentInsetForIndexPath:(id)arg1;	// IMP=0x0000000000283843
- (Class)_cellClassForViewElement:(id)arg1;	// IMP=0x0000000000283735
- (Class)_cellClassForLockupViewElement:(id)arg1;	// IMP=0x00000000002836f7
- (Class)_cellClassForCardViewElement:(id)arg1;	// IMP=0x00000000002836b4
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x00000000002834e9
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000283448
- (void)willAppearInContext:(id)arg1;	// IMP=0x000000000028314b
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000282f12
- (void)prefetchResourcesWithReason:(long long)arg1;	// IMP=0x0000000000282e20
- (long long)numberOfCells;	// IMP=0x0000000000282d8b
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;	// IMP=0x0000000000282d04
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000282b84
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002829d2
- (_Bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;	// IMP=0x00000000002829ca
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;	// IMP=0x00000000002829c2
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;	// IMP=0x00000000002826cd
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x00000000002824ed
- (id)cellForIndexPath:(id)arg1;	// IMP=0x000000000028221e
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x000000000028208a
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x0000000000281f28
- (struct UIEdgeInsets)sectionContentInset;	// IMP=0x0000000000281d9d
- (void)dealloc;	// IMP=0x0000000000281d52
- (id)initWithPageComponent:(id)arg1;	// IMP=0x0000000000281d23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUIRowComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

