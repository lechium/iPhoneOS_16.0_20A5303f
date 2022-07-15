//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

__attribute__((visibility("hidden")))
@interface _UIFocusEngineJoystickGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _stickPosition;	// 8 = 0x8
    struct CGPoint _previousStickPosition;	// 24 = 0x18
}

@property(readonly, nonatomic) struct CGPoint previousStickPosition; // @synthesize previousStickPosition=_previousStickPosition;
@property(readonly, nonatomic) struct CGPoint stickPosition; // @synthesize stickPosition=_stickPosition;
- (void)_calculateStickPositionFromPresses:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006f5e0e
- (void)reset;	// IMP=0x00000000006f5e08
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006f5d9c
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006f5d30
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006f5cc4
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006f5c58
- (_Bool)_shouldReceivePress:(id)arg1;	// IMP=0x00000000006f5be0
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000006f5b8c

@end
