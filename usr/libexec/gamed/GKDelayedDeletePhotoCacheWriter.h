//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKDatabaseConnection, NSString;

@interface GKDelayedDeletePhotoCacheWriter : NSObject
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
}

+ (id)writerWithDatabaseConnection:(id)arg1;	// IMP=0x00200000000b0961
- (void).cxx_destruct;	// IMP=0x00200000000b19a5
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b0f82
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;	// IMP=0x00100000000b0bee
- (void)bindParametersForGetOldPhotosStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;	// IMP=0x00100000000b0bd6
- (id)getOldPhotosSQL;	// IMP=0x00100000000b0bad
- (void)bindParametersForDeleteOldPhotosStatement:(struct sqlite3_stmt *)arg1 requestsRowID:(long long)arg2;	// IMP=0x00100000000b0b96
- (id)deleteOldPhotosSQL;	// IMP=0x00100000000b0b6d
- (void)bindParametersForPhotoStatement:(struct sqlite3_stmt *)arg1 requestsRowID:(long long)arg2;	// IMP=0x00100000000b0b56
- (id)photosInsertSQL;	// IMP=0x00100000000b0b2d
- (void)bindParametersForRequestsStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;	// IMP=0x00100000000b0a90
- (id)requestsInsertSQL;	// IMP=0x00100000000b0a60
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (id)initWithDatabaseConnection:(id)arg1;	// IMP=0x00100000000b09be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
