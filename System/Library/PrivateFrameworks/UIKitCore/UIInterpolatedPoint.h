//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterpolatedPoint : NSObject
{
    struct CGPoint _point;	// 8 = 0x8
}

+ (id)zeroCompatibleWithVector:(id)arg1;	// IMP=0x001000000132acbd
+ (id)epsilonCompatibleWithVector:(id)arg1;	// IMP=0x001000000132abf7
+ (id)valueWithCGPoint:(struct CGPoint)arg1;	// IMP=0x001000000132aaec
@property(readonly, copy) NSString *debugDescription;
- (id)multiplyByVector:(id)arg1;	// IMP=0x000000000132b0df
- (id)multiplyByScalar:(double)arg1;	// IMP=0x000000000132b0c4
- (id)addVector:(id)arg1;	// IMP=0x000000000132b0a8
- (void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(CDStruct_500c0369)arg5 state:(CDStruct_289c5ec3)arg6 delta:(double)arg7;	// IMP=0x000000000132ad6f
- (void)reinitWithVector:(id)arg1;	// IMP=0x000000000132ad61
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000132ad32
- (id)getValue;	// IMP=0x000000000132abd1
- (_Bool)isUndefined;	// IMP=0x000000000132ab8b
- (_Bool)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;	// IMP=0x000000000132ab5c
- (id)interpolateTo:(id)arg1 progress:(double)arg2;	// IMP=0x000000000132ab24

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

