//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSPersistentStoreCoordinator, NSRecursiveLock, NSSQLCore, NSString, PFUbiquityLocation, PFUbiquityRecordsImporterSchedulingContext, PFUbiquitySwitchboardCacheWrapper;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _PFUbiquityRecordsImporter : NSObject
{
    NSOperationQueue *_importQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_privateQueue;	// 16 = 0x10
    _Bool _isMonitoring;	// 24 = 0x18
    NSString *_localPeerID;	// 32 = 0x20
    PFUbiquityLocation *_ubiquityRootLocation;	// 40 = 0x28
    NSString *_storeName;	// 48 = 0x30
    NSString *_modelVersionHash;	// 56 = 0x38
    NSPersistentStoreCoordinator *_privatePSC;	// 64 = 0x40
    NSSQLCore *_privateStore;	// 72 = 0x48
    PFUbiquityRecordsImporterSchedulingContext *_schedulingContext;	// 80 = 0x50
    PFUbiquitySwitchboardCacheWrapper *_sideLoadCacheWrapper;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_logRestartTimer;	// 96 = 0x60
    NSRecursiveLock *_schedulingLock;	// 104 = 0x68
    _Bool _importOnlyActiveStores;	// 112 = 0x70
    _Bool _throttleNotifications;	// 113 = 0x71
    unsigned long long _numPendingNotifications;	// 120 = 0x78
    _Bool _allowBaselineRoll;	// 128 = 0x80
    unsigned long long _pendingImportOperationsCount;	// 136 = 0x88
}

+ (void)initialize;	// IMP=0x0010000000252d8b
- (void)recoveryOperation:(id)arg1 encounteredAnError:(id)arg2 duringRecoveryOfBaseline:(id)arg3;	// IMP=0x0000000000258c95
- (void)rollResponseOperation:(id)arg1 encounteredAnError:(id)arg2 whileTryingToAdoptBaseline:(id)arg3;	// IMP=0x0000000000258c12
- (void)rollResponseOperation:(id)arg1 successfullyAdoptedBaseline:(id)arg2;	// IMP=0x0000000000258a80
- (void)recoveryOperation:(id)arg1 didReplaceLocalStoreFileWithBaseline:(id)arg2;	// IMP=0x0000000000258911
- (void)baselineRollOperationWasUnableToLockPersistentStore:(id)arg1;	// IMP=0x00000000002588f0
- (void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)arg1;	// IMP=0x00000000002588e3
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;	// IMP=0x0000000000257cbb
- (void)scheduleRecoveryTimer;	// IMP=0x0000000000257ac7
- (void)operationWasInterruptedDuringImport:(id)arg1;	// IMP=0x0000000000257979
- (void)operation:(id)arg1 failedWithError:(id)arg2;	// IMP=0x000000000025755d
- (void)operationDidFinish:(id)arg1;	// IMP=0x00000000002571bb
- (id)createSortedOperationsArrayWithMetadata:(id)arg1 isFirstImport:(_Bool)arg2;	// IMP=0x0000000000253144
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000252f65
- (id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;	// IMP=0x0000000000252de8
- (id)init;	// IMP=0x0000000000252de0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
