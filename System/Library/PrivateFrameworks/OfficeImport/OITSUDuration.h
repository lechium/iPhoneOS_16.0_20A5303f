//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUDuration : NSObject
{
    double mTimeInterval;	// 8 = 0x8
}

+ (id)durationWithTimeInterval:(double)arg1;	// IMP=0x0010000000256317
- (unsigned long long)hash;	// IMP=0x0000000000256417
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002563d2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002563a1
- (double)timeInterval;	// IMP=0x0000000000256396
- (id)initWithTimeInterval:(double)arg1;	// IMP=0x0000000000256353

@end
