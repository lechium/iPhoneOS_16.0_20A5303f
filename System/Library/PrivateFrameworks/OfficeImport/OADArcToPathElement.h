//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OADArcToPathElement
{
    struct OADAdjustPoint mSemiaxes;	// 8 = 0x8
    struct OADAdjustCoord mStartAngle;	// 24 = 0x18
    struct OADAdjustCoord mAngleLength;	// 32 = 0x20
}

- (struct OADAdjustCoord)angleLength;	// IMP=0x000000000031ce08
- (struct OADAdjustCoord)startAngle;	// IMP=0x000000000031cdf7
- (struct OADAdjustPoint)semiaxes;	// IMP=0x000000000031cde1
- (id)initWithSemiaxes:(struct OADAdjustPoint)arg1 startAngle:(struct OADAdjustCoord)arg2 angleLength:(struct OADAdjustCoord)arg3;	// IMP=0x00000000001dd522

@end

