//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (GC)
- (void)gc_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x006000000001ad0f
- (void)gc_enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x006000000001aa1b
- (id)gc_arrayByTransformingElementsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x006000000001aa04
- (id)gc_arrayByTransformingElementsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x006000000001a80d
- (id)gc_reversedArray;	// IMP=0x006000000001a67d
- (id)gc_requiredObjectAtIndex:(unsigned long long)arg1 ofClass:(Class)arg2 error:(out id *)arg3;	// IMP=0x006000000001a22c
- (id)gc_requiredObjectAtIndex:(unsigned long long)arg1 ofClass:(Class)arg2;	// IMP=0x0060000000019f7e
@end

