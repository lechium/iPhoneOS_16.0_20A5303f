//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSAlwaysOnDateSpecifier, NSDate, NSString;
@protocol BLSHOSInterfaceProviding, BSTimerScheduleQuerying><BSInvalidatable;

__attribute__((visibility("hidden")))
@interface BLSHInactiveProcessSecondsBudget : NSObject
{
    id <BLSHOSInterfaceProviding> _osInterfaceProvider;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    BLSAlwaysOnDateSpecifier *_lock_previousSecondsFutureSpecifier;	// 24 = 0x18
    BLSAlwaysOnDateSpecifier *_lock_exemptedSecondsFutureSpecifier;	// 32 = 0x20
    BLSAlwaysOnDateSpecifier *_lock_previousSecondsRenderedSpecifier;	// 40 = 0x28
    NSDate *_lock_lastInvalidation;	// 48 = 0x30
    id <BSTimerScheduleQuerying><BSInvalidatable> _lock_invalidationTimer;	// 56 = 0x38
    struct os_unfair_lock_s _lock;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000020a60
- (_Bool)stillTrackingAfterPurgingStaleDataForNowDate:(id)arg1;	// IMP=0x0000000000020938
- (void)performInvalidation;	// IMP=0x00000000000208c2
- (void)invalidateAtRequestDate:(id)arg1 expectedFidelity:(long long)arg2 invalidationBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000204db
- (void)chargeRenderedSpecifier:(id)arg1 expectedFidelity:(long long)arg2;	// IMP=0x0000000000020413
- (void)resetFutureSpecifiers;	// IMP=0x00000000000203c9
- (id)validateAndChargeFutureSpecifier:(id)arg1 nextSpecifier:(id)arg2 expectedFidelity:(long long)arg3;	// IMP=0x000000000001ff44
- (long long)allowedFidelityAtDate:(id)arg1 expectedFidelity:(long long)arg2;	// IMP=0x000000000001fe95
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000001fcbb
- (id)initWithIdentifier:(id)arg1 osInterfaceProvider:(id)arg2;	// IMP=0x000000000001fc10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
