//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, NSXPCListener;
@protocol AUMessageChannel;

__attribute__((visibility("hidden")))
@interface AURemoteMessageChannel : NSObject
{
    id <AUMessageChannel> _messageChannel;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    NSXPCConnection *_xpcConnection;	// 24 = 0x18
    AURemoteMessageChannel *_selfRetained;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000053945
- (void)releaseChannel;	// IMP=0x000000000005390c
- (void)retainSelfIfRequired;	// IMP=0x00000000000538eb
- (void)onCallRemoteAU:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000053836
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000535a8
- (id)endpoint;	// IMP=0x0000000000053592
- (id)initWithMessageChannel:(id)arg1;	// IMP=0x0000000000053497

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

