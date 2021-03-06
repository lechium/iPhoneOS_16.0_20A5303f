//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSVSystemDialogManager : NSObject
{
    struct __CFDictionary *_registeredSystemDialogs;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x006000000002dd6a
- (void).cxx_destruct;	// IMP=0x000000000002dcc4
- (void)unregisterSystemDialogWithUserNotification:(struct __CFUserNotification *)arg1;	// IMP=0x000000000002dc75
- (id)systemDialogForUserNotification:(struct __CFUserNotification *)arg1;	// IMP=0x000000000002dbb8
- (void)registerSystemDialog:(id)arg1 forUserNotification:(struct __CFUserNotification *)arg2;	// IMP=0x000000000002db1f
- (void)dealloc;	// IMP=0x000000000002dae5
- (id)init;	// IMP=0x000000000002da66

@end

