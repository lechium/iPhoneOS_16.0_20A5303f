//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/GKSocialGamingExtensionInterface-Protocol.h>

@class GKLocalPlayer, GKTournamentViewRequest;

@protocol GKTournamentExtensionInterface <GKSocialGamingExtensionInterface>
@property(readonly, nonatomic) GKTournamentViewRequest *viewRequest;
- (oneway void)initializeWithLocalPlayer:(GKLocalPlayer *)arg1 hostPID:(int)arg2 reply:(void (^)(void))arg3;
- (oneway void)setupWithViewRequest:(GKTournamentViewRequest *)arg1;
@end

