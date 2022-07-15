//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSAnimationFenceHandle, NSString;

__attribute__((visibility("hidden")))
@interface _UIKeyboardUIInformation : NSObject
{
    _Bool _keyboardOnScreen;	// 8 = 0x8
    _Bool _animated;	// 9 = 0x9
    _Bool _tracking;	// 10 = 0xa
    _Bool _isLocal;	// 11 = 0xb
    BKSAnimationFenceHandle *_animationFence;	// 16 = 0x10
    NSString *_currentInputMode;	// 24 = 0x18
    long long _orientation;	// 32 = 0x20
    struct CGRect _keyboardPosition;	// 40 = 0x28
}

+ (id)animationFence;	// IMP=0x00100000014edbfc
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000014eda54
- (void).cxx_destruct;	// IMP=0x00000000014edcdc
@property(readonly) long long orientation; // @synthesize orientation=_orientation;
@property(copy, nonatomic) NSString *currentInputMode; // @synthesize currentInputMode=_currentInputMode;
@property _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(readonly) _Bool tracking; // @synthesize tracking=_tracking;
@property(readonly) _Bool animated; // @synthesize animated=_animated;
@property(readonly) _Bool keyboardOnScreen; // @synthesize keyboardOnScreen=_keyboardOnScreen;
@property(readonly, copy) BKSAnimationFenceHandle *animationFence; // @synthesize animationFence=_animationFence;
@property(readonly) struct CGRect keyboardPosition; // @synthesize keyboardPosition=_keyboardPosition;
- (void)resetAnimationFencing;	// IMP=0x00000000014edc15
- (id)description;	// IMP=0x00000000014eda5c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000014ed86e
- (id)copyWithoutFence;	// IMP=0x00000000014ed770
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014ed67d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000014ed4d4
- (id)initWithKeyboardFrame:(struct CGRect)arg1 onScreen:(_Bool)arg2 animated:(_Bool)arg3 tracking:(_Bool)arg4 orientation:(long long)arg5 fence:(id)arg6;	// IMP=0x00000000014ed428
- (id)initWithKeyboardFrame:(struct CGRect)arg1 onScreen:(_Bool)arg2 animated:(_Bool)arg3 tracking:(_Bool)arg4 fence:(id)arg5;	// IMP=0x00000000014ed343
- (id)initWithKeyboardFrame:(struct CGRect)arg1 onScreen:(_Bool)arg2 animated:(_Bool)arg3 tracking:(_Bool)arg4 orientation:(long long)arg5 wantsFence:(_Bool)arg6;	// IMP=0x00000000014ed261
- (id)initWithKeyboardFrame:(struct CGRect)arg1 onScreen:(_Bool)arg2 animated:(_Bool)arg3 tracking:(_Bool)arg4 wantsFence:(_Bool)arg5;	// IMP=0x00000000014ed14a

@end
