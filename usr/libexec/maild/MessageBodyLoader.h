//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EFCancelationToken, MFActivityMonitor, MFInvocationQueue, MFMailMessage, MFMailMessageLibrary, MISSING_TYPE, MailAccount, NSCountedSet, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MessageBodyLoader : NSObject
{
    NSMutableArray *_clients;	// 8 = 0x8
    NSMutableArray *_newMessages;	// 16 = 0x10
    NSMutableSet *_newMessageSet;	// 24 = 0x18
    NSCountedSet *_newMessageMailboxQuota;	// 32 = 0x20
    NSMutableArray *_userViewingMessages;	// 40 = 0x28
    MFActivityMonitor *_currentMonitor;	// 48 = 0x30
    NSCountedSet *_watchedUids;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 64 = 0x40
    MFInvocationQueue *_workQueue;	// 72 = 0x48
    EFCancelationToken *_cancelationToken;	// 80 = 0x50
    MFMailMessageLibrary *_library;	// 88 = 0x58
    NSObject<OS_dispatch_semaphore> *_waitReply;	// 96 = 0x60
    int _noNetworkFetching;	// 104 = 0x68
    int _isPaused;	// 108 = 0x6c
    NSDate *_resumeTime;	// 112 = 0x70
    unsigned int _isRunning:1;	// 120 = 0x78
    unsigned int _isWaitingForTask:1;	// 120 = 0x78
    unsigned int _shouldProcessQueues:1;	// 120 = 0x78
    unsigned int _holdingPowerAssertion:1;	// 120 = 0x78
    NSMutableDictionary *_bytesPerAccount;	// 128 = 0x80
    MFMailMessage *_currentMessage;	// 136 = 0x88
    MailAccount *_account;	// 144 = 0x90
}

+ (void)accountsDidChange;	// IMP=0x0020000000052377
+ (void)applicationWillResume;	// IMP=0x001000000005220c
+ (void)applicationWillSuspend;	// IMP=0x00100000000520c9
+ (id)copySummaryForMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;	// IMP=0x001000000004c01e
+ (id)attachmentManager;	// IMP=0x001000000004bfb3
+ (void)resume;	// IMP=0x001000000004bf0a
+ (void)pause;	// IMP=0x001000000004be61
+ (id)loaderForAccount:(id)arg1;	// IMP=0x001000000004bd12
+ (void)_setSharedLoaderForTesting:(id)arg1 account:(id)arg2;	// IMP=0x001000000004bc54
+ (void)initialize;	// IMP=0x001000000004bc0d
+ (id)log;	// IMP=0x001000000004bb30
+ (id)signpostLog;	// IMP=0x001000000004ba0a
- (void).cxx_destruct;	// IMP=0x002000000005341a
@property(retain, nonatomic) MailAccount *account; // @synthesize account=_account;
- (void)_releasePowerAssertion;	// IMP=0x0010000000053383
- (void)_retainPowerAssertion;	// IMP=0x001000000005330d
- (void)_clearResumeTime;	// IMP=0x001000000005321c
- (void)_cancelSleepIfNeeded;	// IMP=0x0010000000053172
- (void)systemDidWake;	// IMP=0x0010000000053111
- (void)systemWillSleep;	// IMP=0x001000000005310b
- (void)assertionDidExpire;	// IMP=0x0010000000052dbf
- (void)_logStats:(_Bool)arg1;	// IMP=0x0010000000052a71
- (MISSING_TYPE *)_recordStats: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000525bb
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x0010000000052316
- (void)_applicationDidBecomeActive:(id)arg1;	// IMP=0x00100000000522b5
- (void)applicationWillResume;	// IMP=0x0010000000052172
- (oneway void)disableNetworkFetching;	// IMP=0x0010000000052028
- (oneway void)enableNetworkFetching;	// IMP=0x0010000000051f4e
- (oneway void)resume;	// IMP=0x0010000000051ed7
- (oneway void)pause;	// IMP=0x0010000000051ec5
@property(readonly) _Bool isPaused;
- (void)_start;	// IMP=0x0010000000051cbe
- (_Bool)_isRunning;	// IMP=0x0010000000051cb3
- (void)_setIsRunning:(_Bool)arg1;	// IMP=0x00100000000519a2
- (void)_blockingMessage;	// IMP=0x0010000000051987
- (void)_waitUntilNotRunning;	// IMP=0x00100000000518cf
- (oneway void)userStoppedViewingMessages;	// IMP=0x0010000000051869
- (oneway void)userViewingMessages:(id)arg1;	// IMP=0x0010000000051774
- (oneway void)stopAddingNewMessagesForStore:(id)arg1;	// IMP=0x0010000000051608
- (oneway void)beginAddingNewMessagesForStore:(id)arg1;	// IMP=0x001000000005143c
- (_Bool)_nts_isProcessingMessage:(id)arg1;	// IMP=0x00100000000512e4
- (_Bool)isProcessingMessage:(id)arg1;	// IMP=0x00100000000511e6
- (oneway void)addMessages:(id)arg1;	// IMP=0x001000000005113e
- (oneway void)addMessages_nts:(id)arg1;	// IMP=0x0010000000050eb5
- (oneway void)addMessage:(id)arg1;	// IMP=0x0010000000050e4a
- (void)_nts_sortClients;	// IMP=0x0010000000050b93
- (void)_nts_removeClient:(id)arg1;	// IMP=0x0010000000050a20
- (void)_nts_insertClient:(id)arg1;	// IMP=0x001000000005048b
- (oneway void)removeSingleMessageClient:(id)arg1;	// IMP=0x00100000000503bf
- (oneway void)addSingleMessageClient:(id)arg1;	// IMP=0x00100000000502f5
- (void)_messageFlagsChanged:(id)arg1;	// IMP=0x001000000004ff72
- (void)_messagesWillBeCompacted:(id)arg1;	// IMP=0x001000000004fe37
- (void)_removeViewingMessages:(id)arg1;	// IMP=0x001000000004fd8e
- (void)_removeNewMessages:(id)arg1;	// IMP=0x001000000004fce6
- (void)_removeNewMessages_nts:(id)arg1;	// IMP=0x001000000004fad1
- (void)_messagesAdded:(id)arg1;	// IMP=0x001000000004f9ab
- (void)_getNextClientOrMessageFinished:(id)arg1;	// IMP=0x001000000004f255
- (void)_messageLoadFinished:(id)arg1;	// IMP=0x001000000004edf8
- (void)_clientLoadFinished:(id)arg1;	// IMP=0x001000000004ea05
- (void)_finishedCullingMessageList:(id)arg1;	// IMP=0x001000000004e861
- (void)_getNextClientOrMessage;	// IMP=0x001000000004e6d8
- (void)_tryProcessingQueues;	// IMP=0x001000000004e2d5
- (id)copyDiagnosticInformation;	// IMP=0x001000000004e0b6
- (_Bool)networkFetchingAllowed;	// IMP=0x001000000004df98
- (void)dealloc;	// IMP=0x001000000004dec0
- (oneway void)startup;	// IMP=0x001000000004dd89
- (id)initWithLibrary:(id)arg1;	// IMP=0x001000000004d99c
- (id)init;	// IMP=0x001000000004d927
@property(readonly) unsigned long long signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

