//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;
@protocol PUSelectableAssetCollectionViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUSelectableAssetCollectionViewLayout
{
    NSSet *_floatingCellIndexPaths;	// 8 = 0x8
    struct UIOffset _sharingBadgeOffset;	// 16 = 0x10
    struct CGSize _layoutReferenceSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000454e80
@property(nonatomic) struct CGSize layoutReferenceSize; // @synthesize layoutReferenceSize=_layoutReferenceSize;
@property(retain, nonatomic) NSSet *floatingCellIndexPaths; // @synthesize floatingCellIndexPaths=_floatingCellIndexPaths;
@property(nonatomic) struct UIOffset sharingBadgeOffset; // @synthesize sharingBadgeOffset=_sharingBadgeOffset;
- (struct CGRect)collectionViewBounds;	// IMP=0x0000000000454d99
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;	// IMP=0x0000000000454c64
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000454b74
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000454a97
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00000000004548ac
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x00000000004548a4
- (_Bool)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000000045484e
- (_Bool)_supportsAdvancedTransitionAnimations;	// IMP=0x0000000000454846
- (id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg1;	// IMP=0x0000000000454594
- (struct CGRect)_floatingSelectionBadgeFrameForItemFrame:(struct CGRect)arg1 visibleItemFrame:(struct CGRect)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000004543a0

// Remaining properties
@property(nonatomic) __weak id <PUSelectableAssetCollectionViewLayoutDelegate> delegate; // @dynamic delegate;

@end
