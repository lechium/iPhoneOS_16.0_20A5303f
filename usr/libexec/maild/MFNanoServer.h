//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFMailboxUid, MFNanoAccountHandler, MFNanoServerFullMessageLoader, MFNanoServerMessageFetchService, MFNanoServerMessageSender, MFNanoServerMessageUpdater, NNMKSyncProvider, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface MFNanoServer : NSObject
{
    NSObject<OS_dispatch_queue> *_nanoServerQueue;	// 8 = 0x8
    NNMKSyncProvider *_syncProvider;	// 16 = 0x10
    NSMutableDictionary *_messageContentLoadersKeyedByMessageId;	// 24 = 0x18
    MFNanoServerFullMessageLoader *_fullMessageLoader;	// 32 = 0x20
    MFNanoServerMessageUpdater *_messageUpdater;	// 40 = 0x28
    MFNanoServerMessageSender *_messageSender;	// 48 = 0x30
    MFMailboxUid *_mailboxListeningForNotificationsTo;	// 56 = 0x38
    MFNanoAccountHandler *_accountHandler;	// 64 = 0x40
    MFNanoServerMessageFetchService *_messageFetchService;	// 72 = 0x48
    NSMutableSet *_mailboxesWaitingForFetch;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000000a4249
- (void)_fetchForMailboxes:(id)arg1 growFetchWindow:(_Bool)arg2;	// IMP=0x00100000000a4028
- (id)_filteredMessagesArrayFromLibraryMessages:(id)arg1 syncedMailboxes:(id)arg2;	// IMP=0x00100000000a3e5a
- (id)_filteredMessagesArrayFromLibraryMessages:(id)arg1 syncedMailbox:(id)arg2;	// IMP=0x00100000000a3d53
- (id)_libraryMessagesReceivedBefore:(id)arg1 count:(unsigned long long)arg2 inConversationWithId:(id)arg3 protectedDataAvailable:(_Bool *)arg4 limitDateReceived:(id)arg5 syncedMailboxes:(id)arg6;	// IMP=0x00100000000a3b80
- (id)_libraryMessagesReceivedBefore:(id)arg1 count:(unsigned long long)arg2 inConversationWithId:(id)arg3 protectedDataAvailable:(_Bool *)arg4 limitDateReceived:(id)arg5 syncedMailbox:(id)arg6;	// IMP=0x00100000000a3a1d
- (id)_messageIdsForNanoMessages:(id)arg1;	// IMP=0x00100000000a39cc
- (void)_loadFullMesssagesForMessageIds:(id)arg1 messagesAlreadyLoadedByMessageId:(id)arg2 libraryMessagesRetrievalBlock:(CDUnknownBlockType)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a31aa
- (void)_cancelLoadingContentForLibraryMessageId:(id)arg1;	// IMP=0x00100000000a3108
- (void)_loadContentForLibraryMessageId:(id)arg1 highPriority:(_Bool)arg2;	// IMP=0x00100000000a2fcd
- (void)messageContentLoaderDidFailLoadingContent:(id)arg1;	// IMP=0x00100000000a2e04
- (void)messageContentLoaderDidFinishLoading:(id)arg1;	// IMP=0x00100000000a2c78
- (void)messageContentLoader:(id)arg1 receivedAttachmentData:(id)arg2 contentId:(id)arg3 loadedProtected:(_Bool)arg4;	// IMP=0x00100000000a2a3e
- (void)messageContentLoader:(id)arg1 receivedImageAttachment:(id)arg2 contentId:(id)arg3 loadedProtected:(_Bool)arg4;	// IMP=0x00100000000a2804
- (void)messageContentLoader:(id)arg1 receivedMailContent:(id)arg2 forMessage:(id)arg3 loadedProtected:(_Bool)arg4;	// IMP=0x00100000000a25e4
- (void)_handleSingleAutoFetchDone:(id)arg1;	// IMP=0x00100000000a2292
- (void)_updateVIPList:(id)arg1 requestContext:(id)arg2;	// IMP=0x00100000000a1ef9
- (void)_vipChangedNotification:(id)arg1;	// IMP=0x00100000000a1d7c
- (void)_messagesCompacted:(id)arg1;	// IMP=0x00100000000a1a2c
- (void)_conversationFlagsChanged:(id)arg1;	// IMP=0x00100000000a11af
- (void)_messageFlagsChanged:(id)arg1;	// IMP=0x00100000000a0b61
- (void)_messagesAdded:(id)arg1;	// IMP=0x00100000000a0899
- (void)syncProvider:(id)arg1 didFailAuthenticatingAccount:(id)arg2;	// IMP=0x00100000000a07ca
- (void)syncProvider:(id)arg1 didRequestReauthenticationForAccount:(id)arg2;	// IMP=0x00100000000a073f
- (void)syncProvider:(id)arg1 didUpdateWatchAccounts:(id)arg2;	// IMP=0x00100000000a06d1
- (void)syncProvider:(id)arg1 didRequestSendComposedMessage:(id)arg2;	// IMP=0x00100000000a04cb
- (void)syncProvider:(id)arg1 didRequestVIPSenderListWithRequestContext:(id)arg2;	// IMP=0x00100000000a0378
- (void)syncProvider:(id)arg1 didRequestFetchForMailboxes:(id)arg2;	// IMP=0x00100000000a01cf
- (void)syncProviderDidRequestFetch:(id)arg1 forConversationId:(id)arg2 mailbox:(id)arg3;	// IMP=0x00100000000a00e3
- (void)syncProviderDidRequestStopDownloadingAllMessageElements:(id)arg1;	// IMP=0x001000000009fef4
- (void)syncProvider:(id)arg1 didRequestStopDownloadingMessageElementsForMessageWithId:(id)arg2;	// IMP=0x001000000009fd84
- (void)syncProvider:(id)arg1 didRequestContentForMessageWithId:(id)arg2 highPriority:(_Bool)arg3;	// IMP=0x001000000009fca7
- (void)syncProvider:(id)arg1 didRequestResendAccountWithId:(id)arg2;	// IMP=0x001000000009fb89
- (void)syncProvider:(id)arg1 didRequestMessagesToSendAsFetchResponseForMessageIds:(id)arg2;	// IMP=0x001000000009f7f6
- (void)syncProvider:(id)arg1 didRequestResendMessagesWithIds:(id)arg2;	// IMP=0x001000000009f463
- (void)syncProvider:(id)arg1 didRequestMessagesWithContext:(id)arg2;	// IMP=0x001000000009ef8f
- (void)syncProvider:(id)arg1 didRequestFirstMessages:(unsigned long long)arg2 mailboxes:(id)arg3;	// IMP=0x001000000009eb73
- (void)syncProvider:(id)arg1 didMoveMessageIds:(id)arg2 toMailbox:(id)arg3;	// IMP=0x001000000009ea6f
- (void)syncProvider:(id)arg1 didUpdateMessagesStatus:(id)arg2;	// IMP=0x001000000009e9a0
- (void)syncProvider:(id)arg1 didUpdateMailboxSelection:(id)arg2;	// IMP=0x001000000009e8d1
- (void)syncProviderDidRequestAccounts:(id)arg1;	// IMP=0x001000000009e806
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000009e6ee
- (id)nanoBulletinFlagsForMessageFromAccount:(id)arg1 mailboxURLString:(id)arg2 status:(unsigned long long)arg3 dateReceived:(id)arg4;	// IMP=0x001000000009e597
- (id)watchedMailboxes;	// IMP=0x001000000009e581
- (void)_addObservers;	// IMP=0x001000000009e49b
- (id)init;	// IMP=0x001000000009e17f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

