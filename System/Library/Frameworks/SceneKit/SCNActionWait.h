//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

__attribute__((visibility("hidden")))
@interface SCNActionWait : SCNAction
{
    struct SCNCActionWait *_mycaction;	// 8 = 0x8
}

+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;	// IMP=0x00600000000ab9f4
+ (id)waitForDuration:(double)arg1;	// IMP=0x00600000000ab9b3
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000ab9ab
- (id)reversedAction;	// IMP=0x00000000000aba52
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ab97c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ab8c7
- (id)init;	// IMP=0x00000000000ab812

@end
