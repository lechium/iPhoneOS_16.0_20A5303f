//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACXDevice, ACXLocalAppStoreInstallQueueElement, IXGizmoInstallingAppInstallCoordinator, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface ACXLocalAppStoreInstallQueue : NSObject
{
    _Bool _cancelCurrentOperation;	// 8 = 0x8
    _Bool _isSuspended;	// 9 = 0x9
    ACXDevice *_device;	// 16 = 0x10
    NSMutableArray *_installQueue;	// 24 = 0x18
    ACXLocalAppStoreInstallQueueElement *_currentInstall;	// 32 = 0x20
    IXGizmoInstallingAppInstallCoordinator *_currentInstallCoordinator;	// 40 = 0x28
    CDUnknownBlockType _currentCompletionBlock;	// 48 = 0x30
    NSObject<OS_os_transaction> *_activeTransaction;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_internalQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000208b3
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(nonatomic) _Bool isSuspended; // @synthesize isSuspended=_isSuspended;
@property(nonatomic) _Bool cancelCurrentOperation; // @synthesize cancelCurrentOperation=_cancelCurrentOperation;
@property(retain, nonatomic) NSObject<OS_os_transaction> *activeTransaction; // @synthesize activeTransaction=_activeTransaction;
@property(copy, nonatomic) CDUnknownBlockType currentCompletionBlock; // @synthesize currentCompletionBlock=_currentCompletionBlock;
@property(retain, nonatomic) IXGizmoInstallingAppInstallCoordinator *currentInstallCoordinator; // @synthesize currentInstallCoordinator=_currentInstallCoordinator;
@property(retain, nonatomic) ACXLocalAppStoreInstallQueueElement *currentInstall; // @synthesize currentInstall=_currentInstall;
@property(readonly, nonatomic) NSMutableArray *installQueue; // @synthesize installQueue=_installQueue;
@property(readonly, nonatomic) ACXDevice *device; // @synthesize device=_device;
- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x0010000000020580
- (void)acknowledgeInstallationStartedForWatchApp:(id)arg1;	// IMP=0x001000000002037b
- (_Bool)installIsPendingForWatchApp:(id)arg1;	// IMP=0x0010000000020243
- (_Bool)_onQueue_installIsPendingForWatchApp:(id)arg1;	// IMP=0x001000000002012c
- (id)_onQueue_queueElementForApp:(id)arg1 isCurrentInstall:(_Bool *)arg2;	// IMP=0x001000000001fe59
- (id)_installationSentinelFileURL;	// IMP=0x001000000001fe09
- (void)_removeInstallationSentinel;	// IMP=0x001000000001fd91
- (void)_createInstallationSentinel;	// IMP=0x001000000001fcbf
- (_Bool)_onQueue_removeInstallOperationWithWatchBundleID:(id)arg1 fromQueue:(id)arg2;	// IMP=0x001000000001fc4c
- (_Bool)_onQueue_installQueue:(id)arg1 hasInstallOperationForBundleID:(id)arg2;	// IMP=0x001000000001fc20
- (unsigned long long)_onQueue_indexOfInstallOperationWithWatchBundleID:(id)arg1 inQueue:(id)arg2;	// IMP=0x001000000001fad9
- (void)_onQueue_deQueueNextOperation;	// IMP=0x001000000001ef91
- (void)_onQueue_stopQueue;	// IMP=0x001000000001eed3
- (void)_onQueue_startQueue;	// IMP=0x001000000001ee39
- (unsigned long long)_onQueue_countPending;	// IMP=0x001000000001edf5
- (void)_onQueue_clearCurrentInstallCoordinator;	// IMP=0x001000000001ed70
- (void)cancelAllPendingInstalls;	// IMP=0x001000000001ea80
- (_Bool)reportExternalInstallFailureForWatchAppBundleID:(id)arg1 failureReason:(id)arg2;	// IMP=0x001000000001e910
- (_Bool)_onQueue_reportExternalInstallFailureForWatchAppBundleID:(id)arg1 failureReason:(id)arg2;	// IMP=0x001000000001e480
- (_Bool)cancelInstallForWatchAppBundleID:(id)arg1;	// IMP=0x001000000001e3f7
- (_Bool)_cancelCoordinatorForInstallWithWatchBundleID:(id)arg1 withReason:(id)arg2;	// IMP=0x001000000001e33f
- (_Bool)_cancelCoordinatorForInstallWithWatchBundleID:(id)arg1;	// IMP=0x001000000001e230
- (void)reachabilityChangedForDevice:(id)arg1;	// IMP=0x001000000001dfbc
- (void)installWatchApp:(id)arg1 userInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001da3f
- (void)dealloc;	// IMP=0x001000000001d9d1
- (id)initWithDevice:(id)arg1;	// IMP=0x001000000001d8d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

