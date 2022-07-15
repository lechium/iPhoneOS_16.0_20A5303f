//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface APSMessageStore : NSObject
{
    _Bool _databaseOpen;	// 8 = 0x8
    _Bool _pendingDatabaseClose;	// 9 = 0x9
}

+ (id)sharedInstance;	// IMP=0x0040000000089ff5
- (id)_onQueueSubscribedChannelsForRecords:(struct __CFArray *)arg1;	// IMP=0x002000000008d631
- (id)_onQueueSubscribedChannelsForRecord:(struct _APSChannelRecordStruct *)arg1;	// IMP=0x001000000008d594
- (id)allRegisteredChannels;	// IMP=0x001000000008d3e7
- (id)allRegisteredChannelsForEnvironment:(id)arg1 tokenName:(id)arg2;	// IMP=0x001000000008d1a9
- (id)allRegisteredChannelsForTopic:(id)arg1 environment:(id)arg2 tokenName:(id)arg3;	// IMP=0x001000000008ce0c
- (id)lookupChannelWithChannelID:(id)arg1 andPushTopic:(id)arg2 environment:(id)arg3 tokenName:(id)arg4;	// IMP=0x001000000008ca00
- (void)updateChannel:(id)arg1;	// IMP=0x001000000008c8fe
- (void)deleteChannelID:(id)arg1 forTopic:(id)arg2 environment:(id)arg3 tokenName:(id)arg4;	// IMP=0x001000000008c708
- (void)storeChannel:(id)arg1;	// IMP=0x001000000008c49f
- (void)markAllOutgoingMessagesAsUnsent;	// IMP=0x001000000008c47c
- (void)markMessageWithGUID:(id)arg1 asSent:(_Bool)arg2;	// IMP=0x001000000008c2d2
- (void)deleteOutgoingMessageWithGUID:(id)arg1;	// IMP=0x001000000008c1ac
- (id)storeOutgoingMessage:(id)arg1 environment:(id)arg2;	// IMP=0x001000000008bdb8
- (id)incomingHighPriorityMessagesForEnvironment:(id)arg1 pushTokens:(id)arg2;	// IMP=0x001000000008bd99
- (id)incomingMessagesForTopic:(id)arg1 priority:(long long)arg2 environment:(id)arg3 pushTokens:(id)arg4;	// IMP=0x001000000008b943
- (id)_onQueueIncomingMessagesFromRecords:(struct __CFArray *)arg1;	// IMP=0x001000000008b439
- (id)pendingLowPriorityIncomingMessageTopicsForEnvironment:(id)arg1 pushTokens:(id)arg2;	// IMP=0x001000000008b11c
- (void)deleteStaleIncomingLowPriorityMessagesForEnvironment:(id)arg1;	// IMP=0x001000000008b014
- (void)deleteLowPriorityIncomingMessagesForTopic:(id)arg1 environment:(id)arg2 pushTokens:(id)arg3;	// IMP=0x001000000008af08
- (void)_onQueueDeleteLowPriorityIncomingMessagesForTopic:(id)arg1 environment:(id)arg2 pushTokens:(id)arg3;	// IMP=0x001000000008accc
- (void)deleteIncomingMessageWithGUID:(id)arg1;	// IMP=0x001000000008ac32
- (void)storeIncomingMessage:(id)arg1 environment:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000008a78e
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;	// IMP=0x001000000008a674
- (void)performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;	// IMP=0x001000000008a55b
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000008a44a
- (void)openDatabase;	// IMP=0x001000000008a3b4
- (void)closeDatabase;	// IMP=0x001000000008a32f
- (void)_setDatabaseCloseTimer;	// IMP=0x001000000008a2e5
- (void)_clearDatabaseCloseTimer;	// IMP=0x001000000008a2aa
- (void)__closeDatabase;	// IMP=0x001000000008a197
- (id)init;	// IMP=0x001000000008a04a

@end
