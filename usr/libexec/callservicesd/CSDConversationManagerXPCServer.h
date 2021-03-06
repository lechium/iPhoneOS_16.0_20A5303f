//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDClientManager, CSDConversationManager, MISSING_TYPE, NSString;
@protocol OS_dispatch_queue, TUFeatureFlags;

@interface CSDConversationManagerXPCServer : NSObject
{
    int _clientsShouldConnectToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CSDConversationManager *_conversationManager;	// 24 = 0x18
    CSDClientManager *_clientManager;	// 32 = 0x20
    id <TUFeatureFlags> _featureFlags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000017084f
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(nonatomic) int clientsShouldConnectToken; // @synthesize clientsShouldConnectToken=_clientsShouldConnectToken;
@property(readonly, nonatomic) CSDClientManager *clientManager; // @synthesize clientManager=_clientManager;
@property(readonly, nonatomic) CSDConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)conversationManager:(id)arg1 screenSharingAvailableChanged:(_Bool)arg2;	// IMP=0x0010000000170747
- (void)conversationManager:(id)arg1 sharePlayAvailableChanged:(_Bool)arg2;	// IMP=0x0010000000170679
- (void)conversationManager:(id)arg1 remoteScreenShareEndedWithReason:(id)arg2;	// IMP=0x0010000000170574
- (void)conversationManager:(id)arg1 remoteScreenShareAttributesChanged:(id)arg2 isLocallySharing:(_Bool)arg3;	// IMP=0x0010000000170464
- (void)conversationManager:(id)arg1 conversation:(id)arg2 didChangeSceneAssociationForActivitySession:(id)arg3;	// IMP=0x0010000000170366
- (void)conversationManager:(id)arg1 conversation:(id)arg2 didChangeStateForActivitySession:(id)arg3;	// IMP=0x0010000000170249
- (void)conversationManager:(id)arg1 trackedPendingMember:(id)arg2 forConversationLink:(id)arg3;	// IMP=0x0010000000170115
- (void)conversationManager:(id)arg1 activityAuthorizationChangedForBundleIdentifier:(id)arg2;	// IMP=0x001000000016ffb9
- (void)conversationManager:(id)arg1 conversation:(id)arg2 appLaunchState:(unsigned long long)arg3 forActivitySession:(id)arg4;	// IMP=0x001000000016fe9d
- (void)conversationManager:(id)arg1 conversation:(id)arg2 remoteParticipantWithIdentifier:(unsigned long long)arg3 updatedVideoEnabled:(_Bool)arg4;	// IMP=0x001000000016fd76
- (void)conversationManager:(id)arg1 conversation:(id)arg2 remoteParticipantWithIdentifier:(unsigned long long)arg3 updatedAudioEnabled:(_Bool)arg4;	// IMP=0x001000000016fc4f
- (void)conversationManager:(id)arg1 conversation:(id)arg2 receivedActivitySessionEvent:(id)arg3;	// IMP=0x001000000016fb1b
- (void)conversationManager:(id)arg1 conversation:(id)arg2 participant:(id)arg3 addedNotice:(id)arg4;	// IMP=0x001000000016f9b8
- (void)conversationManager:(id)arg1 conversation:(id)arg2 mediaPrioritiesDidChangeForParticipant:(id)arg3;	// IMP=0x001000000016f872
- (void)notifyClientsOfConversationsByGroupUUIDUpdate;	// IMP=0x001000000016f6ba
- (void)conversationManager:(id)arg1 removedConversationWithUUID:(id)arg2;	// IMP=0x001000000016f6a8
- (void)conversationManager:(id)arg1 conversationChanged:(id)arg2;	// IMP=0x001000000016f696
- (void)conversationManager:(id)arg1 activatedConversationLinksChanged:(id)arg2;	// IMP=0x001000000016f56b
- (void)conversationManager:(id)arg1 updateIncomingPendingConversationsByGroupUUID:(id)arg2;	// IMP=0x001000000016f440
- (void)conversationManager:(id)arg1 conversationUpdateMessagesGroupPhoto:(id)arg2;	// IMP=0x001000000016f315
- (void)conversationManager:(id)arg1 conversation:(id)arg2 buzzedMember:(id)arg3;	// IMP=0x001000000016f1b6
- (void)conversationManager:(id)arg1 conversation:(id)arg2 addedMembersLocally:(id)arg3;	// IMP=0x001000000016f057
- (oneway void)setScreenEnabled:(_Bool)arg1 withScreenShareAttributes:(id)arg2 forConversationWithUUID:(id)arg3;	// IMP=0x001000000016ef9b
- (oneway void)updateMessagesGroupPhotoOnConversationWithUUID:(id)arg1;	// IMP=0x001000000016ef03
- (oneway void)updateMessagesGroupName:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x001000000016ee4a
- (oneway void)getMessagesGroupDetailsForConversationUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000016e976
- (oneway void)setSupportsMessagesGroupProviding:(_Bool)arg1;	// IMP=0x001000000016e8fe
- (oneway void)registerMessagesGroupUUIDForConversationUUID:(id)arg1;	// IMP=0x001000000016e88c
- (oneway void)setLocalParticipantAudioVideoMode:(unsigned long long)arg1 forConversationUUID:(id)arg2;	// IMP=0x001000000016e814
- (void)unregisterClient:(id)arg1;	// IMP=0x001000000016e712
- (void)registerClient:(id)arg1;	// IMP=0x001000000016e610
- (oneway void)setGridDisplayMode:(unsigned long long)arg1 forConversationWithUUID:(id)arg2;	// IMP=0x001000000016e570
- (oneway void)updateConversationWithUUID:(id)arg1 participantPresentationContexts:(id)arg2;	// IMP=0x001000000016e4b7
- (oneway void)setIgnoreLetMeInRequests:(_Bool)arg1 forConversationUUID:(id)arg2;	// IMP=0x001000000016e419
- (oneway void)rejectPendingMember:(id)arg1 forConversationUUID:(id)arg2;	// IMP=0x001000000016e360
- (oneway void)approvePendingMember:(id)arg1 forConversationUUID:(id)arg2;	// IMP=0x001000000016e2a7
- (oneway void)linkSyncStateIncludeLinks:(_Bool)arg1 WithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016e209
- (oneway void)scheduleConversationLinkCheckInInitial:(_Bool)arg1;	// IMP=0x001000000016e186
- (oneway void)setLinkName:(id)arg1 forConversationLink:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000016e0ae
- (oneway void)activateLink:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000016dff5
- (oneway void)getInactiveLinkWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000016df5d
- (oneway void)checkLinkValidity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000016dea4
- (oneway void)renewLink:(id)arg1 expirationDate:(id)arg2 reason:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000016ddff
- (oneway void)invalidateLink:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000016dd46
- (oneway void)fetchUpcomingNoticeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000016dcae
- (oneway void)getScreenSharingAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000016dc0e
- (oneway void)getSharePlayAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000016db6e
- (oneway void)refreshActiveConversations;	// IMP=0x001000000016dafa
- (oneway void)removeConversationNoticeWithUUID:(id)arg1;	// IMP=0x001000000016da62
- (oneway void)activateConversationNoticeWithActionURL:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x001000000016d9a9
- (oneway void)addInvitedMemberHandles:(id)arg1 toConversationLink:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000016d8d1
- (oneway void)generateLinkWithInvitedMemberHandles:(id)arg1 linkLifetimeScope:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000016d813
- (oneway void)generateLinkForConversationUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000016d75a
- (oneway void)getActiveLinksWithCreatedOnly:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000016d6bc
- (oneway void)getLatestRemoteScreenShareAttributesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000016d624
- (oneway void)setVideoEnabled:(_Bool)arg1 forRemoteParticipantWithIdentifier:(unsigned long long)arg2 conversationUUID:(id)arg3;	// IMP=0x001000000016d57b
- (oneway void)setAudioEnabled:(_Bool)arg1 forRemoteParticipantWithIdentifier:(unsigned long long)arg2 conversationUUID:(id)arg3;	// IMP=0x001000000016d4d2
- (oneway void)setDownlinkMuted:(_Bool)arg1 forRemoteParticipantsInConversationWithUUID:(id)arg2;	// IMP=0x001000000016d434
- (oneway void)kickMember:(id)arg1 conversationUUID:(id)arg2;	// IMP=0x001000000016d37b
- (oneway void)buzzMember:(id)arg1 conversationUUID:(id)arg2;	// IMP=0x001000000016d2c2
- (MISSING_TYPE *)leaveConversationWithUUID: /* Error: Ran out of types for this method. */;	// IMP=0x001000000016d22a
- (oneway void)joinConversationWithRequest:(id)arg1;	// IMP=0x001000000016d192
- (oneway void)launchApplicationForActivitySessionUUID:(id)arg1 forceBackground:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000016d0d6
- (oneway void)launchApplicationForActivitySessionUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000016d01d
- (oneway void)setAutoSharePlayEnabled:(_Bool)arg1;	// IMP=0x001000000016cf9a
- (oneway void)setActivityAuthorization:(_Bool)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x001000000016cefc
- (oneway void)presentDismissalAlertForActivitySessionWithUUID:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x001000000016ce43
- (oneway void)setUsingAirplay:(_Bool)arg1 onActivitySession:(id)arg2 onConversationWithUUID:(id)arg3;	// IMP=0x001000000016ccc3
- (oneway void)endActivitySession:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x001000000016cc0a
- (oneway void)leaveActivitySession:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x001000000016cb51
- (oneway void)createActivitySession:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x001000000016c8db
- (oneway void)addRemoteMembers:(id)arg1 otherInvitedHandles:(id)arg2 toConversationWithUUID:(id)arg3;	// IMP=0x001000000016c803
- (oneway void)activatedConversationLinks:(CDUnknownBlockType)arg1;	// IMP=0x001000000016c752
- (oneway void)activityAuthorizedBundleIdentifierState:(CDUnknownBlockType)arg1;	// IMP=0x001000000016c6a1
- (oneway void)pseudonymsByCallUUID:(CDUnknownBlockType)arg1;	// IMP=0x001000000016c5f0
- (oneway void)incomingPendingConversationsByGroupUUID:(CDUnknownBlockType)arg1;	// IMP=0x001000000016c53f
- (oneway void)conversationsByGroupUUID:(CDUnknownBlockType)arg1;	// IMP=0x001000000016c418
- (id)_filter:(id)arg1 withClient:(id)arg2;	// IMP=0x001000000016c402
- (_Bool)_shouldSend:(id)arg1;	// IMP=0x001000000016c3fa
- (void)notifyClientsToConnectIfNecessary;	// IMP=0x001000000016c32a
- (void)invalidate;	// IMP=0x001000000016c278
- (void)dealloc;	// IMP=0x001000000016c23f
- (id)initWithConversationManager:(id)arg1 featureFlags:(id)arg2;	// IMP=0x001000000016bc1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

