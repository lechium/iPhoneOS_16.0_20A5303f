//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWServiceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSMutableSet *_serviceObservers;	// 24 = 0x18
}

+ (void)removeObserver:(id)arg1;	// IMP=0x0060000000011c36
+ (void)addObserver:(id)arg1;	// IMP=0x0060000000011bc4
+ (id)invokeWithService:(CDUnknownBlockType)arg1;	// IMP=0x0060000000011b41
+ (id)sharedManager;	// IMP=0x0060000000011b11
- (void).cxx_destruct;	// IMP=0x000000000001155c
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000114b0
- (void)addObserver:(id)arg1;	// IMP=0x0000000000011404
- (id)invokeWithService:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011141
- (id)init;	// IMP=0x0000000000010fac

@end
