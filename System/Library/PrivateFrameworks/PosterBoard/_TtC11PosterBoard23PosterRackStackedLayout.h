//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11PosterBoard23PosterRackStackedLayout : UICollectionViewLayout
{
    MISSING_TYPE *layoutMode;	// 8 = 0x8
    MISSING_TYPE *selectedSectionIndex;	// 16 = 0x10
    MISSING_TYPE *sectionRevealProgressProvider;	// 32 = 0x20
    MISSING_TYPE *hidesHomeCardsUnlessHomePeeking;	// 48 = 0x30
    MISSING_TYPE *alongsideCompactLayoutShouldScaleFurtherBack;	// 49 = 0x31
    MISSING_TYPE *layoutModeTransitioningTo;	// 56 = 0x38
    MISSING_TYPE *itemSize;	// 72 = 0x48
    MISSING_TYPE *minimumLineSpacing;	// 88 = 0x58
    MISSING_TYPE *sectionInset;	// 96 = 0x60
    MISSING_TYPE *scrollDirection;	// 128 = 0x80
    MISSING_TYPE *zoomCardSizeMultiplier;	// 136 = 0x88
    MISSING_TYPE *cardSizeMultiplier;	// 144 = 0x90
    MISSING_TYPE *peekingCardSizeMultiplier;	// 152 = 0x98
    MISSING_TYPE *alongsideCardUpscale;	// 160 = 0xa0
    MISSING_TYPE *alongsideCardLesserUpscale;	// 168 = 0xa8
    MISSING_TYPE *maximumVerticalRevealFraction;	// 176 = 0xb0
    MISSING_TYPE *overhangMultiplier;	// 184 = 0xb8
    MISSING_TYPE *zoomCardSizeOverlapMultiplier;	// 192 = 0xc0
    MISSING_TYPE *selectedFrontBaseOffset;	// 200 = 0xc8
    MISSING_TYPE *unselectedFrontBaseOffset;	// 208 = 0xd0
    MISSING_TYPE *unselectedFrontShovedMultiplier;	// 216 = 0xd8
    MISSING_TYPE *unselectedFrontParallaxLeadingMultiplier;	// 224 = 0xe0
    MISSING_TYPE *unselectedFrontParallaxTrailingMultiplier;	// 232 = 0xe8
    MISSING_TYPE *backBaseOffset;	// 240 = 0xf0
    MISSING_TYPE *backParallaxMultiplier;	// 248 = 0xf8
    MISSING_TYPE *contentBounds;	// 256 = 0x100
    MISSING_TYPE *cachedAttributes;	// 288 = 0x120
    MISSING_TYPE *cachedSupplementaryHeaderAttributes;	// 296 = 0x128
    MISSING_TYPE *cachedSupplementaryFooterAttributes;	// 304 = 0x130
    MISSING_TYPE *sectionRevealProgresses;	// 312 = 0x138
    MISSING_TYPE *sectionIndexPathsToDelete;	// 320 = 0x140
    MISSING_TYPE *indexPathToMaintainForTransition;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000000a56c0
- (id)init;	// IMP=0x00000000000a5660
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;	// IMP=0x00000000000a5150
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00000000000a4e20
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;	// IMP=0x00000000000a3fd0
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000a3ec0
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;	// IMP=0x00000000000a39a0
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000a3370
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000a3190
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x00000000000a2e70
@property(nonatomic, readonly) struct CGSize collectionViewContentSize;
- (void)prepareLayout;	// IMP=0x00000000000a1f90
- (void)finalizeLayoutTransition;	// IMP=0x00000000000a0430
- (void)prepareForTransitionFromLayout:(id)arg1;	// IMP=0x00000000000a03e0
- (void)prepareForTransitionToLayout:(id)arg1;	// IMP=0x000000000009fe30
- (void)finalizeCollectionViewUpdates;	// IMP=0x000000000009fda0
- (void)prepareForCollectionViewUpdates:(id)arg1;	// IMP=0x000000000009fce0
@property(nonatomic, readonly) _Bool flipsHorizontallyInOppositeLayoutDirection;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009f770

@end
