//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GKResourceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_syncQueue;	// 8 = 0x8
    NSMutableDictionary *_groupForResources;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000a5a53
- (id)_remainingResourceAfterJoiningResources:(id)arg1 group:(id)arg2 queue:(id)arg3;	// IMP=0x00100000000a5462
- (void)_deregisterForResources:(id)arg1 group:(id)arg2;	// IMP=0x00100000000a5295
- (void)_registerForResources:(id)arg1 group:(id)arg2;	// IMP=0x00100000000a4e02
- (id)init;	// IMP=0x00100000000a4d8b

@end

