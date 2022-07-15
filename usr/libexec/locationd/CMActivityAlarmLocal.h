//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMotion/CMActivityAlarm.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CMActivityAlarmLocal : CMActivityAlarm
{
    void *fConcentrator;	// 8 = 0x8
    _Bool fIsValid;	// 16 = 0x10
    struct __CFRunLoop *fRunLoop;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *fQueue;	// 32 = 0x20
    CDUnknownBlockType fHandler;	// 40 = 0x28
    NSString *_bundleId;	// 48 = 0x30
    NSString *_executable;	// 56 = 0x38
}

+ (id)activityAlarmInfo;	// IMP=0x0040000000a02511
+ (_Bool)activityAlarmAvailable;	// IMP=0x0010000000a02500
@property(copy, nonatomic) NSString *executable; // @synthesize executable=_executable;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void)fire;	// IMP=0x0010000000a02b06
- (_Bool)isValid;	// IMP=0x0010000000a02adc
- (void)invalidate;	// IMP=0x0010000000a02a3a
- (void)dealloc;	// IMP=0x0010000000a029d2
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onRunLoop:(struct __CFRunLoop *)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000a028d5
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onQueue:(id)arg3 forClient:(const void *)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000a02756
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000a02534

@end
