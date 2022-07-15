//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PDTaskSchedulerBlockTask : NSObject
{
    _Bool _repeating;	// 8 = 0x8
    _Bool _requiresMainPower;	// 9 = 0x9
    _Bool _requiresScreenSleep;	// 10 = 0xa
    unsigned long long _delay;	// 16 = 0x10
    unsigned long long _gracePeriod;	// 24 = 0x18
    unsigned long long _priority;	// 32 = 0x20
    unsigned long long _requiredNetworkState;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_executionQueue;	// 48 = 0x30
    CDUnknownBlockType _taskBlock;	// 56 = 0x38
    NSString *_identifier;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000006a362
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType taskBlock; // @synthesize taskBlock=_taskBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // @synthesize executionQueue=_executionQueue;
@property(nonatomic) unsigned long long requiredNetworkState; // @synthesize requiredNetworkState=_requiredNetworkState;
@property(nonatomic) _Bool requiresScreenSleep; // @synthesize requiresScreenSleep=_requiresScreenSleep;
@property(nonatomic) _Bool requiresMainPower; // @synthesize requiresMainPower=_requiresMainPower;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic, getter=isRepeating) _Bool repeating; // @synthesize repeating=_repeating;
@property(nonatomic) unsigned long long gracePeriod; // @synthesize gracePeriod=_gracePeriod;
@property(nonatomic) unsigned long long delay; // @synthesize delay=_delay;
@property(readonly, copy) NSString *description;
- (void)run;	// IMP=0x0010000000069fc3
- (void)clampToPredefinedTimePeriod:(unsigned long long)arg1;	// IMP=0x0010000000069f4c
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0010000000069e43

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
