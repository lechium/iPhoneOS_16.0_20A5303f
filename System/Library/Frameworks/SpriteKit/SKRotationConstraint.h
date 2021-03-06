//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKConstraint.h"

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKRotationConstraint : SKConstraint
{
    SKRange *_zRotationRange;	// 24 = 0x18
}

+ (id)constraintWithZRotationRange:(id)arg1;	// IMP=0x00600000000e9189
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000e8ded
- (void).cxx_destruct;	// IMP=0x00000000000e9215
@property(copy) SKRange *zRotationRange; // @synthesize zRotationRange=_zRotationRange;
- (_Bool)isEqualToRotationConstraint:(id)arg1;	// IMP=0x00000000000e90bc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e9024
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e8f72
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e8e89
- (id)initWithZRotationRange:(id)arg1;	// IMP=0x00000000000e8df5

@end

