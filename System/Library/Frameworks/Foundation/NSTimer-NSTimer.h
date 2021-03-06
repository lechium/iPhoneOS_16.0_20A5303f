//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSTimer.h>

@interface NSTimer (NSTimer)
+ (id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4;	// IMP=0x0080000000591aaa
+ (id)scheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0080000000591a1b
+ (id)timerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00800000005919ad
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;	// IMP=0x008000000059190b
+ (id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;	// IMP=0x008000000059188a
+ (id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(_Bool)arg3;	// IMP=0x00800000005917dd
+ (id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(_Bool)arg3;	// IMP=0x0080000000591751
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0080000000591724
- (double)_cffireTime;	// IMP=0x0000000000591e07
- (CDStruct_e097db04)context;	// IMP=0x0000000000591dec
- (void)setFireTime:(double)arg1;	// IMP=0x0000000000591db4
- (double)fireTime;	// IMP=0x0000000000591d89
- (double)interval;	// IMP=0x0000000000591d77
- (long long)order;	// IMP=0x0000000000591d6f
- (struct __CFString *)copyDebugDescription;	// IMP=0x0000000000591d54
- (id)userInfo;	// IMP=0x0000000000591d4c
- (void)setFireDate:(id)arg1;	// IMP=0x0000000000591d21
- (id)fireDate;	// IMP=0x0000000000591cf3
- (void)fire;	// IMP=0x0000000000591cc8
- (void)setTolerance:(double)arg1;	// IMP=0x0000000000591c9d
- (double)tolerance;	// IMP=0x0000000000591c6e
- (double)timeInterval;	// IMP=0x0000000000591c3f
- (_Bool)isValid;	// IMP=0x0000000000591c11
- (void)invalidate;	// IMP=0x0000000000591be6
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(_Bool)arg6;	// IMP=0x0000000000591bd9
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 repeats:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000591b04
@end

