//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCFairScheduler, NSString;
@protocol OS_dispatch_workloop;

__attribute__((visibility("hidden")))
@interface BRCFairSource : NSObject
{
    unsigned long long _schedulerBitIndex;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    BRCFairScheduler *_scheduler;	// 24 = 0x18
    int _suspendCount;	// 32 = 0x20
    _Bool _cancelled;	// 36 = 0x24
    _Bool _signaled;	// 37 = 0x25
    NSObject<OS_dispatch_workloop> *_workloop;	// 40 = 0x28
    CDUnknownBlockType _eventHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000224df6
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_workloop> *workloop; // @synthesize workloop=_workloop;
- (void)resume;	// IMP=0x0000000000224cf3
- (void)suspend;	// IMP=0x0000000000224cc2
- (void)cancel;	// IMP=0x0000000000224c90
- (void)_runEventHandler;	// IMP=0x0000000000224c02
- (void)signal;	// IMP=0x0000000000224b97
- (id)description;	// IMP=0x0000000000224b28
- (id)initWithName:(id)arg1 scheduler:(id)arg2;	// IMP=0x0000000000224a75

@end

