//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AnnounceDaemon/ANAPlaybackSessionServiceInterface-Protocol.h>

@class NSString;

@protocol ANRemotePlaybackSessionServiceInterface <ANAPlaybackSessionServiceInterface>
- (void)setPlaybackStoppedForAnnouncement:(NSString *)arg1;
- (void)setPlaybackStartedForAnnouncement:(NSString *)arg1;
- (void)endSessionWithReply:(void (^)(_Bool))arg1;
- (void)startSessionForGroupID:(NSString *)arg1 reply:(void (^)(_Bool))arg2;
@end
