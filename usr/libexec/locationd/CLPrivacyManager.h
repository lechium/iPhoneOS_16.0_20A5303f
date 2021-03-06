//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLDispatchSilo, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_source;

@interface CLPrivacyManager : CLIntersiloService
{
    struct unique_ptr<CLClientManager_Type::Client, std::default_delete<CLClientManager_Type::Client>> _clientManagerClient;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_deferVacuum;	// 16 = 0x10
    NSMutableDictionary *_activities;	// 24 = 0x18
    _Bool _disabled;	// 32 = 0x20
    unsigned long long _timeStarted;	// 40 = 0x28
}

+ (id)getSilo;	// IMP=0x0020000000c465f2
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000c465d9
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000c4657c
- (id).cxx_construct;	// IMP=0x0020000000c484f4
- (void).cxx_destruct;	// IMP=0x0010000000c484cc
- (void)onActivity:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0010000000c47e16
- (void)retryActivityForEncryptionClass:(id)arg1 reason:(int)arg2;	// IMP=0x0010000000c47a64
- (_Bool)isReadyToVacuumEncryptionClass:(id)arg1;	// IMP=0x0010000000c47845
- (void)checkInForActivityWithIdentifier:(id)arg1;	// IMP=0x0010000000c47722
- (void)vacuumAll;	// IMP=0x0010000000c4704a
- (void)scheduleVacuumWithReason:(id)arg1;	// IMP=0x0010000000c46cce
- (void)onClientManagerNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0010000000c46b04
- (void)beginService;	// IMP=0x0010000000c466fd
- (void)dealloc;	// IMP=0x0010000000c466af
- (id)init;	// IMP=0x0010000000c4664e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) CLDispatchSilo *silo; // @dynamic silo;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

