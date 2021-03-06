//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SBIdleTimer;

@protocol SBIdleTimerObserving <NSObject>

@optional
- (void)idleTimerDidWarn:(id <SBIdleTimer>)arg1;
- (void)idleTimerDidResetForUserAttention:(id <SBIdleTimer>)arg1;
- (void)idleTimerDidExpire:(id <SBIdleTimer>)arg1;
- (void)idleTimerDidRefresh:(id <SBIdleTimer>)arg1;
@end

