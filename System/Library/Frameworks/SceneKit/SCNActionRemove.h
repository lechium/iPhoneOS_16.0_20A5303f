//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

__attribute__((visibility("hidden")))
@interface SCNActionRemove : SCNAction
{
    _Bool _hasFired;	// 8 = 0x8
}

+ (id)removeFromParentNode;	// IMP=0x00600000002b7c1f
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000002b7c17
- (id)reversedAction;	// IMP=0x00000000002b7cea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002b7cc8
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;	// IMP=0x00000000002b7c74
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;	// IMP=0x00000000002b7c38
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002b7ba7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002b7b1f
- (id)init;	// IMP=0x00000000002b7ae0

@end
