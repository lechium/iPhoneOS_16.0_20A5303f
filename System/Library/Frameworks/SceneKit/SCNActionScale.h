//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

__attribute__((visibility("hidden")))
@interface SCNActionScale : SCNAction
{
    struct SCNCActionScale *_mycaction;	// 8 = 0x8
}

+ (id)scaleTo:(double)arg1 duration:(double)arg2;	// IMP=0x00600000002ae5fd
+ (id)scaleBy:(double)arg1 duration:(double)arg2;	// IMP=0x00600000002ae565
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000002ae55d
- (_Bool)isRelative;	// IMP=0x00000000002ae82f
- (id)parameters;	// IMP=0x00000000002ae7b3
- (id)reversedAction;	// IMP=0x00000000002ae708
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002ae670
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002ae3d7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002ae19b
- (id)init;	// IMP=0x00000000002ae0b2

@end

