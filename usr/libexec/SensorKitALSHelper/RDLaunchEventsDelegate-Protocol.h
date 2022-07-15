//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSObject, RDXPCActivity;
@protocol OS_xpc_object;

@protocol RDLaunchEventsDelegate <NSObject>

@optional
- (void)launchEventXPCEventReceived:(NSObject<OS_xpc_object> *)arg1;
- (void)launchEventCheckInActivity:(RDXPCActivity *)arg1;
- (void)launchEventRunActivity:(RDXPCActivity *)arg1;
@end
