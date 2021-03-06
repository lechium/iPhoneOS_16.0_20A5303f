//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;

@interface IAPInfoDatabaseSession : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
}

+ (id)_serverRevisionPropertyForAccountID:(id)arg1;	// IMP=0x00200000001a1ed0
+ (id)_lastUpdatedPropertyForAccountID:(id)arg1;	// IMP=0x00100000001a1ea4
- (void).cxx_destruct;	// IMP=0x00200000001a25c6
@property(readonly) SQLiteConnection *connection; // @synthesize connection=_connection;
- (id)_valueForDatabaseProperty:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000001a239a
- (id)_fetchResultsWithPredicate:(id)arg1;	// IMP=0x00100000001a1efc
- (id)revisionForAccountID:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000001a1df4
- (id)lastUpdatedTimestampForAccountID:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000001a1d3a
- (id)getIAPsForActiveAccountWithAppAdamIDs:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x00100000001a1b8a
- (id)getIAPsForActiveAccountWithAdamIDs:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x00100000001a19da
- (id)getIAPsForAccountID:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000001a1958
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000001a18ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

