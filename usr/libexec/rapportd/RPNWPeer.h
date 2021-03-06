//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Rapport/RPCompanionLinkClient.h>

@interface RPNWPeer : RPCompanionLinkClient
{
}

+ (const char *)statusCodeToString:(int)arg1;	// IMP=0x0040000000063630
+ (const char *)responseCodeToString:(int)arg1;	// IMP=0x001000000006360f
+ (id)createNWEndpointWithID:(id)arg1 agentID:(id)arg2 applicationService:(id)arg3;	// IMP=0x001000000006346d
- (void)sendStatusUpdateForConnection:(id)arg1 connectionID:(id)arg2 status:(int)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00400000000646bc
- (void)sendDataForConnection:(id)arg1 applicationService:(id)arg2 connectionID:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000645f8
- (void)receiveDataForConnection:(CDUnknownBlockType)arg1 statusHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000642ea
- (void)sendWithRequestID:(id)arg1 data:(id)arg2 status:(int)arg3 applicationService:(id)arg4 listenerID:(id)arg5 connectionID:(id)arg6 responseHandler:(CDUnknownBlockType)arg7;	// IMP=0x0010000000063cf7
- (void)receiveWithRequestID:(id)arg1 receiveHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000063653
- (void)handleConnectionData:(_Bool)arg1;	// IMP=0x0010000000062b53
- (int)findListenerAndCreateConnection:(id)arg1 applicationService:(id)arg2 listenerID:(id)arg3 connectionID:(id)arg4;	// IMP=0x0010000000062499
- (void)connectToPeer:(id)arg1 inboundConnection:(_Bool)arg2 applicationService:(id)arg3 listenerID:(id)arg4 connectionID:(id)arg5 connectHandler:(CDUnknownBlockType)arg6 lostHandler:(CDUnknownBlockType)arg7;	// IMP=0x0010000000061e56
- (void)connectToOneAPIPeer:(id)arg1 inboundConnection:(_Bool)arg2 applicationService:(id)arg3 listenerID:(id)arg4 connectionID:(id)arg5 connectHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000061c27
- (void)stopDiscovery;	// IMP=0x0010000000061b61
- (void)startDiscovery:(unsigned int)arg1 applicationService:(id)arg2 foundHandler:(CDUnknownBlockType)arg3 connectedHandler:(CDUnknownBlockType)arg4 lostHandler:(CDUnknownBlockType)arg5 invalidationHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000061107
- (void)dealloc;	// IMP=0x00100000000610d8
- (id)init;	// IMP=0x001000000006108a

@end

