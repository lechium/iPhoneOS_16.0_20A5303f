//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableArray
{
    NSKeyValueGetter *_valueGetter;	// 24 = 0x18
    NSKeyValueSetter *_valueSetter;	// 32 = 0x20
    _Bool _treatNilValuesLikeEmptyArrays;	// 40 = 0x28
    char _padding[3];	// 41 = 0x29
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000004e705f
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000004e6fe9
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000004e6f82
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004e6f1b
- (void)removeLastObject;	// IMP=0x00000000004e6eb9
- (id)_createNonNilMutableArrayValueWithSelector:(SEL)arg1;	// IMP=0x00000000004e6e59
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000004e6c3a
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000004e6b22
- (void)addObject:(id)arg1;	// IMP=0x00000000004e6a20
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000004e69ec
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004e69b8
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000004e6970
- (id)_nonNilArrayValueWithSelector:(SEL)arg1;	// IMP=0x00000000004e691c
- (unsigned long long)count;	// IMP=0x00000000004e68af
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;	// IMP=0x00000000004e681a
- (void)_proxyNonGCFinalize;	// IMP=0x00000000004e678d
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000004e66bb

@end

