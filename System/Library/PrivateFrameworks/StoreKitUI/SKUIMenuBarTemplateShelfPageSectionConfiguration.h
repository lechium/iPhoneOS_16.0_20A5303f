//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SKUIMenuBarTemplateShelfPageSectionConfiguration
{
    id _fixedElementsCollectionViewCell;	// 8 = 0x8
    unsigned long long _numberOfIterations;	// 16 = 0x10
    long long _focusedIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000112e82
- (id)_focusedViewElement;	// IMP=0x0000000000112dab
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000112ac4
- (void)reloadShelfLayoutDataForShelfViewElement:(id)arg1 withShelfItemViewElements:(id)arg2 requestCellLayouts:(_Bool)arg3 numberOfShelfItems:(long long)arg4;	// IMP=0x000000000011296b
- (void)registerReusableClassesForCollectionView:(id)arg1;	// IMP=0x00000000001128f1
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;	// IMP=0x0000000000112833
- (struct CGSize)cellSizeForShelfViewElement:(id)arg1 indexPath:(id)arg2 numberOfShelfItems:(long long)arg3;	// IMP=0x000000000011267d
- (id)cellForShelfViewElement:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000001124a8
- (long long)numberOfSectionCells;	// IMP=0x0000000000112476
- (unsigned long long)numberOfIterations;	// IMP=0x0000000000112465
- (id)effectiveViewElementForShelfItemViewElement:(id)arg1;	// IMP=0x00000000001123c6
- (id)initWithNumberOfIterations:(unsigned long long)arg1;	// IMP=0x0000000000112376
- (id)init;	// IMP=0x000000000011235f

@end

