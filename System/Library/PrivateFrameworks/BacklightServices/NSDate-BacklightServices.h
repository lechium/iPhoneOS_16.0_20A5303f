//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (BacklightServices)
- (_Bool)bls_isOnOrAfter:(id)arg1 andOnOrBefore:(id)arg2 withEpsilon:(double)arg3;	// IMP=0x0030000000008e9c
- (_Bool)bls_isOnOrAfter:(id)arg1 andOnOrBefore:(id)arg2;	// IMP=0x0030000000008e35
- (long long)bls_compare:(id)arg1 withEpsilon:(double)arg2;	// IMP=0x0030000000008dc0
- (id)bls_shortLoggingString;	// IMP=0x0030000000008c2a
- (id)bls_loggingString;	// IMP=0x003000000000897e
- (id)bls_initWithBSContinuousMachTime:(double)arg1;	// IMP=0x0030000000008942
- (id)bls_initWithMachContinuousTime:(unsigned long long)arg1;	// IMP=0x00300000000088ee
@property(readonly, nonatomic) unsigned long long bls_machContinuousTime;
@end

