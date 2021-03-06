//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/NSCopying-Protocol.h>
#import <Photos/NSObject-Protocol.h>

@class NSArray, NSKnownKeysDictionary, NSManagedObjectID, NSString, PHPhotoLibrary;

@protocol PHBatchFetchedPropertySet <NSCopying, NSObject>
+ (NSArray *)propertiesToSortBy;
+ (_Bool)useObjectFetchingContext;
+ (_Bool)useNoIndexSelf;
+ (long long)cacheSize;
+ (long long)batchSize;
+ (NSString *)fetchType;
+ (NSArray *)propertiesToFetch;
+ (NSString *)entityName;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
- (id)initWithObjectID:(NSManagedObjectID *)arg1 knownKeysDictionary:(NSKnownKeysDictionary *)arg2 photoLibrary:(PHPhotoLibrary *)arg3;
@end

