//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class ICLiveLink, ICLiveLinkEvent, ICLiveLinkIdentity, ICSharedListeningItem, ICSharedListeningQueue, NSArray, NSError;

@protocol ICLiveLinkDelegate <NSObject>

@optional
- (void)liveLink:(ICLiveLink *)arg1 didReceiveDirectCurrentItemChanged:(ICSharedListeningItem *)arg2;
- (void)liveLink:(ICLiveLink *)arg1 didReceiveEvent:(ICLiveLinkEvent *)arg2;
- (void)liveLink:(ICLiveLink *)arg1 didReceiveDirectCurrentItemChanged:(ICSharedListeningItem *)arg2 fromParticipant:(ICLiveLinkIdentity *)arg3;
- (void)liveLink:(ICLiveLink *)arg1 didUpdateQueue:(ICSharedListeningQueue *)arg2;
- (void)liveLink:(ICLiveLink *)arg1 didUpdateParticipants:(NSArray *)arg2;
- (void)didStopLiveLink:(ICLiveLink *)arg1;
- (void)liveLinkDidReconnect:(ICLiveLink *)arg1;
- (void)liveLink:(ICLiveLink *)arg1 didEncounterError:(NSError *)arg2 willRetry:(_Bool)arg3;
- (void)didStartLiveLink:(ICLiveLink *)arg1;
@end

