//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateInterval.h>

@interface NSDateInterval (BacklightServices)
- (id)bls_shortLoggingString;	// IMP=0x0030000000009224
- (id)bls_loggingString;	// IMP=0x003000000000917e
- (_Bool)bls_containsDate:(id)arg1 withEpsilon:(double)arg2;	// IMP=0x00300000000090ab
- (id)bls_initWithStartMachContinuousTime:(unsigned long long)arg1 endMachContinuousTime:(unsigned long long)arg2;	// IMP=0x003000000000900c
@property(readonly, nonatomic) unsigned long long bls_machDuration;
@property(readonly, nonatomic) unsigned long long bls_machContinuousEndTime;
@property(readonly, nonatomic) unsigned long long bls_machContinuousStartTime;
@end
