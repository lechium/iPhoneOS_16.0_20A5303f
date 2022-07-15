//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSString;
@protocol OS_dispatch_queue;

@interface AppleMusicAPITokenIDSService : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    IDSService *_service;	// 16 = 0x10
    NSString *_serviceName;	// 24 = 0x18
}

+ (id)sharedService;	// IMP=0x00200000000e5df9
- (void).cxx_destruct;	// IMP=0x00200000000e55a6
- (void)_stop;	// IMP=0x00100000000e54e0
- (void)_start;	// IMP=0x00100000000e5416
- (void)_performTokenRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e4faa
- (void)stop;	// IMP=0x00100000000e4f5f
- (void)start;	// IMP=0x00100000000e4f14
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000000e4cbb
- (void)dealloc;	// IMP=0x00100000000e4c50
- (id)_init;	// IMP=0x00100000000e4b92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
