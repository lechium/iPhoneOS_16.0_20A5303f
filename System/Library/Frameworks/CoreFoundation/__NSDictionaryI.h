//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSDictionary.h"

__attribute__((visibility("hidden")))
@interface __NSDictionaryI : NSDictionary
{
    unsigned int _used:57;	// 8 = 0x8
    unsigned int _copyKeys:1;	// 15 = 0xf
    unsigned int _szidx:6;	// 15 = 0xf
    id _list[0];	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000003450a
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00600000000339fc
- (double)_clumpingInterestingThreshold;	// IMP=0x0000000000034d81
- (double)_clumpingFactor;	// IMP=0x0000000000034b4d
- (id)_cfMutableCopy;	// IMP=0x0000000000034b06
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000034b01
- (id)mutableCopy;	// IMP=0x00000000000349f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000349f4
- (id)copy;	// IMP=0x00000000000349ef
- (void)dealloc;	// IMP=0x000000000003491d
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000000343d6
- (id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00000000000340f4
- (id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033dc4
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033b6d
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000033ad1
- (void)__apply:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x00000000000339ff
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000033935
- (id)keyEnumerator;	// IMP=0x00000000000338ff
- (id)objectForKey:(id)arg1;	// IMP=0x00000000000337cb
- (unsigned long long)count;	// IMP=0x00000000000337b5

@end
