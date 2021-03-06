//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CMMotionAlarmManagerInternal : NSObject
{
    void *fLocationdConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 16 = 0x10
    NSMutableDictionary *fAlarms;	// 24 = 0x18
    _Bool fListening;	// 32 = 0x20
}

+ (id)instance;	// IMP=0x00600000001486b5
- (void)_handleAlarmFire:(id)arg1;	// IMP=0x000000000014af96
- (_Bool)_launchRemoteAppWithError:(id *)arg1 delegate:(id)arg2;	// IMP=0x000000000014abbb
- (_Bool)_acknowledgeAlarm:(id)arg1 error:(id *)arg2;	// IMP=0x000000000014a449
- (_Bool)_unregisterAlarm:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001498e1
- (_Bool)_registerAlarm:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000148df2
- (void)_stopListeners;	// IMP=0x0000000000148b6e
- (void)_startListeners;	// IMP=0x0000000000148871
- (void)_teardown;	// IMP=0x0000000000148768
- (void)dealloc;	// IMP=0x000000000014872a
- (id)init;	// IMP=0x000000000014829a

@end

