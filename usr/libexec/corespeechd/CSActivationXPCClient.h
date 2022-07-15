//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface CSActivationXPCClient : NSObject
{
    NSObject<OS_xpc_object> *_xpcConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000006e4d
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)_decodeError:(id)arg1;	// IMP=0x0010000000006d68
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006b65
- (void)notifyActivationEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000069a4
- (void)_handleListenerError:(id)arg1;	// IMP=0x001000000000688f
- (void)_handleListenerEvent:(id)arg1;	// IMP=0x00100000000067f8
- (void)dealloc;	// IMP=0x0010000000006732
- (void)connect;	// IMP=0x0010000000006629
- (id)init;	// IMP=0x00100000000065ca

@end
