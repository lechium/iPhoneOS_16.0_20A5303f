//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLFallMslSink : NSObject
{
    struct list<CMMsl::Item *, std::allocator<CMMsl::Item *>> fOrderedSample;	// 8 = 0x8
    struct ImpactEvent fImpactEvent;	// 32 = 0x20
    _Bool fIncludeDerivedFeatures;	// 223 = 0xdf
}

- (id).cxx_construct;	// IMP=0x0020000000637629
- (void).cxx_destruct;	// IMP=0x001000000063761b
- (void)cleanUp;	// IMP=0x0010000000637607
- (void)cleanUpIncludingDerivedFeatures:(_Bool)arg1;	// IMP=0x0010000000637514
- (void)sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000636f2a
- (void)logOdometer:(const struct OdometerEntry *)arg1;	// IMP=0x0010000000636ca2
- (void)logSuppressionFeartures:(const FalsePositiveSuppressionFeatures_8c0e6519 *)arg1;	// IMP=0x0010000000636b0c
- (void)logFallStats:(const struct ImpactEvent *)arg1;	// IMP=0x001000000063658e
- (void)logFallState:(const struct ImpactEvent *)arg1;	// IMP=0x0010000000636432
- (void)logWristState:(const struct WristState *)arg1;	// IMP=0x001000000063632d
- (void)logHeartRate:(const struct CLCatherineData *)arg1;	// IMP=0x00100000006361c9
- (void)logPressure:(const Pressure_df92a120 *)arg1;	// IMP=0x00100000006360e7
- (void)logFilteredPressure:(const FilteredPressure_e74e912d *)arg1;	// IMP=0x0010000000636005
- (void)logDeviceMotion:(const struct ImpactData *)arg1;	// IMP=0x0010000000635ee4
- (void)logGyro200:(const struct ImpactData *)arg1;	// IMP=0x0010000000635de5
- (void)logGyro100:(id)arg1 startTime:(double)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x0010000000635be7
- (void)logHgal:(const struct ImpactData *)arg1;	// IMP=0x0010000000635aef
- (void)logAccel800:(const struct ImpactData *)arg1;	// IMP=0x00100000006359f4
- (void)logAccel100:(id)arg1 startTime:(double)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x0010000000635801
- (void)dealloc;	// IMP=0x00100000006357c3
- (id)initInUniverse:(id)arg1;	// IMP=0x0010000000635788
- (void)_insertSample:(void *)arg1;	// IMP=0x0010000000635556

@end
