//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableIndexSet, _UIDataSourceSnapshotter;

__attribute__((visibility("hidden")))
@interface _UIDataSourceBatchUpdateMapHelper : NSObject
{
    _UIDataSourceSnapshotter *_initialSnapshot;	// 8 = 0x8
    _UIDataSourceSnapshotter *_finalSnapshot;	// 16 = 0x10
    NSArray *_updateItems;	// 24 = 0x18
    NSMutableIndexSet *_movedItems;	// 32 = 0x20
    NSMutableIndexSet *_movedSections;	// 40 = 0x28
    NSMutableIndexSet *_deletedSections;	// 48 = 0x30
    NSMutableIndexSet *_insertedSections;	// 56 = 0x38
    long long *_oldSectionMap;	// 64 = 0x40
    long long *_newSectionMap;	// 72 = 0x48
    long long *_oldGlobalItemMap;	// 80 = 0x50
    long long *_newGlobalItemMap;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000003e2d56
- (void)_computeItemUpdates;	// IMP=0x00000000003e21c7
- (void)_computeSectionUpdates;	// IMP=0x00000000003e1996
- (id)description;	// IMP=0x00000000003e1916
- (void)dealloc;	// IMP=0x00000000003e188d
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;	// IMP=0x00000000003e183e
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;	// IMP=0x00000000003e17ef
- (id)finalIndexPathForInitialIndexPath:(id)arg1;	// IMP=0x00000000003e1723
- (id)initialIndexPathForFinalIndexPath:(id)arg1;	// IMP=0x00000000003e1657
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1;	// IMP=0x00000000003e161b
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1;	// IMP=0x00000000003e15df
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 updates:(id)arg3;	// IMP=0x00000000003e1504

@end
