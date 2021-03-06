//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableSet.h>

@class NSManagedObject, NSString;

__attribute__((visibility("hidden")))
@interface _NSNotifyingWrapperMutableSet : NSMutableSet
{
    NSManagedObject *_container;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSMutableSet *_mutableSet;	// 24 = 0x18
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x006000000005d5df
- (Class)classForCoder;	// IMP=0x000000000005d5ce
- (void)unionSet:(id)arg1;	// IMP=0x000000000005d549
- (void)setSet:(id)arg1;	// IMP=0x000000000005d4c4
- (void)removeObject:(id)arg1;	// IMP=0x000000000005d408
- (void)removeAllObjects;	// IMP=0x000000000005d37f
- (void)minusSet:(id)arg1;	// IMP=0x000000000005d2fa
- (void)intersectSet:(id)arg1;	// IMP=0x000000000005d275
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x000000000005d1c3
- (void)addObject:(id)arg1;	// IMP=0x000000000005d107
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000005d0ea
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000005d0cd
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000005d0b0
- (id)objectEnumerator;	// IMP=0x000000000005d093
- (id)member:(id)arg1;	// IMP=0x000000000005d076
- (unsigned long long)count;	// IMP=0x000000000005d059
- (id)valueForKeyPath:(id)arg1;	// IMP=0x000000000005d03c
- (id)valueForKey:(id)arg1;	// IMP=0x000000000005d01f
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005d002
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;	// IMP=0x000000000005cfe5
- (void)makeObjectsPerformSelector:(SEL)arg1;	// IMP=0x000000000005cfc8
- (_Bool)isSubsetOfSet:(id)arg1;	// IMP=0x000000000005cfab
- (void)getObjects:(id *)arg1;	// IMP=0x000000000005cf8e
- (_Bool)isEqualToSet:(id)arg1;	// IMP=0x000000000005cf71
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000005cf54
- (id)anyObject;	// IMP=0x000000000005cf37
- (id)allObjects;	// IMP=0x000000000005cf1a
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x000000000005cefd
- (id)description;	// IMP=0x000000000005cee0
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005cea8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005ce70
- (id)initWithContainer:(id)arg1 key:(id)arg2 mutableSet:(id)arg3;	// IMP=0x000000000005cdd7
- (void)dealloc;	// IMP=0x000000000005cd5a

@end

