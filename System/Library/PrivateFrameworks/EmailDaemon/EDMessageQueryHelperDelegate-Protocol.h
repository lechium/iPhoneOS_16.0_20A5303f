//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class EDMessageQueryHelper, EMMessage, EMMessageObjectID, NSArray;

@protocol EDMessageQueryHelperDelegate <NSObject>
- (void)queryHelperNeedsRestart:(EDMessageQueryHelper *)arg1;
- (void)queryHelperDidFinishRemoteSearch:(EDMessageQueryHelper *)arg1;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 didDeleteMessages:(NSArray *)arg2;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 didUpdateMessages:(NSArray *)arg2 forKeyPaths:(NSArray *)arg3;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 objectIDDidChangeForMessage:(EMMessage *)arg2 oldObjectID:(EMMessageObjectID *)arg3 oldConversationID:(long long)arg4;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 conversationNotificationLevelDidChangeForConversation:(long long)arg2 conversationID:(long long)arg3;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 conversationIDDidChangeForMessages:(NSArray *)arg2 fromConversationID:(long long)arg3;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 messageFlagsDidChangeForMessages:(NSArray *)arg2;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 didAddMessages:(NSArray *)arg2;
- (void)queryHelperDidFindAllMessages:(EDMessageQueryHelper *)arg1;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 didFindMessages:(NSArray *)arg2;
@end
