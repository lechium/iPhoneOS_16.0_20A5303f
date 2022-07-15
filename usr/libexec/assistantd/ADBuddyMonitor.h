//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ADBuddyMonitor : NSObject
{
    _Bool _isPastBuddy;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00400000000f78a3
- (void).cxx_destruct;	// IMP=0x00200000000f7c1b
- (_Bool)isPastBuddy;	// IMP=0x00100000000f7c12
- (_Bool)_checkBuddyState;	// IMP=0x00100000000f7c0a
- (void)_updateBuddyState;	// IMP=0x00100000000f7aa3
- (void)dealloc;	// IMP=0x00100000000f7a74
- (id)init;	// IMP=0x00100000000f7928

@end
