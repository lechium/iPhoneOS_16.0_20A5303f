//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue;

@interface MCTaggedLocationCollector : NSObject
{
    NSDate *_lastRunTime;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    _Bool _pendingCompletion;	// 24 = 0x18
}

+ (id)sharedCollector;	// IMP=0x002000000000c1b6
- (void).cxx_destruct;	// IMP=0x002000000000dd6a
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x001000000000d863
- (_Bool)uploadRequest:(id)arg1;	// IMP=0x001000000000d41e
- (id)geocorrectiondUploadDir;	// IMP=0x001000000000d1f8
- (id)startTimeFromUploadFileName:(id)arg1;	// IMP=0x001000000000d098
- (id)buildUploadFileName;	// IMP=0x001000000000d02f
- (id)collectorUploadSession;	// IMP=0x001000000000cf64
- (void)storeLastRunTime:(id)arg1;	// IMP=0x001000000000cf1a
- (id)getLastRunTime;	// IMP=0x001000000000ceef
- (void)collectIfReady;	// IMP=0x001000000000c67a
- (id)init;	// IMP=0x001000000000c20b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

