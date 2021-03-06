//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, CLSilo, CLTimer, NSDate, NSString, SBSStatusBarStyleOverridesAssertion;
@protocol CLIntersiloUniverse, CLVehicleStateNotifierProtocol;

@interface CLLocationDerivedSpeedEstimator : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    id <CLVehicleStateNotifierProtocol> _vehicleStateProxy;	// 16 = 0x10
    CLSilo *_silo;	// 24 = 0x18
    _Bool _showActivityVehicular;	// 32 = 0x20
    _Bool _showActivityVehicularMounted;	// 33 = 0x21
    _Bool _visualIndicatorActive;	// 34 = 0x22
    _Bool _seenNonVehicularState;	// 35 = 0x23
    _Bool _motionVehicular;	// 36 = 0x24
    NSDate *_wsbClientStartTime;	// 40 = 0x28
    struct unique_ptr<CLWifiService_Type::Client, std::default_delete<CLWifiService_Type::Client>> _wifiServiceClient;	// 48 = 0x30
    struct unique_ptr<CLMotionState_Type::Client, std::default_delete<CLMotionState_Type::Client>> _motionStateClient;	// 56 = 0x38
    int _vehicularToken;	// 64 = 0x40
    SBSStatusBarStyleOverridesAssertion *_statusBarAssertion;	// 72 = 0x48
    unsigned long long _vehicularHints;	// 80 = 0x50
    unsigned long long _prevVehicularHints;	// 88 = 0x58
    unsigned long long _hintsAvailable;	// 96 = 0x60
    double _vehicularStartTime;	// 104 = 0x68
    double _vehicularLastNoHintsTime;	// 112 = 0x70
    double _vehicularLastBTHintTime;	// 120 = 0x78
    double _vehicularLastMotionHintTime;	// 128 = 0x80
    int _numMotionExitsWithBT;	// 136 = 0x88
    int _lastSeenVehicularTime;	// 140 = 0x8c
    int _sequentialVehicularIndex;	// 144 = 0x90
    double _accelDetectionLatency;	// 152 = 0x98
    double _gpsDetectionLatency;	// 160 = 0xa0
    double _basebandDetectionLatency;	// 168 = 0xa8
    double _wifiDetectionLatency;	// 176 = 0xb0
    double _btDetectionLatency;	// 184 = 0xb8
    double _vehicularDuration;	// 192 = 0xc0
    double _vehicularDurationExitFromNoHints;	// 200 = 0xc8
    double _vehicularDurationExitFromLastBTHint;	// 208 = 0xd0
    double _vehicularDurationLastBTHintFromLastMotionHint;	// 216 = 0xd8
    int _numConsecutiveVehicularSpeedObservations;	// 224 = 0xe0
    double _lastElapsedTime;	// 232 = 0xe8
    double _lastDistanceMoved;	// 240 = 0xf0
    _Bool _valid;	// 248 = 0xf8
    CLLocation *_prevLoc;	// 256 = 0x100
    CLTimer *_scanTimer;	// 264 = 0x108
    CDStruct_56299a79 _currentEstimate;	// 272 = 0x110
}

+ (_Bool)isSupported;	// IMP=0x00200000001b8fbf
- (id).cxx_construct;	// IMP=0x00200000001bc9f5
- (void).cxx_destruct;	// IMP=0x00100000001bc9b1
@property(retain, nonatomic) CLTimer *scanTimer; // @synthesize scanTimer=_scanTimer;
@property(retain, nonatomic) CLLocation *prevLoc; // @synthesize prevLoc=_prevLoc;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) CDStruct_56299a79 currentEstimate; // @synthesize currentEstimate=_currentEstimate;
- (void)submitLatencyMetrics;	// IMP=0x00100000001bc921
- (void)submitFalseDetectionMetricsWithType:(unsigned long long)arg1;	// IMP=0x00100000001bc91b
- (void)logLatencyMetricsInternal;	// IMP=0x00100000001bc915
- (void)clearStatusBarColorAndText;	// IMP=0x00100000001bc83c
- (void)setStatusBarWithLabel:(id)arg1;	// IMP=0x00100000001bc3ac
- (void)updateStatusBarLabel;	// IMP=0x00100000001bc1fa
- (void)onMotionStateNotification:(int)arg1 data:(union NotificationData)arg2;	// IMP=0x00100000001bc100
- (void)onWifiServiceNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x00100000001bbe40
- (void)handleMotionStateNotification:(union NotificationData *)arg1;	// IMP=0x00100000001bb3da
- (void)handleVehicularStateChanged;	// IMP=0x00100000001bb357
- (_Bool)_feedLocation:(id)arg1;	// IMP=0x00100000001b9f59
- (void)_invalidateSpeedEstimate;	// IMP=0x00100000001b9f14
- (void)_onScanTimer;	// IMP=0x00100000001b9c92
- (_Bool)feedLocation:(const struct CLDaemonLocation *)arg1;	// IMP=0x00100000001b9bfd
- (void)dealloc;	// IMP=0x00100000001b9b49
- (void)invalidate;	// IMP=0x00100000001b9b1b
- (void)unregisterForNotifications;	// IMP=0x00100000001b9a9f
- (void)updateWsbClient:(_Bool)arg1;	// IMP=0x00100000001b9a7d
- (void)stopWsbClient;	// IMP=0x00100000001b9996
- (void)startWsbClient;	// IMP=0x00100000001b9875
- (void)registerForNotifications;	// IMP=0x00100000001b94ad
- (id)initInUniverse:(id)arg1;	// IMP=0x00100000001b9051
- (id)init;	// IMP=0x00100000001b8fe6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

