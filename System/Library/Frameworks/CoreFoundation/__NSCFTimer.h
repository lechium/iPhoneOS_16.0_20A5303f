//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSTimer.h"

__attribute__((visibility("hidden")))
@interface __NSCFTimer : NSTimer
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000005fbb3
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x008000000005fbb0
- (id)init;	// IMP=0x000000000006005d
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(_Bool)arg6;	// IMP=0x000000000005fecd
- (unsigned long long)_cfTypeID;	// IMP=0x000000000005fec8
- (void)fire;	// IMP=0x000000000005fe0f
- (id)userInfo;	// IMP=0x000000000005fc46
- (void)setFireDate:(id)arg1;	// IMP=0x000000000005fc1f
- (id)fireDate;	// IMP=0x000000000005fbf7
- (void)invalidate;	// IMP=0x000000000005fbf2
- (void)setTolerance:(double)arg1;	// IMP=0x000000000005fbed
- (double)tolerance;	// IMP=0x000000000005fbe8
- (double)timeInterval;	// IMP=0x000000000005fbe3
- (_Bool)isValid;	// IMP=0x000000000005fbd3
- (unsigned long long)retainCount;	// IMP=0x000000000005fbab
- (_Bool)_isDeallocating;	// IMP=0x000000000005fb9b
- (_Bool)_tryRetain;	// IMP=0x000000000005fb8a
- (oneway void)release;	// IMP=0x000000000005fb85
- (id)retain;	// IMP=0x000000000005fb80
- (unsigned long long)hash;	// IMP=0x000000000005fb7b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005fb58

@end
