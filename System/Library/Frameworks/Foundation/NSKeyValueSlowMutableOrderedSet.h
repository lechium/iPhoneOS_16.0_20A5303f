//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableOrderedSet
{
    NSKeyValueGetter *_valueGetter;	// 24 = 0x18
    NSKeyValueSetter *_valueSetter;	// 32 = 0x20
    _Bool _treatNilValuesLikeEmptyOrderedSets;	// 40 = 0x28
    char _padding[3];	// 41 = 0x29
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x0000000000648bc3
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000648b4d
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x0000000000648ae6
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000648a7f
- (id)_createNonNilMutableOrderedSetValueWithSelector:(SEL)arg1;	// IMP=0x0000000000648a1f
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x0000000000648800
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000006486e8
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000006486b4
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000648680
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x000000000064864c
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000648604
- (id)_nonNilOrderedSetValueWithSelector:(SEL)arg1;	// IMP=0x00000000006485b0
- (unsigned long long)count;	// IMP=0x0000000000648543
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;	// IMP=0x00000000006484ae
- (void)_proxyNonGCFinalize;	// IMP=0x0000000000648421
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x000000000064834f

@end
