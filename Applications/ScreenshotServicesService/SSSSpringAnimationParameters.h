//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SSSSpringAnimationParameters
{
    double _mass;	// 8 = 0x8
    double _stiffness;	// 16 = 0x10
    double _damping;	// 24 = 0x18
    double _speed;	// 32 = 0x20
    struct CGPoint _controlPoint1;	// 40 = 0x28
    struct CGPoint _controlPoint2;	// 56 = 0x38
}

+ (id)scaleAnimationParameters;	// IMP=0x0040000000017399
+ (id)springAnimationParametersWithDuration:(double)arg1 mass:(double)arg2 stiffness:(double)arg3 damping:(double)arg4 speed:(double)arg5 controlPointOne:(struct CGPoint)arg6 controlPointTwo:(struct CGPoint)arg7;	// IMP=0x0010000000017041
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0020000000017306
- (id)timingParameters;	// IMP=0x00100000000172a9
- (id)animationUsingParametersForKeyPath:(id)arg1;	// IMP=0x001000000001710f

@end
