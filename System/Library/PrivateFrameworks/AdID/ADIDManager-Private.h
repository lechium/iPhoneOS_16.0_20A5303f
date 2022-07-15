//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdCore/ADIDManager.h>

@class NSString;

@interface ADIDManager (Private)
+ (void)initialize;	// IMP=0x001000000000d8eb
- (void)checkForLateReconcile;	// IMP=0x0010000000011956
- (void)setReconcileOperations:(id)arg1;	// IMP=0x001000000001192d
- (id)reconcileOperations;	// IMP=0x001000000001191c
- (_Bool)reconcileInProgress;	// IMP=0x00100000000118e4
- (void)checkOnTask:(id)arg1 activity:(id)arg2;	// IMP=0x00100000000117b2
- (_Bool)runTask:(id)arg1;	// IMP=0x0010000000011406
- (_Bool)scheduleReconciliation:(double)arg1;	// IMP=0x0010000000011103
- (void)cancelPendingReconcile;	// IMP=0x00100000000110b8
- (void)handleAccountChange:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010b6c
- (void)reconcile:(CDUnknownBlockType)arg1;	// IMP=0x00100000000102aa
- (void)updateAccountData:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fafc
- (void)finishedReconciling:(CDUnknownBlockType)arg1 withError:(id)arg2;	// IMP=0x001000000000f2d4
- (void)performOperationAfterReconcile:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f242
- (void)performOperationWhenNotReconciling:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f16c
- (id)saveAndNotifyIfNecessary;	// IMP=0x001000000000f0b1
- (id)save;	// IMP=0x001000000000e835
- (void)incrementMonthlyResetCount;	// IMP=0x001000000000e5e1
- (void)notifyActiveRecordChanged;	// IMP=0x001000000000e53c
- (void)deleteRecords:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e339
- (void)prepareForPushNotification;	// IMP=0x001000000000e2f7
- (void)setDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000dc59
- (id)init;	// IMP=0x001000000000d91b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
