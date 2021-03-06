//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UIUpdateHIDDigitizerInput : NSObject
{
    struct _UIUpdateInputInternal _input;	// 8 = 0x8
    NSMutableArray *_events;	// 88 = 0x58
    NSMutableSet *_touches;	// 96 = 0x60
    long long _eventModelTimeDifferenceMin;	// 104 = 0x68
    long long _eventModelTimeDifferenceMax;	// 112 = 0x70
    unsigned long long _latencyDuration;	// 120 = 0x78
    unsigned long long _periodDuration;	// 128 = 0x80
    unsigned long long _sendPeriodDuration;	// 136 = 0x88
    _Bool _nextEventExpected;	// 144 = 0x90
    CDStruct_1d7448cc _eventExpectedProperties;	// 152 = 0x98
    CDStruct_1d7448cc _eventNotExpectedProperties;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000000f401bc
- (_Bool)readyForModelTime:(unsigned long long)arg1 readyTime:(unsigned long long *)arg2;	// IMP=0x0000000000f3feab
- (struct __IOHIDEvent *)stopEventForModelTime:(unsigned long long)arg1;	// IMP=0x0000000000f3fd75
- (void)removeEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000000f3fce5
- (void)addEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000000f3f8f5
- (id)init;	// IMP=0x0000000000f3f643

@end

