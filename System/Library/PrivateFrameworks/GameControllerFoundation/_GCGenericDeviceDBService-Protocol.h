//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameControllerFoundation/NSObject-Protocol.h>

@class GCFuture, GCHIDDeviceSnapshot, GCHIDUserDeviceSnapshot;

@protocol _GCGenericDeviceDBService <NSObject>
- (GCFuture *)preparedModelForDevice:(GCHIDUserDeviceSnapshot *)arg1;
- (GCFuture *)hasModelForDevice:(GCHIDDeviceSnapshot *)arg1;
@end
