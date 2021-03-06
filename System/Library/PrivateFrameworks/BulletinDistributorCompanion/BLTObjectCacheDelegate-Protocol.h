//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class BLTObjectCache, NSString;
@protocol NSSecureCoding;

@protocol BLTObjectCacheDelegate <NSObject>
- (void)objectCache:(BLTObjectCache *)arg1 removeObjectForKey:(NSString *)arg2 withBlock:(void (^)(NSError *))arg3;
- (void)objectCache:(BLTObjectCache *)arg1 storeObject:(id <NSSecureCoding>)arg2 withKey:(NSString *)arg3 withBlock:(void (^)(NSError *))arg4;
- (void)objectCache:(BLTObjectCache *)arg1 objectForKey:(NSString *)arg2 withBlock:(void (^)(id <NSSecureCoding>))arg3;
- (void)objectCache:(BLTObjectCache *)arg1 keysWithBlock:(void (^)(NSSet *))arg2;
@end

