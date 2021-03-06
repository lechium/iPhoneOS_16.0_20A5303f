//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;
@protocol OS_dispatch_queue;

@interface NRQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)delayPairingRequestQueue;	// IMP=0x004000000002355e
+ (id)firstUnlockQueue;	// IMP=0x001000000002346b
+ (id)switchCompletionBlockQueue;	// IMP=0x00100000000233a6
+ (id)nearbyWatchBulletinQueue;	// IMP=0x001000000002339e
+ (id)xpcPairingQueue;	// IMP=0x001000000002329a
+ (id)registryDaemonQueue;	// IMP=0x00100000000231d5
+ (id)newQueueWithLabel:(id)arg1 withTargetQueue:(id)arg2 withAttributes:(id)arg3;	// IMP=0x0010000000022fde
+ (id)serialQueueWithLabel:(id)arg1 withTargetQueue:(id)arg2;	// IMP=0x0010000000022fc1
+ (id)newQueueWithLabel:(id)arg1 withAttributes:(id)arg2;	// IMP=0x0010000000022faa
+ (id)serialQueueWithLabel:(id)arg1;	// IMP=0x0010000000022f8b
+ (id)globalQueueWithIdentifier:(long long)arg1;	// IMP=0x0010000000022f0a
+ (id)mainQueue;	// IMP=0x0010000000022e98
- (void).cxx_destruct;	// IMP=0x002000000002375c
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)resume;	// IMP=0x0010000000023744
- (void)suspend;	// IMP=0x0010000000023736
- (void)dispatchAfter:(double)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000236d4
- (void)dispatchSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023697
- (void)dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023680
@property(readonly, nonatomic) NSString *label;
- (MISSING_TYPE *)dealloc;	// IMP=0x0010000000022e22
- (id)initWithDispatchQueue:(id)arg1;	// IMP=0x0010000000022db7

@end

