//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSDictionary.h"

__attribute__((visibility("hidden")))
@interface __NSSingleEntryDictionaryI : NSDictionary
{
    id _obj;	// 8 = 0x8
    id _key;	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000004694b
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000046948
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000046950
- (void)dealloc;	// IMP=0x00000000000468ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000467bd
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000046735
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000466d9
- (void)__apply:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x000000000004664c
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000465f2
- (id)objectEnumerator;	// IMP=0x00000000000465b1
- (id)keyEnumerator;	// IMP=0x0000000000046570
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000046530
- (_Bool)isEqualToDictionary:(id)arg1;	// IMP=0x00000000000464a0
- (unsigned long long)count;	// IMP=0x000000000004649a

@end

