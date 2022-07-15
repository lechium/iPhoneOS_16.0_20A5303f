//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPDispatchQueueExclusiveAccessToken : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    id _owner;	// 16 = 0x10
}

+ (id)tokenWithQueue:(id)arg1 owner:(id)arg2;	// IMP=0x00100000001a49a9
- (void).cxx_destruct;	// IMP=0x00000000001a4999
- (void)assertHasExclusiveAccessForOwner:(id)arg1;	// IMP=0x00000000001a48f2
- (id)_init;	// IMP=0x00000000001a48c3

@end
