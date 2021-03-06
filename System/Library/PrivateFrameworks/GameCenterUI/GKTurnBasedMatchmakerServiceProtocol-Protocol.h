//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/GKExtensionProtocol-Protocol.h>

@class GKMatchRequestInternal;

@protocol GKTurnBasedMatchmakerServiceProtocol <GKExtensionProtocol>

@optional
- (void)refreshMatches;
- (void)setShowQuit:(_Bool)arg1;
- (void)setShowPlay:(_Bool)arg1;
- (void)setShowExistingMatches:(_Bool)arg1;
- (void)setMatchRequestInternal:(GKMatchRequestInternal *)arg1;
@end

