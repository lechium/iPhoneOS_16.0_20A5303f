//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMStrideCalibrationRunningFormBuffer : NSObject
{
    struct deque<CLRunning::FormMetrics, std::allocator<CLRunning::FormMetrics>> fRunningFormMetrics;	// 8 = 0x8
}

+ (_Bool)isAvailable;	// IMP=0x00400000005a229a
- (id).cxx_construct;	// IMP=0x00200000005a25e3
- (void).cxx_destruct;	// IMP=0x00100000005a25d5
- (struct CMCalibrationTrackRawStrideLength)strideLengthFromStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x00100000005a2473
- (void)feedRunningFormMetrics:(const struct FormMetrics *)arg1;	// IMP=0x00100000005a2350
- (void)ageOutFormMetrics;	// IMP=0x00100000005a22a9

@end

