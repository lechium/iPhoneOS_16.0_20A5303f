//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCBTNotificationMonitor : NSObject
{
    NSMutableArray *_handlerArray;	// 8 = 0x8
    struct os_unfair_lock_s _btNotificationHandlerLock;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00600000001f592e
- (void)unregisterBluetoothImmediateNotifications;	// IMP=0x00000000001f6532
- (void)registerForBluetoothImmediateNotifications;	// IMP=0x00000000001f64ce
- (void)unregisterDarwinNotification:(id)arg1;	// IMP=0x00000000001f63db
- (void)registerDarwinNotification:(id)arg1;	// IMP=0x00000000001f62b4
- (void)processBTNotification:(CDStruct_b9c9288f *)arg1;	// IMP=0x00000000001f6162
- (void)setupBTEventHandler;	// IMP=0x00000000001f5db6
- (void)unregisterAllBTNotificationHandlers;	// IMP=0x00000000001f5c8f
- (void)unregisterBTNotificationHandler:(int)arg1;	// IMP=0x00000000001f5b13
- (int)registerBTNotificationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f59e1
- (void)dealloc;	// IMP=0x00000000001f5973
- (id)init;	// IMP=0x00000000001f5893

@end
