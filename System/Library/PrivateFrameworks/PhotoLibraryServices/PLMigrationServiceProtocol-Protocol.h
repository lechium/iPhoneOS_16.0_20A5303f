//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSData, NSProgress, PLMigrationServiceOptions;

@protocol PLMigrationServiceProtocol <NSObject>
- (void)unboost;
- (void)boost;
- (NSProgress *)silentMigrateLibraryForLibraryBookmark:(NSData *)arg1 reply:(void (^)(NSError *))arg2;
- (NSProgress *)migrateLibraryBookmark:(NSData *)arg1 options:(PLMigrationServiceOptions *)arg2 withReply:(void (^)(_Bool, NSURL *, NSSet *, _Bool, NSError *))arg3;
- (void)markAsCompletedForLibraryBookmark:(NSData *)arg1 withReply:(void (^)(_Bool, NSURL *, NSSet *, _Bool, NSError *))arg2;
- (void)getMigrationStateForLibraryBookmark:(NSData *)arg1 withReply:(void (^)(long long, NSError *))arg2;
@end

