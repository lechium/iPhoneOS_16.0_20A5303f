//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKConstraint.h"

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKScaleConstraint : SKConstraint
{
    SKRange *_xRange;	// 24 = 0x18
    SKRange *_yRange;	// 32 = 0x20
}

+ (id)constraintWithYRange:(id)arg1;	// IMP=0x00600000000e8cc4
+ (id)constraintWithXRange:(id)arg1;	// IMP=0x00600000000e8c1a
+ (id)constraintWithScaleRange:(id)arg1;	// IMP=0x00600000000e8bb2
+ (id)constraintWithXRange:(id)arg1 YRange:(id)arg2;	// IMP=0x00600000000e8b1e
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000e85f4
- (void).cxx_destruct;	// IMP=0x00000000000e8dbc
@property(copy) SKRange *yRange; // @synthesize yRange=_yRange;
@property(copy) SKRange *xRange; // @synthesize xRange=_xRange;
- (_Bool)isEqualToScaleConstraint:(id)arg1;	// IMP=0x00000000000e89cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e88fa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e8805
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e86c7
- (id)initWithXRange:(id)arg1 YRange:(id)arg2;	// IMP=0x00000000000e85fc

@end

