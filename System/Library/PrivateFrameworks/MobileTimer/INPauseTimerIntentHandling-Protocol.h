//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/NSObject-Protocol.h>

@class INPauseTimerIntent;

@protocol INPauseTimerIntentHandling <NSObject>
- (void)handlePauseTimer:(INPauseTimerIntent *)arg1 completion:(void (^)(INPauseTimerIntentResponse *))arg2;

@optional
- (void)resolvePauseMultipleForPauseTimer:(INPauseTimerIntent *)arg1 withCompletion:(void (^)(INBooleanResolutionResult *))arg2;
- (void)resolveTargetTimerForPauseTimer:(INPauseTimerIntent *)arg1 withCompletion:(void (^)(INTimerResolutionResult *))arg2;
- (void)confirmPauseTimer:(INPauseTimerIntent *)arg1 completion:(void (^)(INPauseTimerIntentResponse *))arg2;
@end

