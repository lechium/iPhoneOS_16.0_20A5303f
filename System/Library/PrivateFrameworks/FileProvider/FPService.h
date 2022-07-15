//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection, NSXPCInterface;
@protocol FPDLifetimeServicing, NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface FPService : NSObject
{
    id <FPDLifetimeServicing> _extender;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    id <NSXPCProxyCreating> _proxy;	// 24 = 0x18
    NSXPCInterface *_interface;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000662b9
@property(readonly) id synchronousRemoteObjectProxy;
@property(readonly) id remoteObjectProxy;
- (id)remoteObjectProxyCreating;	// IMP=0x00000000000660cf
- (void)dealloc;	// IMP=0x0000000000066091
- (void)stopExtendingLifetime;	// IMP=0x000000000006607f
- (void)invalidate;	// IMP=0x000000000006600b
- (id)initWithEndpoint:(id)arg1 interface:(id)arg2 lifetimeExtender:(id)arg3 providerDomainID:(id)arg4;	// IMP=0x0000000000065dca
- (id)initWithProxy:(id)arg1 interface:(id)arg2 lifetimeExtender:(id)arg3 providerDomainID:(id)arg4;	// IMP=0x0000000000065d13

@end
