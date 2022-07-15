//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PBBridgeSupport/NSObject-Protocol.h>

@class IDSProtobuf;

@protocol PBBridgeCompanionProtocol <NSObject>
- (void)handleWarrantySentinelResponse:(IDSProtobuf *)arg1;
- (void)sendProxyActivationRequest:(IDSProtobuf *)arg1;
- (void)enableSiriForGizmo:(IDSProtobuf *)arg1;
- (void)getSiriState:(IDSProtobuf *)arg1;
- (void)getCompanionRegion:(IDSProtobuf *)arg1;
- (void)getCompanionLanguage:(IDSProtobuf *)arg1;
- (void)gizmoDidEndPasscodeCreation:(IDSProtobuf *)arg1;
- (void)gizmoDidFinishActivating:(IDSProtobuf *)arg1;
- (void)gizmoDidBeginActivating:(IDSProtobuf *)arg1;

@optional
- (void)gizmoBecameAvailableWantsConfirmation:(IDSProtobuf *)arg1;
@end
