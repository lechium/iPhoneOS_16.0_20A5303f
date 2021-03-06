//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol BSInvalidatable;

@interface NavigationThermalWarningController : NSObject
{
    id <BSInvalidatable> _idleTimerAssertion;	// 8 = 0x8
    struct __CFUserNotification *_notification;	// 16 = 0x10
    _Bool _active;	// 24 = 0x18
    CDUnknownBlockType _changeHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001096da
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
- (void)screenLayoutDidChange;	// IMP=0x00100000001094a9
- (id)_localizedTitle;	// IMP=0x0010000000109441
- (id)_localizedMessage;	// IMP=0x0010000000109357
- (void)_tearDownNotificationIfNeeded;	// IMP=0x0010000000109210
- (void)_clearIdleTimerIfNeeded;	// IMP=0x001000000010913a
- (void)_sendNotification;	// IMP=0x0010000000108e2d
- (void)_lockAndStartIdleTimer;	// IMP=0x0010000000108bc7
- (void)_checkThermalLevel;	// IMP=0x0010000000108aee
@property(readonly, nonatomic, getter=isDeviceMelting) _Bool deviceMelting;
- (void)dealloc;	// IMP=0x00100000001087e2
- (id)init;	// IMP=0x00100000001085b6

@end

