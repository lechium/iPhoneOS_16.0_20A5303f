//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDMessageChangeManager, EDMessagePersistence, EDPersistenceHookRegistry, EDUserNotificationFilter, EDUserNotificationMailboxCutoffController, EFLocked, EMCoreAnalyticsCollector, MFDelayedNotificationPresenter, MFMessageResultsGenerator, MFNanoServer, MFUserNotificationCenterObserver, MFUserNotificationCenterUpgrader, MFUserNotificationSoundController, NSDictionary, NSLock, NSMutableArray, NSString;
@protocol EDConversationSubscriptionProvider, EDPrioritySenderProvider, EDReadLaterProvider, EFCancelable, EMVIPReader, MFFavoritesReader, MFSystemUserNotificationCenter, OS_dispatch_queue;

@interface MFUserNotificationCenterController : NSObject
{
    struct os_unfair_lock_s _settingsLock;	// 8 = 0x8
    id <EFCancelable> _stateCancelable;	// 16 = 0x10
    _Bool _hasVIPs;	// 24 = 0x18
    _Bool _hasThreads;	// 25 = 0x19
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    id <EDConversationSubscriptionProvider> _conversationSubscriptionProvider;	// 40 = 0x28
    id <EDReadLaterProvider> _readLaterProvider;	// 48 = 0x30
    id <EMVIPReader> _vipReader;	// 56 = 0x38
    id <MFFavoritesReader> _favoritesReader;	// 64 = 0x40
    EDUserNotificationFilter *_notificationFilter;	// 72 = 0x48
    EDUserNotificationMailboxCutoffController *_mailboxCutoffController;	// 80 = 0x50
    MFMessageResultsGenerator *_resultsGenerator;	// 88 = 0x58
    NSLock *_summaryClientsLock;	// 96 = 0x60
    id <MFSystemUserNotificationCenter> _systemUserNotificationCenter;	// 104 = 0x68
    MFUserNotificationCenterUpgrader *_upgrader;	// 112 = 0x70
    MFUserNotificationCenterObserver *_observer;	// 120 = 0x78
    MFUserNotificationSoundController *_soundController;	// 128 = 0x80
    EFLocked *_summaryClientsByReference;	// 136 = 0x88
    MFDelayedNotificationPresenter *_delayedNotificationPresenter;	// 144 = 0x90
    NSMutableArray *_settingsObservers;	// 152 = 0x98
    NSDictionary *_currentSettingsByTopic;	// 160 = 0xa0
    EDPersistenceHookRegistry *_hookRegistry;	// 168 = 0xa8
    EFLocked *_notificationsNeedingSummaries;	// 176 = 0xb0
    MFNanoServer *_nanoServer;	// 184 = 0xb8
    EDMessageChangeManager *_messageChangeManager;	// 192 = 0xc0
    EDMessagePersistence *_messagePersistence;	// 200 = 0xc8
    EMCoreAnalyticsCollector *_analyticsCollector;	// 208 = 0xd0
    id <EDPrioritySenderProvider> _prioritySenderProvider;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00200000000bfffa
@property(readonly, nonatomic) id <EDPrioritySenderProvider> prioritySenderProvider; // @synthesize prioritySenderProvider=_prioritySenderProvider;
@property(readonly, nonatomic) EMCoreAnalyticsCollector *analyticsCollector; // @synthesize analyticsCollector=_analyticsCollector;
@property(retain, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property(retain, nonatomic) EDMessageChangeManager *messageChangeManager; // @synthesize messageChangeManager=_messageChangeManager;
@property(retain, nonatomic) MFNanoServer *nanoServer; // @synthesize nanoServer=_nanoServer;
@property(retain, nonatomic) EFLocked *notificationsNeedingSummaries; // @synthesize notificationsNeedingSummaries=_notificationsNeedingSummaries;
@property(retain, nonatomic) EDPersistenceHookRegistry *hookRegistry; // @synthesize hookRegistry=_hookRegistry;
@property(readonly, nonatomic) NSDictionary *currentSettingsByTopic; // @synthesize currentSettingsByTopic=_currentSettingsByTopic;
@property(readonly, nonatomic) NSMutableArray *settingsObservers; // @synthesize settingsObservers=_settingsObservers;
@property(retain, nonatomic) MFDelayedNotificationPresenter *delayedNotificationPresenter; // @synthesize delayedNotificationPresenter=_delayedNotificationPresenter;
@property(nonatomic) _Bool hasThreads; // @synthesize hasThreads=_hasThreads;
@property(nonatomic) _Bool hasVIPs; // @synthesize hasVIPs=_hasVIPs;
@property(retain, nonatomic) EFLocked *summaryClientsByReference; // @synthesize summaryClientsByReference=_summaryClientsByReference;
@property(retain, nonatomic) MFUserNotificationSoundController *soundController; // @synthesize soundController=_soundController;
@property(retain, nonatomic) MFUserNotificationCenterObserver *observer; // @synthesize observer=_observer;
@property(retain, nonatomic) MFUserNotificationCenterUpgrader *upgrader; // @synthesize upgrader=_upgrader;
@property(retain, nonatomic) id <MFSystemUserNotificationCenter> systemUserNotificationCenter; // @synthesize systemUserNotificationCenter=_systemUserNotificationCenter;
@property(retain, nonatomic) NSLock *summaryClientsLock; // @synthesize summaryClientsLock=_summaryClientsLock;
@property(retain, nonatomic) MFMessageResultsGenerator *resultsGenerator; // @synthesize resultsGenerator=_resultsGenerator;
@property(readonly, nonatomic) EDUserNotificationMailboxCutoffController *mailboxCutoffController; // @synthesize mailboxCutoffController=_mailboxCutoffController;
@property(readonly, nonatomic) EDUserNotificationFilter *notificationFilter; // @synthesize notificationFilter=_notificationFilter;
@property(retain, nonatomic) id <MFFavoritesReader> favoritesReader; // @synthesize favoritesReader=_favoritesReader;
@property(readonly, nonatomic) id <EMVIPReader> vipReader; // @synthesize vipReader=_vipReader;
@property(readonly, nonatomic) id <EDReadLaterProvider> readLaterProvider; // @synthesize readLaterProvider=_readLaterProvider;
@property(readonly, nonatomic) id <EDConversationSubscriptionProvider> conversationSubscriptionProvider; // @synthesize conversationSubscriptionProvider=_conversationSubscriptionProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)_protectedDataAvailable;	// IMP=0x00100000000bfd4c
- (void)_performCleanupForNotifications:(id)arg1;	// IMP=0x00100000000bf48b
- (id)_libraryMessagesForMessageReferences:(id)arg1;	// IMP=0x00100000000bf32b
- (void)_performCleanup;	// IMP=0x00100000000bf1d8
- (void)_performCleanupOnStartup;	// IMP=0x00100000000bf132
- (void)updateMessage:(id)arg1 withSummary:(id)arg2;	// IMP=0x00100000000bef7b
- (void)cancelSummaryRequestsForAccountWithID:(id)arg1;	// IMP=0x00100000000bebee
- (void)cancelSummaryRequestForMessageWithExternalReference:(id)arg1;	// IMP=0x00100000000bea5c
- (void)_nts_invalidateClient:(id)arg1 summaryClientsByReference:(id)arg2;	// IMP=0x00100000000be8b1
- (void)requestSummaryForMessage:(id)arg1;	// IMP=0x00100000000be81f
- (void)requestSummaryWithClient:(id)arg1;	// IMP=0x00100000000be5ff
- (void)_networkConfigurationChanged:(id)arg1;	// IMP=0x00100000000be494
- (void)persistenceDidChangeReadLaterDate:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;	// IMP=0x00100000000be257
- (void)persistenceDidChangeGlobalMessageID:(long long)arg1 orConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4;	// IMP=0x00100000000bde40
- (void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2 generationWindow:(id)arg3;	// IMP=0x00100000000bdbdc
- (void)persistenceDidInitializeConversationSubscriptionProvider;	// IMP=0x00100000000bdb66
- (unsigned long long)_swipeActionForNotificationActionIdentifier:(id)arg1;	// IMP=0x00100000000bdaa0
- (void)processNotificationActionForMessageReferenceURL:(id)arg1 actionIdentifier:(id)arg2;	// IMP=0x00100000000bd490
- (_Bool)_settingIsEnabled:(long long)arg1;	// IMP=0x00100000000bd483
- (id)_coreAnaltyicsForSettings:(id)arg1;	// IMP=0x00100000000bbfc6
- (id)coreAnalyticsPeriodicEvent;	// IMP=0x00100000000bbf34
- (id)_currentSettingsStringForSettingsByTopic:(id)arg1;	// IMP=0x00100000000bbd4d
- (void)_logCurrentSettings;	// IMP=0x00100000000bbc41
- (void)_loadCurrentSettingsAndNotifyObservers;	// IMP=0x00100000000bb9f9
- (void)removeSettingsObserver:(id)arg1;	// IMP=0x00100000000bb956
- (void)addSettingsObserver:(id)arg1;	// IMP=0x00100000000bb868
- (void)userNotificationCenter:(id)arg1 didChangeSettings:(id)arg2;	// IMP=0x00100000000bb855
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bb50a
- (void)controller:(id)arg1 messageTimerFired:(id)arg2;	// IMP=0x00100000000bb309
- (void)activeAccountsDidChangeForNotificationCenterObserver:(id)arg1;	// IMP=0x00100000000bb236
- (void)notificationCenterObserver:(id)arg1 didStopListeningForChangesForAccountIDs:(id)arg2;	// IMP=0x00100000000bb00b
- (void)conversationFlagsDidChangeForNotificationCenterObserver:(id)arg1;	// IMP=0x00100000000baf95
- (void)notificationCenterObserver:(id)arg1 removedVIPs:(id)arg2;	// IMP=0x00100000000ba624
- (void)vipsChangedForNotificationCenterObserver:(id)arg1;	// IMP=0x00100000000ba5ae
- (void)notificationCenterObserver:(id)arg1 messagesDeleted:(id)arg2;	// IMP=0x00100000000ba39f
- (void)notificationCenterObserver:(id)arg1 messagesUpdated:(id)arg2 flags:(id)arg3;	// IMP=0x00000000000b9f14
- (void)notificationCenterObserver:(id)arg1 messageAdded:(id)arg2;	// IMP=0x00100000000b9efc
@property(readonly, nonatomic) _Bool hasFavoriteMailboxes;
- (id)defaultTopicRequests;	// IMP=0x00100000000b9bcf
- (id)topicRequestsForAccounts:(id)arg1;	// IMP=0x00100000000b9a6d
- (void)nts_resetUserNotificationCenterTopics;	// IMP=0x00100000000b9694
- (void)resetUserNotificationCenterTopics;	// IMP=0x00100000000b960d
- (void)delayedNotificationsPresenter:(id)arg1 handleUserNotificationRequest:(id)arg2 notificationMessage:(id)arg3 context:(id)arg4;	// IMP=0x00100000000b8f23
- (id)notificationRequestForNotificationMessage:(id)arg1 destinations:(unsigned long long)arg2 isAdd:(_Bool)arg3 soundController:(id)arg4;	// IMP=0x00100000000b8380
- (id)notificationRequestForNotificationMessage:(id)arg1 destinations:(unsigned long long)arg2;	// IMP=0x00100000000b8358
- (id)delayedNotificationsPresenter:(id)arg1 userNotificationRequestForNotificationMessage:(id)arg2 context:(id)arg3;	// IMP=0x00100000000b814b
- (void)removeNotificationsWithIdentifiers:(id)arg1;	// IMP=0x00100000000b7f31
- (void)handleDidFetchMessages:(id)arg1;	// IMP=0x00100000000b7b58
- (void)handleDidFetchSummaryForMessages:(id)arg1;	// IMP=0x00100000000b7824
- (void)nts_removeNotificationsForRemovedAccounts;	// IMP=0x00100000000b73fc
- (void)notifyMessagesAdded:(id)arg1 context:(id)arg2;	// IMP=0x00100000000b6d3d
- (void)notifyMessagesAdded:(id)arg1 isSummaryDownload:(_Bool)arg2;	// IMP=0x00100000000b6ca8
- (void)_applicationForegroundStateChanged:(id)arg1;	// IMP=0x00100000000b6bb1
- (double)_postingDelayIsMailForeground:(_Bool)arg1;	// IMP=0x00100000000b6b95
- (void)startUpgradeIfNecessary;	// IMP=0x00100000000b695c
- (void)_registerStateCapture;	// IMP=0x00100000000b6791
- (void)stop;	// IMP=0x00100000000b66bb
- (void)start;	// IMP=0x00100000000b64a8
- (void)dealloc;	// IMP=0x00100000000b6434
- (id)initWithSystemUserNotificationCenter:(id)arg1 conversationSubscriptionProvider:(id)arg2 readLaterProvider:(id)arg3 favoritesReader:(id)arg4 vipReader:(id)arg5 blockedSenderReader:(id)arg6 messageChangeManager:(id)arg7 messagePersistence:(id)arg8 hookRegistry:(id)arg9 analyticsCollector:(id)arg10;	// IMP=0x00100000000b5e3e
- (id)initWithSystemUserNotificationCenter:(id)arg1 persistence:(id)arg2 favoritesReader:(id)arg3 analyticsCollector:(id)arg4;	// IMP=0x00100000000b5b95

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

