//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface CNContactsDaemon : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 8 = 0x8
    NSArray *_activeXPCListenerPairs;	// 16 = 0x10
}

+ (void)enterSandbox;	// IMP=0x00400000000097d5
- (void).cxx_destruct;	// IMP=0x002000000000a108
@property(retain, nonatomic) NSArray *activeXPCListenerPairs; // @synthesize activeXPCListenerPairs=_activeXPCListenerPairs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
- (void)registerXPCActivities;	// IMP=0x0010000000009f7b
- (id)_notifydListenersByName;	// IMP=0x0010000000009c2c
- (void)subscribeNotifydListeners;	// IMP=0x0010000000009975
- (void)wakeXPCListeners;	// IMP=0x00100000000098d5
- (void)runOnRunLoop:(id)arg1;	// IMP=0x001000000000986c
- (id)XPCActivities;	// IMP=0x001000000000985f
- (id)notifydListeners;	// IMP=0x0010000000009852
- (id)XPCListenerPairs;	// IMP=0x0010000000009845
- (id)init;	// IMP=0x00100000000097db

@end
