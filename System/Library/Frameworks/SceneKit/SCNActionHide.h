//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

__attribute__((visibility("hidden")))
@interface SCNActionHide : SCNAction
{
    struct SCNCActionHide *_mycaction;	// 8 = 0x8
}

+ (id)unhide;	// IMP=0x006000000000c9bc
+ (id)hide;	// IMP=0x006000000000c974
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000000c96c
- (id)parameters;	// IMP=0x000000000000cacb
- (id)reversedAction;	// IMP=0x000000000000ca7f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000ca04
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000c90b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000c814
- (id)init;	// IMP=0x000000000000c734

@end
