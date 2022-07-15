//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSNumber, NSString;

@interface NSArray (EmailFoundationAdditions)
@property(readonly, nonatomic) NSNumber *ef_standardDeviation;
@property(readonly, copy, nonatomic) NSArray *ef_mode;
@property(readonly, nonatomic) NSNumber *ef_median;
@property(readonly, nonatomic) NSNumber *ef_mean;
@property(readonly, nonatomic) NSNumber *ef_max;
@property(readonly, nonatomic) NSNumber *ef_min;
@property(readonly, nonatomic) NSNumber *ef_sum;
@property(readonly, nonatomic) _Bool ef_isEmpty;
@property(readonly, nonatomic) NSArray *ef_reverse;
@property(readonly, nonatomic) NSArray *ef_permutations;
- (id)ef_subarraysOfSize:(unsigned long long)arg1;	// IMP=0x0020000000017df0
- (id)ef_groupByObject:(CDUnknownBlockType)arg1 keyOptions:(unsigned long long)arg2 valueOptions:(unsigned long long)arg3;	// IMP=0x0020000000017b2f
- (id)ef_groupByObject:(CDUnknownBlockType)arg1;	// IMP=0x0020000000017b08
- (id)ef_groupBy:(CDUnknownBlockType)arg1;	// IMP=0x002000000001784e
- (id)ef_partition:(CDUnknownBlockType)arg1;	// IMP=0x00200000000175e6
- (id)ef_reduce:(CDUnknownBlockType)arg1;	// IMP=0x00200000000173fe
- (id)ef_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x00200000000171ea
- (id)ef_compactMapSelector:(SEL)arg1;	// IMP=0x0020000000017167
- (id)ef_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x0020000000016f72
- (id)ef_mapSelector:(SEL)arg1;	// IMP=0x0020000000016eef
- (id)ef_map:(CDUnknownBlockType)arg1;	// IMP=0x0020000000016c97
- (id)ef_uniquifyWithComparator:(CDUnknownBlockType)arg1;	// IMP=0x002000000001695b
@property(readonly, nonatomic) NSArray *ef_flatten;
- (unsigned long long)ef_countObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00200000000165d3
- (id)ef_lastObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00200000000163d7
- (id)ef_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x002000000001625b
- (id)ef_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00200000000161e8
- (id)ef_filter:(CDUnknownBlockType)arg1;	// IMP=0x00200000000160d9
- (_Bool)ef_any:(CDUnknownBlockType)arg1;	// IMP=0x00200000000160a6
- (_Bool)ef_all:(CDUnknownBlockType)arg1;	// IMP=0x0020000000015fd3
- (unsigned long long)ef_indexWhereObjectWouldBeInserted:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x0020000000015f2f
- (id)ef_objectSameAs:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x0020000000015e7e
- (unsigned long long)ef_indexOfObject:(id)arg1 usingSortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;	// IMP=0x0020000000015daf
- (unsigned long long)ef_indexOfObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x0020000000015d0b
- (void)ef_enumerateObjectsInBatchesOfSize:(unsigned long long)arg1 overlapBy:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0020000000015b85
- (void)ef_enumerateObjectsInBatchesOfSize:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0020000000015b6d
- (void)ef_enumerateObjectsInBatchesOfSize:(unsigned long long)arg1 objectArrayBlock:(CDUnknownBlockType)arg2;	// IMP=0x00200000000159f9
- (id)ef_indicesOfStringsWithPrefix:(id)arg1;	// IMP=0x002000000001587e
- (id)ef_arrayByAddingAbsentObjectsFromArray:(id)arg1;	// IMP=0x00200000000156df
- (id)ef_suffix:(unsigned long long)arg1;	// IMP=0x0020000000015670
- (id)ef_prefix:(unsigned long long)arg1;	// IMP=0x002000000001562a
@property(readonly, nonatomic) NSArray *ef_tail;
@property(readonly, nonatomic) NSArray *ef_notEmpty;
- (id)ef_subarrayWithRange:(struct _NSRange)arg1;	// IMP=0x00200000000203e5
- (id)ef_SQLIsolatedExpression;	// IMP=0x0020000000040b80
- (void)ef_renderSQLExpressionInto:(id)arg1;	// IMP=0x0020000000040837
- (void)ef_renderSQLExpressionInto:(id)arg1 conjoiner:(id)arg2;	// IMP=0x00200000000404a9
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;

// Remaining properties
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
