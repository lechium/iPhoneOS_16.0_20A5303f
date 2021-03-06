//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDDatabaseManager, PDPaymentTransactionProcessor, PDPaymentWebServiceCoordinator;
@protocol OS_dispatch_queue;

@interface PDMapsMerchantProcessingService : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDPaymentTransactionProcessor *_transactionProcessor;	// 16 = 0x10
    PDPaymentWebServiceCoordinator *_webServiceCoordinator;	// 24 = 0x18
    double _waitTime;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000039743f
- (void)_processItem:(id)arg1;	// IMP=0x00100000003972c2
- (id)_processingItemsForScheduledActivity;	// IMP=0x0010000000396ef8
- (void);	// IMP=0x0010000000396cd7
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x0010000000396a6d
- (void)start;	// IMP=0x0010000000396717
- (id)initWithDatabaseManager:(id)arg1 transactionProcessor:(id)arg2 webServiceCoordinator:(id)arg3;	// IMP=0x001000000039661f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

