//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface XPCNotificationCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableArray *_notificationClients;	// 16 = 0x10
    NSMutableDictionary *_notificationSources;	// 24 = 0x18
}

+ (id)defaultCenter;	// IMP=0x004000000024bdf3
- (void).cxx_destruct;	// IMP=0x002000000024c6bb
- (void)unregisterNotificationClient:(id)arg1;	// IMP=0x001000000024c612
- (void)registerNotificationSource:(id)arg1;	// IMP=0x001000000024c52d
- (void)registerNotificationClient:(id)arg1;	// IMP=0x001000000024c3b8
- (void)postProgress:(id)arg1;	// IMP=0x001000000024c16f
- (void)postNotification:(id)arg1;	// IMP=0x001000000024bf28
- (id)init;	// IMP=0x001000000024be78

@end

