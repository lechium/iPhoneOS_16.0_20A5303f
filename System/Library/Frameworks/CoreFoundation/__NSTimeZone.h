//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSTimeZone.h"

__attribute__((visibility("hidden")))
@interface __NSTimeZone : NSTimeZone
{
    struct __CFString *_name;	// 8 = 0x8
    struct __CFData *_data;	// 16 = 0x10
    void **_ucal;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    int _secondsFromGMT;	// 36 = 0x24
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0060000000143b6b
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000143b68
+ (void)initialize;	// IMP=0x0060000000143a98
- (void)dealloc;	// IMP=0x0000000000143ad5
- (id)localizedName:(long long)arg1 locale:(id)arg2;	// IMP=0x0000000000143797
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;	// IMP=0x00000000001435b9
- (double)daylightSavingTimeOffsetForDate:(id)arg1;	// IMP=0x000000000014332e
- (_Bool)isDaylightSavingTimeForDate:(id)arg1;	// IMP=0x000000000014330a
- (id)abbreviationForDate:(id)arg1;	// IMP=0x0000000000142f2c
- (long long)secondsFromGMTForDate:(id)arg1;	// IMP=0x0000000000142d22
- (id)data;	// IMP=0x0000000000142b52
- (id)name;	// IMP=0x0000000000142b34

@end

