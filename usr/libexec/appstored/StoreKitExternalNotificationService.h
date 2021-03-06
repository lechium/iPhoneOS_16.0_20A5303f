//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, TaskQueue;
@protocol OS_dispatch_queue;

@interface StoreKitExternalNotificationService : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableSet *_displayedSheets;	// 16 = 0x10
    TaskQueue *_taskQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001e96bd
- (void)_handleBagChangedNotification:(id)arg1;	// IMP=0x00100000001e9664
- (void)presentSheetIfNeededForProcessHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e7f36
- (id)init;	// IMP=0x00100000001e77ae

@end

