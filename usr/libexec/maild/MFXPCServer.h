//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailServices/MSXPCService.h>

@class MFXPCClient;

@interface MFXPCServer : MSXPCService
{
    MFXPCClient *_client;	// 8 = 0x8
}

+ (id)endpointInfo;	// IMP=0x00400000000ce7f0
+ (id)exportedInterface;	// IMP=0x00100000000ce7bd
- (void).cxx_destruct;	// IMP=0x00200000000cea51
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cea48
- (id)newConnectionForInterface:(id)arg1;	// IMP=0x00100000000cea40
- (id)initWithClient:(id)arg1;	// IMP=0x00100000000ce9bc
- (id)initWithRemoteObjectInterface:(id)arg1;	// IMP=0x00100000000ce94d
- (id)init;	// IMP=0x00100000000ce8fe

@end

