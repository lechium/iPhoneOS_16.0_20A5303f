//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLTimer;

@interface CLDrivingRecorderTrigger
{
    struct unique_ptr<CLMotionStateObserver_Type::Client, std::default_delete<CLMotionStateObserver_Type::Client>> _motionStateObserverClient;	// 8 = 0x8
    _Bool _enableVehicularNotifications;	// 16 = 0x10
    CLTimer *_deferredStartTimer;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0020000000c5ee42
- (void).cxx_destruct;	// IMP=0x0010000000c5ee1a
- (void)onDeferredStopTimerShouldPublish:(_Bool)arg1;	// IMP=0x0010000000c5edc1
- (void)onDeferredStartTimerSpecifyTriggerDelay:(double)arg1;	// IMP=0x0010000000c5ec8f
- (void)onMotionStateObserverNotification:(const int *)arg1 data:(const NotificationData_913f635f *)arg2;	// IMP=0x0010000000c5ea8e
- (void)teardownListeners;	// IMP=0x0010000000c5e9b4
- (void)cancelDeferredStartTimer;	// IMP=0x0010000000c5e97b
- (void)scheduleStart;	// IMP=0x0010000000c5e619
- (void)setupListeners;	// IMP=0x0010000000c5e46e
- (void)dealloc;	// IMP=0x0010000000c5e41b
- (id)initWithDelegate:(id)arg1 andUniverse:(id)arg2;	// IMP=0x0010000000c5e220

@end
