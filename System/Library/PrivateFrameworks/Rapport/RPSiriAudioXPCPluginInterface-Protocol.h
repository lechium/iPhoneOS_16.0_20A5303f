//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, RPSiriAudioSession;

@protocol RPSiriAudioXPCPluginInterface
- (void)xpcSiriAudioReceived:(NSDictionary *)arg1;
- (void)xpcSiriAudioSessionActivate:(RPSiriAudioSession *)arg1 completion:(void (^)(NSError *))arg2;
@end

