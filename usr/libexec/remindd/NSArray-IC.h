//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (IC)
- (id)ic_map:(CDUnknownBlockType)arg1;	// IMP=0x002000000006dd10
- (id)ic_arrayByAddingObjectsFromNonNilArray:(id)arg1;	// IMP=0x001000000006dcc2
- (id)ic_arrayByAddingNonNilObject:(id)arg1;	// IMP=0x001000000006dc74
- (id)ic_objectAfter:(id)arg1 wrap:(_Bool)arg2;	// IMP=0x001000000006dbdd
- (id)ic_objectBefore:(id)arg1 wrap:(_Bool)arg2;	// IMP=0x001000000006db49
- (id)ic_objectAfter:(id)arg1;	// IMP=0x001000000006db35
- (id)ic_objectBefore:(id)arg1;	// IMP=0x001000000006db21
- (_Bool)ic_indexIsValid:(long long)arg1;	// IMP=0x001000000006daf6
- (unsigned long long)ic_indexOfSortedObject:(id)arg1 insertionIndex:(out unsigned long long *)arg2 usingComparator:(CDUnknownBlockType)arg3;	// IMP=0x001000000006d9f9
- (id)ic_arrayByGroupingIntoArraysWithMaxCount:(unsigned long long)arg1;	// IMP=0x001000000006d7cd
- (id)ic_objectsOfClass:(Class)arg1;	// IMP=0x001000000006d758
- (id)ic_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000006d6f9
- (_Bool)ic_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000006d6c6
- (id)ic_objectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000006d674
@property(readonly, nonatomic) id ic_randomObject;
- (id)undateify;	// IMP=0x00100000003ff020
@end
