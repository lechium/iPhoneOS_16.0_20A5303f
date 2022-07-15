//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NDTPerf : NSObject
{
    long long _wallTime;	// 8 = 0x8
    long long _cpuTime;	// 16 = 0x10
    long long _dirtyMemory;	// 24 = 0x18
}

+ (long long)cpuTime;	// IMP=0x0040000000056b8a
+ (long long)dirtyMemory;	// IMP=0x0010000000056b13
+ (long long)wallTime;	// IMP=0x0010000000056aac
+ (id)nowMinusPrevious:(id)arg1;	// IMP=0x00100000000569cd
@property(nonatomic) long long dirtyMemory; // @synthesize dirtyMemory=_dirtyMemory;
@property(nonatomic) long long cpuTime; // @synthesize cpuTime=_cpuTime;
@property(nonatomic) long long wallTime; // @synthesize wallTime=_wallTime;
- (id)description;	// IMP=0x0010000000056c04
- (double)cpuTimeMs;	// IMP=0x001000000005697c
- (id)init;	// IMP=0x0010000000056893

@end
