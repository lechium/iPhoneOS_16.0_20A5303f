//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPCNNPoseEstimator : NSObject
{
}

+ (id)estimator;	// IMP=0x00800000001b3460
- (int)detectPoseForFace:(struct CGRect)arg1 inBuffer:(struct __CVBuffer *)arg2 yaw:(long long *)arg3;	// IMP=0x00000000001b3526
- (int)computePoseScore:(float *)arg1;	// IMP=0x00000000001b351b
- (float *)getInputBuffer;	// IMP=0x00000000001b3513

@end
