//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SBFIdleTimerBehaviorProviding, SBIdleTimerCoordinating;

@protocol SBIdleTimerProviding <NSObject>
- (id <SBFIdleTimerBehaviorProviding>)coordinatorRequestedIdleTimerBehavior:(id <SBIdleTimerCoordinating>)arg1;
@end
