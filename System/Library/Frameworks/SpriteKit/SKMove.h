//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKMove : SKAction
{
    struct SKCMove *_mycaction;	// 8 = 0x8
}

+ (id)moveByY:(double)arg1 duration:(double)arg2;	// IMP=0x0060000000010565
+ (id)moveToY:(double)arg1 duration:(double)arg2;	// IMP=0x00600000000104d7
+ (id)moveByX:(double)arg1 duration:(double)arg2;	// IMP=0x0060000000010435
+ (id)moveToX:(double)arg1 duration:(double)arg2;	// IMP=0x00600000000103a5
+ (id)moveToX:(double)arg1 y:(double)arg2 duration:(double)arg3;	// IMP=0x0060000000010313
+ (id)moveTo:(struct CGPoint)arg1 duration:(double)arg2;	// IMP=0x00600000000102fa
+ (id)moveByX:(double)arg1 y:(double)arg2 duration:(double)arg3;	// IMP=0x0060000000010249
+ (id)moveBy:(struct CGPoint)arg1 duration:(double)arg2;	// IMP=0x0060000000010230
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000000f7ca
- (id)reversedAction;	// IMP=0x00000000000106b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000010607
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000fe2f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000f8df
- (id)init;	// IMP=0x000000000000f7d2

@end
