//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriPlaybackControlIntents/NSObject-Protocol.h>

@class SetShuffleStateIntent;

@protocol SetShuffleStateIntentHandling <NSObject>
- (void)resolveDevicesForSetShuffleState:(SetShuffleStateIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)handleSetShuffleState:(SetShuffleStateIntent *)arg1 completion:(void (^)(SetShuffleStateIntentResponse *))arg2;

@optional
- (void)confirmSetShuffleState:(SetShuffleStateIntent *)arg1 completion:(void (^)(SetShuffleStateIntentResponse *))arg2;
@end
