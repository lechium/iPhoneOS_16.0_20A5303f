//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface GKAcceptedInviteManager : NSObject
{
    NSMutableArray *_acceptedMultiplayerInvites;	// 8 = 0x8
    NSMutableArray *_queuedCancelledMultiplayerInviteSessionTokens;	// 16 = 0x10
    NSMutableArray *_acceptedTurnBased;	// 24 = 0x18
    NSMutableArray *_acceptedTournamentInvites;	// 32 = 0x20
}

+ (id)syncQueue;	// IMP=0x00400000000fbd8d
- (void).cxx_destruct;	// IMP=0x00200000000febe6
@property(retain) NSMutableArray *acceptedTournamentInvites; // @synthesize acceptedTournamentInvites=_acceptedTournamentInvites;
@property(retain) NSMutableArray *acceptedTurnBased; // @synthesize acceptedTurnBased=_acceptedTurnBased;
@property(retain) NSMutableArray *queuedCancelledMultiplayerInviteSessionTokens; // @synthesize queuedCancelledMultiplayerInviteSessionTokens=_queuedCancelledMultiplayerInviteSessionTokens;
@property(retain) NSMutableArray *acceptedMultiplayerInvites; // @synthesize acceptedMultiplayerInvites=_acceptedMultiplayerInvites;
- (id)description;	// IMP=0x00100000000fe9f4
- (id)tournamentInviteForGame:(id)arg1;	// IMP=0x00100000000fe795
- (id)turnBasedInviteForGameDescriptor:(id)arg1;	// IMP=0x00100000000fe568
- (id)turnBasedInviteForGame:(id)arg1;	// IMP=0x00100000000fe37a
- (id)multiplayerInviteForGameDescriptor:(id)arg1;	// IMP=0x00100000000fe02a
- (id)multiplayerInviteForGame:(id)arg1;	// IMP=0x00100000000fde3c
- (id)removeAndReturnTurnBasedInviteWithMatchID:(id)arg1;	// IMP=0x00100000000fdbd1
- (_Bool)removeAndReturnQueuedCancelledInviteWithSessionToken:(id)arg1;	// IMP=0x00100000000fd99c
- (id)removeAndReturnInviteWithSessionToken:(id)arg1;	// IMP=0x00100000000fd731
- (void)addTournamentInvite:(id)arg1;	// IMP=0x00100000000fd57e
- (void)addTurnBasedEvent:(id)arg1;	// IMP=0x00100000000fd3cb
- (void)queueCancelledMultiplayerInviteSessionToken:(id)arg1;	// IMP=0x00100000000fd218
- (void)addMultiplayerInvite:(id)arg1;	// IMP=0x00100000000fce2f
- (id)_fetchAndRemoveBulletinFromArray:(id)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fca90
- (id)_fetchObjectFromArray:(id)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fc6e2
- (void)_insertBulletin:(id)arg1 atFrontOfArray:(id)arg2;	// IMP=0x00100000000fc49b
- (void)_addBulletin:(id)arg1 toArray:(id)arg2;	// IMP=0x00100000000fc256
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fbf3f
- (id)init;	// IMP=0x00100000000fbcea

@end
