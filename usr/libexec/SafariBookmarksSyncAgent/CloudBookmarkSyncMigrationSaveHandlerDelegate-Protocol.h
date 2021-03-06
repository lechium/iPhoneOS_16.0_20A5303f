//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CKReference, CloudBookmark, CloudBookmarkSyncMigrationSaveHandler, NSString, WBSCRDTGeneration;

@protocol CloudBookmarkSyncMigrationSaveHandlerDelegate <NSObject>

@optional
- (_Bool)cloudBookmarkSyncMigrationSaveHandler:(CloudBookmarkSyncMigrationSaveHandler *)arg1 shouldApplyReference:(CKReference *)arg2 withGeneration:(WBSCRDTGeneration *)arg3 toAttribute:(NSString *)arg4 inRecordWithName:(NSString *)arg5;
- (_Bool)cloudBookmarkSyncMigrationSaveHandler:(CloudBookmarkSyncMigrationSaveHandler *)arg1 shouldSaveBookmark:(CloudBookmark *)arg2;
- (void)cloudBookmarkSyncMigrationSaveHandler:(CloudBookmarkSyncMigrationSaveHandler *)arg1 didDeleteBookmarkWithRecordName:(NSString *)arg2;
- (void)cloudBookmarkSyncMigrationSaveHandler:(CloudBookmarkSyncMigrationSaveHandler *)arg1 didMoveBookmark:(CloudBookmark *)arg2;
@end

