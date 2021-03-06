//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface MapsThrottler : NSObject
{
    _Bool _hasScheduledUpdateHandler;	// 8 = 0x8
    NSDate *_lastUpdateSentDate;	// 16 = 0x10
    double _throttlingInterval;	// 24 = 0x18
    CDUnknownBlockType _updateHandler;	// 32 = 0x20
    id _value;	// 40 = 0x28
    NSDate *_valueTimeStamp;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000005033f8
@property(readonly, nonatomic) NSDate *valueTimeStamp; // @synthesize valueTimeStamp=_valueTimeStamp;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(readonly, nonatomic) double throttlingInterval; // @synthesize throttlingInterval=_throttlingInterval;
- (void)_scheduleUpdateHandlerWithDelay:(double)arg1;	// IMP=0x0010000000503269
- (id)initWithThrottlingInterval:(double)arg1 updateHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000503028
- (id)init;	// IMP=0x001000000050300c

@end

