//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface DDScanServerDispatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_scannerQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_reportQueue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_memoryWarningSource;	// 32 = 0x20
    _Bool _memoryWarningInProgress;	// 40 = 0x28
    NSMutableDictionary *_scanners;	// 48 = 0x30
    _Bool _tearDownRequested;	// 56 = 0x38
    unsigned long long _jobIdentifier;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000048be
- (void)dealloc;	// IMP=0x000000000000484e
- (void)recycleScanner:(id)arg1 fromList:(id)arg2 sameQueue:(_Bool)arg3;	// IMP=0x00000000000045dd
- (void)cancelJob:(long long)arg1;	// IMP=0x000000000000458e
- (long long)scannerConf:(id)arg1 sync:(_Bool)arg2 shortTask:(_Bool)arg3 runTask:(CDUnknownBlockType)arg4;	// IMP=0x00000000000041ab
- (long long)emptyIdentifier;	// IMP=0x000000000000411f
- (_Bool)reachedMaxSimultaneousTask;	// IMP=0x0000000000003f94
- (id)scannerListForConfiguration:(id)arg1;	// IMP=0x0000000000003ead
- (id)reportQueue;	// IMP=0x0000000000003e9f
- (id)init;	// IMP=0x0000000000003d1a

@end
