//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSDaemonConnection : NSObject
{
    NSXPCConnection *_sharedConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_sharedConnectionAccessQueue;	// 16 = 0x10
    NSMutableSet *_activePromises;	// 24 = 0x18
    NSMutableArray *_interruptionHandlers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000013d905
@property(readonly, nonatomic) NSMutableArray *interruptionHandlers; // @synthesize interruptionHandlers=_interruptionHandlers;
@property(readonly, nonatomic) NSMutableSet *activePromises; // @synthesize activePromises=_activePromises;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue; // @synthesize sharedConnectionAccessQueue=_sharedConnectionAccessQueue;
@property(retain, nonatomic) NSXPCConnection *sharedConnection; // @synthesize sharedConnection=_sharedConnection;
- (void)_handleInvalidation;	// IMP=0x000000000013d215
- (void)_handleInterruption;	// IMP=0x000000000013ce5c
- (void)_checkOutPromise:(id)arg1;	// IMP=0x000000000013ccde
- (void)_checkInPromise:(id)arg1;	// IMP=0x000000000013cb60
- (id)_connectionProxyForAsync:(_Bool)arg1 accessBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000013c34d
- (id)securityServiceProxyWithDelegate:(id)arg1;	// IMP=0x000000000013c1f6
- (id)pushNotificationService;	// IMP=0x000000000013c166
- (id)purchaseServiceProxy;	// IMP=0x000000000013c0d6
- (id)fraudReportServiceProxy;	// IMP=0x000000000013c046
- (id)deviceMessengerProxyWithDelegate:(id)arg1;	// IMP=0x000000000013beef
- (id)cookieServiceProxy;	// IMP=0x000000000013be5f
- (id)callService:(id)arg1 then:(CDUnknownBlockType)arg2;	// IMP=0x000000000013bacc
- (void)addInterruptionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000013b9af
- (void)dealloc;	// IMP=0x000000000013b832
- (id)init;	// IMP=0x000000000013b746

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

