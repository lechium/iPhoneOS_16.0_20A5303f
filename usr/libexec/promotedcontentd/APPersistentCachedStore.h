//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface APPersistentCachedStore : NSObject
{
}

+ (id)createWithStorage:(id)arg1;	// IMP=0x00200000000d5751
+ (id)createWithTotalCostLimit:(long long)arg1;	// IMP=0x00100000000d571b
- (void)enableDiagnosticsWithInterval:(double)arg1;	// IMP=0x00200000000d5eab
- (void)touchObjectForKey:(id)arg1 transaction:(id)arg2;	// IMP=0x00100000000d5e2f
- (id)objectForKey:(id)arg1 ignoreKeys:(id)arg2;	// IMP=0x00100000000d5db2
- (void)evictObjectFromMemoryCacheForKey:(id)arg1;	// IMP=0x00100000000d5d36
- (_Bool)isObjectAliveForKey:(id)arg1;	// IMP=0x00100000000d5cb9
- (void)setObject:(id)arg1 forKey:(id)arg2 transaction:(id)arg3;	// IMP=0x00100000000d5c3d
- (void)removeObjectForKey:(id)arg1 transaction:(id)arg2;	// IMP=0x00100000000d5bc1
- (void)executeBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d5b45
- (id)createTransaction;	// IMP=0x00100000000d5a33
- (void)touchObjectForKey:(id)arg1;	// IMP=0x00100000000d59b7
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000d593b
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00100000000d58bf
- (id)objectForKey:(id)arg1;	// IMP=0x00100000000d5842
- (_Bool)hasObjectForKey:(id)arg1;	// IMP=0x00100000000d57c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

