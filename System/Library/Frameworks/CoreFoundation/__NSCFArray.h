//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableArray.h"

__attribute__((visibility("hidden")))
@interface __NSCFArray : NSMutableArray
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0080000000070b03
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000071091
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000070f45
- (unsigned long long)retainCount;	// IMP=0x0000000000070f40
- (_Bool)_isDeallocating;	// IMP=0x0000000000070f30
- (_Bool)_tryRetain;	// IMP=0x0000000000070f1f
- (oneway void)release;	// IMP=0x0000000000070f1a
- (id)retain;	// IMP=0x0000000000070f15
- (id)description;	// IMP=0x0000000000070e5a
- (unsigned long long)hash;	// IMP=0x0000000000070e55
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000070dfd
- (Class)classForCoder;	// IMP=0x0000000000070dd7
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000070d47
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000070cac
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000070bd7
- (void)removeLastObject;	// IMP=0x0000000000070b86
- (void)addObject:(id)arg1;	// IMP=0x0000000000070b5a
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000070b06
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000070a63
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x00000000000709c4
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000070925
- (unsigned long long)count;	// IMP=0x00000000000708ea

@end
