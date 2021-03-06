//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSSet, NSString, NSUUID, UICollectionView, UICollectionViewData, _UICollectionViewFocusedItemState;

__attribute__((visibility("hidden")))
@interface UICollectionViewUpdate : NSObject
{
    UICollectionView *_collectionView;	// 8 = 0x8
    NSArray *_updateItems;	// 16 = 0x10
    UICollectionViewData *_oldModel;	// 24 = 0x18
    UICollectionViewData *_newModel;	// 32 = 0x20
    struct CGRect _oldVisibleBounds;	// 40 = 0x28
    struct CGRect _newVisibleBounds;	// 72 = 0x48
    NSMutableIndexSet *_movedItems;	// 104 = 0x68
    NSMutableIndexSet *_movedSections;	// 112 = 0x70
    NSMutableIndexSet *_deletedSections;	// 120 = 0x78
    NSMutableIndexSet *_insertedSections;	// 128 = 0x80
    long long *_oldSectionMap;	// 136 = 0x88
    long long *_newSectionMap;	// 144 = 0x90
    long long *_oldGlobalItemMap;	// 152 = 0x98
    long long *_newGlobalItemMap;	// 160 = 0xa0
    NSMutableArray *_deletedSupplementaryIndexesSectionArray;	// 168 = 0xa8
    NSMutableArray *_insertedSupplementaryIndexesSectionArray;	// 176 = 0xb0
    NSMutableDictionary *_deletedSupplementaryTopLevelIndexesDict;	// 184 = 0xb8
    NSMutableDictionary *_insertedSupplementaryTopLevelIndexesDict;	// 192 = 0xc0
    _UICollectionViewFocusedItemState *_oldFocusedItemState;	// 200 = 0xc8
    _UICollectionViewFocusedItemState *_newFocusedItemState;	// 208 = 0xd0
    NSUUID *_identifier;	// 216 = 0xd8
    NSSet *_itemAnchoredAuxiliaryElementKinds;	// 224 = 0xe0
    NSSet *_moveItemSourceIndexPaths;	// 232 = 0xe8
    struct {
        unsigned int layoutPreparedForUpdates:1;
    } _flags;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x00000000003ab21f
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)setLayoutPreparedForUpdates;	// IMP=0x00000000003ab205
@property(readonly, nonatomic, getter=isLayoutPreparedForUpdates) _Bool layoutPreparedForUpdates;
- (long long)finalSectionCount;	// IMP=0x00000000003ab1e9
- (long long)initialSectionCount;	// IMP=0x00000000003ab1db
- (struct _NSRange)finalSectionGlobalItemRangeForSection:(long long)arg1;	// IMP=0x00000000003ab180
- (struct _NSRange)initalSectionGlobalItemRangeForSection:(long long)arg1;	// IMP=0x00000000003ab125
- (id)initialIndexPathForSupplementaryElementOfKind:(id)arg1 forFinalIndexPath:(id)arg2;	// IMP=0x00000000003ab113
- (id)finalIndexPathForSupplementaryElementOfKind:(id)arg1 forInitialIndexPath:(id)arg2;	// IMP=0x00000000003ab101
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;	// IMP=0x00000000003ab0c4
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;	// IMP=0x00000000003ab087
- (id)initialIndexPathForFinalIndexPath:(id)arg1;	// IMP=0x00000000003aafff
- (id)finalIndexPathForInitialIndexPath:(id)arg1;	// IMP=0x00000000003aaf77
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1;	// IMP=0x00000000003aaeea
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1;	// IMP=0x00000000003aae5d
- (_Bool)hasMovedItemAtOldIndexPath:(id)arg1;	// IMP=0x00000000003aad0d
- (_Bool)hasDeletedAuxiliaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000003aab3e
- (_Bool)hasInsertedAuxiliaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000003aa96f
- (id)validatedOldIndexPathForSupplementaryElementOfKind:(id)arg1 newIndexPath:(id)arg2;	// IMP=0x00000000003aa782
- (id)oldIndexPathForSupplementaryElementOfKind:(id)arg1 newIndexPath:(id)arg2;	// IMP=0x00000000003aa58c
- (id)validatedNewIndexPathForSupplementaryElementOfKind:(id)arg1 oldIndexPath:(id)arg2;	// IMP=0x00000000003aa3c3
- (id)newIndexPathForSupplementaryElementOfKind:(id)arg1 oldIndexPath:(id)arg2;	// IMP=0x00000000003aa1cd
- (void)_computeAuxiliaryUpdates;	// IMP=0x00000000003a977c
- (void)_computeItemUpdates;	// IMP=0x00000000003a8b56
- (void)_computeSectionUpdates;	// IMP=0x00000000003a8542
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000003a844e
- (id)initWithCollectionView:(id)arg1 updateItems:(id)arg2 moveItemSourceIndexPaths:(id)arg3 oldModel:(id)arg4 newModel:(id)arg5 oldVisibleBounds:(struct CGRect)arg6 newVisibleBounds:(struct CGRect)arg7;	// IMP=0x00000000003a82bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

