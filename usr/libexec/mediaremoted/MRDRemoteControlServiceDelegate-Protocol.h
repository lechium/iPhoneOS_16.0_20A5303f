//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MRDExternalDeviceServerClientConnection, MRDRemoteControlService;

@protocol MRDRemoteControlServiceDelegate <NSObject>
- (void)remoteControlService:(MRDRemoteControlService *)arg1 didAcceptClientConnection:(MRDExternalDeviceServerClientConnection *)arg2;
@end
