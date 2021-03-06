//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, SSSQLiteDatabase;

@interface PurchaseActionsDatabase : NSObject
{
    SSSQLiteDatabase *_database;	// 8 = 0x8
}

+ (_Bool)_setupDatabase:(id)arg1;	// IMP=0x00400000000cb7ec
- (void).cxx_destruct;	// IMP=0x00200000000cb90c
- (void)incrementPingbackRetryCountForApp:(id)arg1;	// IMP=0x00100000000cb460
- (void)removeNonPendingInstallAttributionPingbacksBeforeDate:(id)arg1;	// IMP=0x00100000000cb0ca
- (void)removeInstallAttributionPingbackForApp:(id)arg1;	// IMP=0x00100000000cad3e
- (void)getPendingInstallAttributionPingbacksWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ca7e1
- (void)setPingbackPendingForApp:(id)arg1;	// IMP=0x00100000000ca455
- (void)getInstallAttributionPingbackForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c9d23
- (void)insertInstallAttributionPingback:(id)arg1;	// IMP=0x00100000000c976b
- (void)removeInstallAttributionParamsBeforeDate:(id)arg1;	// IMP=0x00100000000c93d5
- (void)removeInstallAttributionParamsForApp:(id)arg1;	// IMP=0x00100000000c9049
- (void)getInstallAttributionParamsForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c88ba
- (void)insertInstallAttributionParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c832b
- (void)resetTimestampsForApp:(id)arg1;	// IMP=0x00100000000c7916
- (void)insertPurchaseIntent:(id)arg1;	// IMP=0x00100000000c7472
- (void)getPurchaseIntentsForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c6e9b
- (void)deletePurchaseIntentsForApp:(id)arg1;	// IMP=0x00100000000c6c5e
- (void)readUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c6b64
- (void)readAsyncUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c6ab1
- (void)modifyUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c69b3
- (id)initWithDatabaseURL:(id)arg1 readOnly:(_Bool)arg2;	// IMP=0x00100000000c68e0
- (MISSING_TYPE *)init;	// IMP=0x00100000000c684e

@end

