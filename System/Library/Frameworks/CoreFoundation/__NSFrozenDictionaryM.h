//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSDictionary.h"

__attribute__((visibility("hidden")))
@interface __NSFrozenDictionaryM : NSDictionary
{
    CDStruct_bc24fd1e storage;	// 8 = 0x8
    _Atomic struct __cow_state_t *cow;	// 24 = 0x18
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000019af0f
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019b080
- (id)mutableCopy;	// IMP=0x000000000019afdd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019afd8
- (id)copy;	// IMP=0x000000000019afd3
- (void)dealloc;	// IMP=0x000000000019af14
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000019ae23
- (id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000019ae02
- (id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000019abff
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000019aa69
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000019a9ce
- (void)__apply:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x000000000019a8e6
- (id)objectForKey:(id)arg1;	// IMP=0x000000000019a7fa
- (id)keyEnumerator;	// IMP=0x000000000019a7c4
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000019a6fa
- (unsigned long long)count;	// IMP=0x000000000019a6e9

@end

