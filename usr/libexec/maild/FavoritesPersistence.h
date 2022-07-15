//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDMailboxPersistence, EFFuture, EMDaemonInterface, EMMailbox, FavoriteItem, FavoritesCollection, NSArray, NSMutableArray, NSRecursiveLock, NSString, NSUbiquitousKeyValueStore;
@protocol EDConversationSubscriptionProvider, EFCancelable, EFScheduler, MFAccountsProvider;

@interface FavoritesPersistence : NSObject
{
    _Bool _includeFavoriteMailboxesDuringFetch;	// 8 = 0x8
    _Bool _showingSingleAccount;	// 9 = 0x9
    _Bool _loadingMailboxes;	// 10 = 0xa
    _Bool _showingOutbox;	// 11 = 0xb
    NSMutableArray *_mailboxCollections;	// 16 = 0x10
    FavoriteItem *_lastSelectedItem;	// 24 = 0x18
    NSString *_storagePath;	// 32 = 0x20
    EDMailboxPersistence *_mailboxPersistence;	// 40 = 0x28
    id <EDConversationSubscriptionProvider> _conversationSubscriptionProvider;	// 48 = 0x30
    NSMutableArray *_visibleMailboxCollections;	// 56 = 0x38
    EMDaemonInterface *_daemonInterface;	// 64 = 0x40
    EMMailbox *_outbox;	// 72 = 0x48
    id <EFCancelable> _outboxCountObserver;	// 80 = 0x50
    EFFuture *_outboxFuture;	// 88 = 0x58
    id <EFScheduler> _writeCollectionScheduler;	// 96 = 0x60
    id <MFAccountsProvider> _accountsProvider;	// 104 = 0x68
    NSUbiquitousKeyValueStore *_kvStore;	// 112 = 0x70
    NSRecursiveLock *_lock;	// 120 = 0x78
    id <EFCancelable> _favoritesPersistenceUpdateToken;	// 128 = 0x80
    id <EFScheduler> _mergeExternalChangesScheduler;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00200000000297bd
@property(readonly, nonatomic) id <EDConversationSubscriptionProvider> conversationSubscriptionProvider; // @synthesize conversationSubscriptionProvider=_conversationSubscriptionProvider;
@property(retain, nonatomic) EDMailboxPersistence *mailboxPersistence; // @synthesize mailboxPersistence=_mailboxPersistence;
@property(readonly, nonatomic) NSString *storagePath; // @synthesize storagePath=_storagePath;
@property(retain, nonatomic) FavoriteItem *lastSelectedItem; // @synthesize lastSelectedItem=_lastSelectedItem;
@property(readonly, nonatomic) _Bool includeFavoriteMailboxesDuringFetch;
@property(readonly, nonatomic) NSArray *mailboxCollections;
- (id)coreAnalyticsPeriodicEvent;	// IMP=0x0010000000029331
- (id)orderedFavoriteMailboxesForAccount:(id)arg1 includeUnifiedMailboxes:(_Bool)arg2;	// IMP=0x0010000000028e7f
- (id)favoriteMailboxesForAccount:(id)arg1;	// IMP=0x0010000000028e19
@property(readonly, nonatomic) _Bool hasFavoriteMailboxes;
- (id)dictionaryRepresentation;	// IMP=0x0010000000028acc
- (void)messageRepository:(id)arg1 query:(id)arg2 countDidChange:(long long)arg3;	// IMP=0x0010000000028969
- (void)userNotificationCenterSettingsDidChange:(id)arg1;	// IMP=0x0010000000028381
- (void)setVisibility:(_Bool)arg1 forSourceType:(unsigned long long)arg2;	// IMP=0x00100000000280b7
- (void)_mailboxNameChanged:(id)arg1;	// IMP=0x0010000000027c4b
- (void)_mailboxListingChanged:(id)arg1;	// IMP=0x00100000000277dd
- (void)_focusDidChange:(id)arg1;	// IMP=0x001000000002644e
- (void)_accountsDidChange:(id)arg1;	// IMP=0x001000000002615e
- (void)_loadMailboxesAfterMailboxListingChanged;	// IMP=0x001000000002614f
- (_Bool)shouldHideNotesForAccount:(id)arg1;	// IMP=0x00100000000254b2
- (_Bool)shouldHideInbox;	// IMP=0x00100000000254a9
- (void)_keyValueStoreChangedExternally:(id)arg1;	// IMP=0x001000000002538a
- (void)updateCollections:(id)arg1 forOrderChange:(unsigned long long)arg2 withReason:(id)arg3 source:(id)arg4;	// IMP=0x0010000000023d10
- (void)updateCollections:(id)arg1 forItemChangeAddedItems:(id)arg2 removedItems:(id)arg3 withReason:(id)arg4 source:(id)arg5;	// IMP=0x0010000000023734
- (void)updateCollections:(id)arg1 changeType:(unsigned long long)arg2 withReason:(id)arg3 source:(id)arg4;	// IMP=0x001000000002359f
- (id)indexPathForItem:(id)arg1;	// IMP=0x001000000002308c
- (id)mailboxesForAutoFetch;	// IMP=0x00100000000225a5
@property(readonly, nonatomic) FavoritesCollection *mailboxesCollection;
@property(readonly, nonatomic) _Bool showingOutbox;
- (void)dealloc;	// IMP=0x00100000000202e6
- (id)initWithConversationSubscriptionProvider:(id)arg1 accountsProvider:(id)arg2 mailboxPersistence:(id)arg3 daemonInterface:(id)arg4 analyticsCollector:(id)arg5;	// IMP=0x001000000001eeef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
