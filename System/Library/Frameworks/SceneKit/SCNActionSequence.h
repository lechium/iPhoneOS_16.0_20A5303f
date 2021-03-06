//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SCNActionSequence : SCNAction
{
    void *_mycaction;	// 8 = 0x8
    NSArray *_actions;	// 16 = 0x10
}

+ (id)sequenceWithActions:(id)arg1;	// IMP=0x006000000027effd
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000027eed4
- (id)reversedAction;	// IMP=0x000000000027f643
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027f58b
- (_Bool)isCustom;	// IMP=0x000000000027eedc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000027ee35
- (void)dealloc;	// IMP=0x000000000027edf3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000027ea17
- (id)init;	// IMP=0x000000000027e92c

@end

