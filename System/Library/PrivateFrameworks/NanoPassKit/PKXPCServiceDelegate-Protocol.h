//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSXPCConnection, PKXPCService;

@protocol PKXPCServiceDelegate <NSObject>
- (void)remoteService:(PKXPCService *)arg1 didInterruptConnection:(NSXPCConnection *)arg2;
- (void)remoteService:(PKXPCService *)arg1 didEstablishConnection:(NSXPCConnection *)arg2;

@optional
- (void)remoteServiceDidSuspend:(PKXPCService *)arg1;
- (void)remoteServiceDidResume:(PKXPCService *)arg1;
@end

