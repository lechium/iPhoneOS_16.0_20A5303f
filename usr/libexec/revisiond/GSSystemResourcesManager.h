//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSHashTable, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GSSystemResourcesManager : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 8 = 0x8
    _Bool _invalidated;	// 16 = 0x10
    NSHashTable *_powerObservers;	// 24 = 0x18
    MISSING_TYPE *_powerNotifyToken;	// 32 = 0x20
    _Bool _powerLevelOK;	// 36 = 0x24
    NSObject<OS_dispatch_source> *_powerLevelOKTimer;	// 40 = 0x28
    NSMutableSet *_lowDiskSet;	// 48 = 0x30
    NSMutableDictionary *_lowDiskDict;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_lowDiskSource;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_lowDiskTimer;	// 72 = 0x48
    NSHashTable *_lowMemoryObservers;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;	// 88 = 0x58
}

+ (id)manager;	// IMP=0x00400000000175a4
- (void).cxx_destruct;	// IMP=0x00200000000192e4
- (void)removeLowMemoryObserver:(id)arg1;	// IMP=0x0010000000019239
- (void)addLowMemoryObserver:(id)arg1;	// IMP=0x001000000001918e
- (void)_didReceiveMemoryWarning;	// IMP=0x0010000000019055
- (void)_invalidateLowMemory;	// IMP=0x0010000000018fc4
- (void)_initLowMemory;	// IMP=0x0010000000018efd
- (void)removeLowDiskObserver:(id)arg1 forDevice:(int)arg2;	// IMP=0x0010000000018d0a
- (void)addLowDiskObserver:(id)arg1 forDevice:(int)arg2;	// IMP=0x0010000000018a89
- (unsigned int)deviceLowSpaceFlags:(int)arg1;	// IMP=0x0010000000018a7d
- (void)_processLowDiskNotification:(_Bool)arg1;	// IMP=0x001000000001868f
- (void)_resetLowDiskManager;	// IMP=0x0010000000018629
- (void)_invalidateLowDiskManager;	// IMP=0x00100000000185b0
- (void)_initLowDiskManager;	// IMP=0x0010000000018319
- (void)removePowerObserver:(id)arg1;	// IMP=0x00100000000181db
- (void)addPowerObserver:(id)arg1;	// IMP=0x001000000001805e
- (void)_setPowerLevel:(_Bool)arg1;	// IMP=0x0010000000017e9c
- (void)_setPowerLevelWithCoalescing:(_Bool)arg1;	// IMP=0x0010000000017c71
@property(readonly) _Bool isPowerOK;
- (void)_resetPowerManager;	// IMP=0x0010000000017afb
- (void)_invalidatePowerManager;	// IMP=0x0010000000017acb
- (void)_initPowerManager;	// IMP=0x00100000000179a9
- (void)reset;	// IMP=0x00100000000178d9
- (void)dealloc;	// IMP=0x0010000000017889
- (void)close;	// IMP=0x0010000000017748
- (id)init;	// IMP=0x00100000000175f9

@end
