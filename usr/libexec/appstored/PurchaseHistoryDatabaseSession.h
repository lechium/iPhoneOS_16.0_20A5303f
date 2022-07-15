//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;

@interface PurchaseHistoryDatabaseSession : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
}

+ (id)_serverRevisionPropertyForAccountID:(id)arg1;	// IMP=0x0020000000255b29
+ (id)_propertyForSortOptionName:(id)arg1;	// IMP=0x0010000000255a0c
+ (id)_predicateFromQuery:(id)arg1;	// IMP=0x00100000002552b6
+ (id)_lastUpdatedPropertyForAccountID:(id)arg1;	// IMP=0x001000000025528a
- (void).cxx_destruct;	// IMP=0x0020000000255d81
@property(readonly) SQLiteConnection *connection; // @synthesize connection=_connection;
- (id)_valueForDatabaseProperty:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000255b55
- (id)revisionForAccountID:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000002551da
- (id)lastUpdatedTimestampForAccountID:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000255120
- (id)executeQuery:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000253f13
- (id)countQuery:(id)arg1;	// IMP=0x0010000000253e72
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000253e07

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
