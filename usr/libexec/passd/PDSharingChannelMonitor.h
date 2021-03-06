//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDDatabaseManager, PDPushNotificationManager;
@protocol OS_dispatch_queue, PDSharingChannelMonitorDelegate;

@interface PDSharingChannelMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_replyQueue;	// 16 = 0x10
    PDDatabaseManager *_databaseManager;	// 24 = 0x18
    PDPushNotificationManager *_pushNotificationManager;	// 32 = 0x20
    id <PDSharingChannelMonitorDelegate> _delegate;	// 40 = 0x28
    _Bool _isCheckingForOutstandingMessages;	// 48 = 0x30
    _Bool _disabled;	// 49 = 0x31
}

- (void).cxx_destruct;	// IMP=0x00200000003a44aa
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
- (void)_updateEndpointHasOutstandingMessages:(id)arg1 hasOutstandingMessages:(_Bool)arg2 didCheckForNewMessages:(_Bool)arg3;	// IMP=0x00100000003a43e1
- (_Bool)_canEndpointBePolledOrCleanUpEndpoint:(id)arg1;	// IMP=0x00100000003a4269
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x00100000003a4253
- (void)applyPushNotificationToken:(id)arg1;	// IMP=0x00100000003a424d
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;	// IMP=0x00100000003a4121
- (id)pushNotificationTopics;	// IMP=0x00100000003a40d0
- (void)_processOutstandingEndpointsAndMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003a33e0
- (id)_checkEndpointsToBePolledOrDetermineNextPollDate:(id *)arg1;	// IMP=0x00100000003a2fc3
- (void)checkForNewSharingMessagesWithShouldCheckAllEndpoint:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003a2aea
- (void)scheduleNextCheckIfNeeded;	// IMP=0x00100000003a2898
- (void)start;	// IMP=0x00100000003a2882
- (void)dealloc;	// IMP=0x00100000003a283d
- (id)initWithQueue:(id)arg1 databaseManager:(id)arg2 pushNotificationManager:(id)arg3 delegate:(id)arg4;	// IMP=0x00100000003a2714
- (id)init;	// IMP=0x00100000003a2706

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

