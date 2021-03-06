//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection;

@interface SKServiceBroker : NSObject
{
    NSLock *_serviceConnectionLock;	// 8 = 0x8
    NSXPCConnection *_serviceConnection;	// 16 = 0x10
    NSXPCConnection *_sim2HostConnection;	// 24 = 0x18
}

+ (id)_serviceConnectionWithName:(id)arg1;	// IMP=0x0040000000004efb
+ (id)_storeKitClientInterface;	// IMP=0x00100000000048e9
+ (id)_storeKitServiceInterface;	// IMP=0x00100000000046d0
+ (id)defaultBroker;	// IMP=0x0010000000004476
- (void).cxx_destruct;	// IMP=0x0020000000005381
- (void)_sim2HostConnectionInvalidated;	// IMP=0x001000000000533c
- (id)_sim2HostConnection;	// IMP=0x0010000000005118
- (id)storeKitSimulatorToHostServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005035
- (void)_serviceConnectionInvalidated;	// IMP=0x0010000000004ff0
- (id)_serviceConnection;	// IMP=0x0010000000004af5
- (id)storeKitSynchronousService;	// IMP=0x00100000000046bc
- (id)storeKitSynchronousServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000045d9
- (id)storeKitService;	// IMP=0x00100000000045c5
- (id)storeKitServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000044cb
- (id)init;	// IMP=0x0010000000004420

@end

