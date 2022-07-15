//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UICollectionViewCompositionLayout.h>

@class NSArray, NSMapTable, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIStorePageSplitCollectionViewLayout : _UICollectionViewCompositionLayout
{
    NSString *_backdropGroupName;	// 8 = 0x8
    NSArray *_indexPathsForGradientItems;	// 16 = 0x10
    NSMutableArray *_orderedSublayouts;	// 24 = 0x18
    _Bool _rendersWithParallax;	// 32 = 0x20
    _Bool _rendersWithPerspective;	// 33 = 0x21
    NSMapTable *_sublayoutToSectionsToIndexRanges;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002f0485
@property(nonatomic) _Bool rendersWithParallax; // @synthesize rendersWithParallax=_rendersWithParallax;
@property(nonatomic) _Bool rendersWithPerspective; // @synthesize rendersWithPerspective=_rendersWithPerspective;
@property(copy, nonatomic) NSArray *indexPathsForGradientItems; // @synthesize indexPathsForGradientItems=_indexPathsForGradientItems;
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
- (id)_newStorePageCollectionViewLayout;	// IMP=0x00000000002f03b7
- (void)_createSectionsToIndexRangesMapTableIfNeededForSublayout:(id)arg1;	// IMP=0x00000000002f02ce
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x00000000002f0127
- (id)sublayouts;	// IMP=0x00000000002f0112
- (void)removeSublayout:(id)arg1;	// IMP=0x00000000002f009c
- (struct CGRect)_frameForLayout:(id)arg1 offset:(struct CGPoint)arg2 relativeToEdges:(unsigned long long)arg3 fromSiblingLayout:(id)arg4;	// IMP=0x00000000002effc1
- (void)addSublayout:(id)arg1 forSections:(id)arg2 offset:(struct CGPoint)arg3 relativeToEdges:(unsigned long long)arg4 fromSiblingLayout:(id)arg5;	// IMP=0x00000000002efda0
- (void)addSublayout:(id)arg1 forItems:(id)arg2 inSection:(long long)arg3 offset:(struct CGPoint)arg4 relativeToEdges:(unsigned long long)arg5 fromSiblingLayout:(id)arg6;	// IMP=0x00000000002efbc6
- (void)addSublayout:(id)arg1 forElementKinds:(id)arg2;	// IMP=0x00000000002efafc
- (id)pinnedLayoutAttributesForItemsInRect:(struct CGRect)arg1;	// IMP=0x00000000002ef45e
- (id)layoutAttributesForUnpinnedItemAtIndexPath:(id)arg1;	// IMP=0x00000000002ef192
@property(readonly, nonatomic) NSArray *indexPathsForPinningItems;
- (void)addSublayoutsUsingSplitsDescription:(id)arg1;	// IMP=0x00000000002ee7a9
- (id)init;	// IMP=0x00000000002ee6f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
