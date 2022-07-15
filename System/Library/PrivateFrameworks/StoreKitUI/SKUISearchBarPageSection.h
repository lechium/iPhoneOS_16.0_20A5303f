//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class SKUISearchBarController;

__attribute__((visibility("hidden")))
@interface SKUISearchBarPageSection : SKUIStorePageSection
{
    SKUISearchBarController *_searchBarController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000012af98
- (id)_searchBarController;	// IMP=0x000000000012ac99
- (void)willAppearInContext:(id)arg1;	// IMP=0x000000000012abf5
- (struct UIEdgeInsets)sectionContentInset;	// IMP=0x000000000012abda
- (long long)numberOfCells;	// IMP=0x000000000012abcf
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x000000000012aad7
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x000000000012a9df
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x000000000012a920
- (id)cellForIndexPath:(id)arg1;	// IMP=0x000000000012a7b7
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x000000000012a69f
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x000000000012a60f

@end
