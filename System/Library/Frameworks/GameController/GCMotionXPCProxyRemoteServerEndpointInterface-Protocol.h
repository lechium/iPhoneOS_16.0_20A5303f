//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/_GCIPCRemoteEndpointInterface-Protocol.h>

@protocol GCMotionXPCProxyRemoteServerEndpointInterface <_GCIPCRemoteEndpointInterface>
- (void)fetchSensorsActiveWithReply:(void (^)(_Bool))arg1;
- (void)newSensorsActive:(_Bool)arg1;
@end
