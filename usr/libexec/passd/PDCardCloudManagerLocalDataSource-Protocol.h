//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, PDCardCloudManager, PDCardCloudManagerSaveRequest, PKCatalog, PKPass;

@protocol PDCardCloudManagerLocalDataSource <NSObject>
- (void)resetMigration;
- (void)clearChangeHistory;
- (NSArray *)allLocalPassUniqueIDs;
- (void)executeSaveRequest:(PDCardCloudManagerSaveRequest *)arg1;
- (PKCatalog *)existingCatalog;
- (void)allLocalPasses:(void (^)(NSArray *))arg1;
- (NSArray *)localPassesMatchingPasses:(NSArray *)arg1;
- (PKPass *)existingPassWithUniqueID:(NSString *)arg1;
- (NSArray *)fetchChangeEvents;
- (void)willDownloadAllDataFromContainer:(NSString *)arg1;
- (void)containerManager:(PDCardCloudManager *)arg1 willSyncWithContainer:(NSString *)arg2 scanForMissedChanges:(_Bool)arg3;
@end
