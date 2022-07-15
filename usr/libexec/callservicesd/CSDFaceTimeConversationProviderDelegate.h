//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSMutableSet;

@interface CSDFaceTimeConversationProviderDelegate
{
    NSMutableSet *_conversationUUIDsWaitingForRemoteJoin;	// 8 = 0x8
    NSMutableSet *_conversationUUIDsUpgradedFromAVLess;	// 16 = 0x10
    NSMutableDictionary *_recentlyDeletedCallUUIDsByConversationUUID;	// 24 = 0x18
    CDUnknownBlockType _allowsScreenSharingBlock;	// 32 = 0x20
}

+ (id)callScreenShareAttributesForAction:(id)arg1;	// IMP=0x0040000000174b62
- (void).cxx_destruct;	// IMP=0x0020000000182099
@property(copy, nonatomic) CDUnknownBlockType allowsScreenSharingBlock; // @synthesize allowsScreenSharingBlock=_allowsScreenSharingBlock;
@property(readonly, nonatomic) NSMutableDictionary *recentlyDeletedCallUUIDsByConversationUUID; // @synthesize recentlyDeletedCallUUIDsByConversationUUID=_recentlyDeletedCallUUIDsByConversationUUID;
- (_Bool)shouldHandleProviderWithIdentifier:(id)arg1;	// IMP=0x0010000000181fc7
- (_Bool)shouldHandleProvider:(id)arg1;	// IMP=0x0010000000181ede
@property(readonly, nonatomic) NSMutableSet *conversationUUIDsUpgradedFromAVLess; // @synthesize conversationUUIDsUpgradedFromAVLess=_conversationUUIDsUpgradedFromAVLess;
- (_Bool)shouldHandleUpdateForProvider:(id)arg1;	// IMP=0x0010000000181e7b
- (void)launchScreenSharingAppIfNecessary;	// IMP=0x0010000000181e75
- (void)provider:(id)arg1 performSetRelayingCallAction:(id)arg2;	// IMP=0x0010000000181b4a
- (void)provider:(id)arg1 performSetVideoPresentationSizeCallAction:(id)arg2;	// IMP=0x00100000001817ea
- (void)provider:(id)arg1 performSetVideoPresentationStateCallAction:(id)arg2;	// IMP=0x00100000001813fb
- (void)provider:(id)arg1 performSetScreenShareAttributesCallAction:(id)arg2;	// IMP=0x0010000000181227
- (void)provider:(id)arg1 performEnableVideoCallAction:(id)arg2;	// IMP=0x0010000000180e8c
- (void)provider:(id)arg1 performSetSharingScreenCallAction:(id)arg2;	// IMP=0x00100000001808a0
- (void)provider:(id)arg1 performSetSendingVideoCallAction:(id)arg2;	// IMP=0x00100000001800bb
- (void)provider:(id)arg1 performSetHeldCallAction:(id)arg2;	// IMP=0x001000000017fde0
- (void)leaveConversation:(id)arg1 withCallUUID:(id)arg2 reason:(long long)arg3;	// IMP=0x001000000017f9e1
- (void)leaveConversationForCallUUID:(id)arg1 endedReason:(long long)arg2;	// IMP=0x001000000017f8f4
- (id)_findPendingConversationWithCallUUID:(id)arg1;	// IMP=0x001000000017f4b0
- (void)proceedToNewPendingConversationForLink:(id)arg1 action:(id)arg2;	// IMP=0x001000000017f048
- (void)provider:(id)arg1 performJoinCallAction:(id)arg2;	// IMP=0x001000000017f033
- (void)performJoinCallAction:(id)arg1;	// IMP=0x001000000017c998
- (void)provider:(id)arg1 performAnswerCallAction:(id)arg2;	// IMP=0x001000000017c548
- (void)conversationManager:(id)arg1 reportedHandedOffConversation:(id)arg2 replacedByIdentifier:(unsigned long long)arg3 lastPresentationState:(int)arg4 localizedHandoffRecipientDeviceCategory:(id)arg5;	// IMP=0x001000000017bfa2
- (void)_failConversation:(id)arg1 failureReason:(long long)arg2 providerEndedReason:(long long)arg3;	// IMP=0x001000000017bd0e
- (void)conversationManager:(id)arg1 reportedInvalidLinkForPendingConversation:(id)arg2;	// IMP=0x001000000017bc89
- (void)conversationManager:(id)arg1 reportedLetMeInRejectedForPendingConversation:(id)arg2;	// IMP=0x001000000017bc04
- (void)conversationManager:(id)arg1 conversation:(id)arg2 changedBytesOfDataUsed:(long long)arg3;	// IMP=0x001000000017b9fc
- (void)conversationManager:(id)arg1 removedConversationWithUUID:(id)arg2;	// IMP=0x001000000017b80b
- (void)conversationManager:(id)arg1 conversation:(id)arg2 addedActiveParticipant:(id)arg3;	// IMP=0x001000000017b2b3
- (void)conversationManager:(id)arg1 conversation:(id)arg2 failedWithContext:(id)arg3;	// IMP=0x001000000017b147
- (void)conversationManager:(id)arg1 conversation:(id)arg2 receivedMessage:(id)arg3 fromHandle:(id)arg4 withUpdate:(id)arg5;	// IMP=0x001000000017b07e
- (_Bool)isManagingCallWithUUID:(id)arg1;	// IMP=0x001000000017aefe
- (void)conversationManager:(id)arg1 conversationScreenSharingChanged:(id)arg2 forParticipant:(id)arg3;	// IMP=0x001000000017ae0c
- (void)conversationManager:(id)arg1 conversationChanged:(id)arg2;	// IMP=0x0010000000179d8e
- (void)conversationManager:(id)arg1 avModeChanged:(unsigned long long)arg2 toAVMode:(unsigned long long)arg3 forConversation:(id)arg4;	// IMP=0x0010000000179427
- (void)conversationManager:(id)arg1 joinConversationWithRequest:(id)arg2;	// IMP=0x00100000001793d8
- (void)declineConversation:(id)arg1 reason:(long long)arg2 destinations:(id)arg3;	// IMP=0x0010000000179027
- (void)declineRemoteMembersForConversation:(id)arg1 reason:(long long)arg2;	// IMP=0x0010000000178dac
- (void)declineRemoteDevicesForConversation:(id)arg1 reason:(long long)arg2;	// IMP=0x0010000000178afb
- (_Bool)isUnansweredOutgoingOneToOneConversation:(id)arg1;	// IMP=0x00100000001788d9
- (void)startOutgoingOneToOneTimeoutIfNecessary:(id)arg1;	// IMP=0x00100000001781cd
- (void)handleRespondedElsewhereMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3;	// IMP=0x00100000001780f3
- (void)handleRespondedElsewhereMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3 withAliases:(id)arg4;	// IMP=0x0010000000177c29
- (void);	// IMP=0x0010000000177369
- (void)handleInvitationMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3;	// IMP=0x0010000000176ce1
- (void)handleRemoveMembersMessage:(id)arg1 forConversation:(id)arg2;	// IMP=0x0010000000176a2a
- (void)handleUpgradeMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3 withUpdate:(id)arg4;	// IMP=0x0010000000175a30
- (void)handleReceivedVideoUpgradeMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3;	// IMP=0x0010000000175514
- (void)handleScreenShareMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3 withUpdate:(id)arg4;	// IMP=0x00100000001754b8
- (void)handleNicknameUpdateMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3 withUpdate:(id)arg4;	// IMP=0x001000000017532d
- (void)handleDeclineMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3 withUpdate:(id)arg4;	// IMP=0x00100000001750c4
- (void)handleMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3 withUpdate:(id)arg4;	// IMP=0x0010000000174e01
- (void)cleanUpConversationIfNecessaryForConversationUUID:(id)arg1 failureContext:(id)arg2;	// IMP=0x0010000000174d47
- (int)TUCallRemoteVideoPresentationStateFromCXVideoPresentationState:(long long)arg1;	// IMP=0x0010000000174b47
- (void)setWaitingForRemoteJoin:(_Bool)arg1 forConversationUUID:(id)arg2;	// IMP=0x0010000000174a96
@property(readonly, nonatomic) NSMutableSet *conversationUUIDsWaitingForRemoteJoin; // @synthesize conversationUUIDsWaitingForRemoteJoin=_conversationUUIDsWaitingForRemoteJoin;
- (_Bool)isWaitingForRemoteJoinForConversationUUID:(id)arg1;	// IMP=0x00100000001749b2
- (void)setCallUUID:(id)arg1 forConversationUUID:(id)arg2;	// IMP=0x001000000017470a
- (id)initWithConversationManager:(id)arg1 queue:(id)arg2 invitationResolver:(id)arg3;	// IMP=0x0010000000174630

@end
