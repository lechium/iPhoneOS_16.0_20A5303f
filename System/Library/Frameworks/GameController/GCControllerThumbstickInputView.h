//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class GCControllerDirectionPad, UITouch, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface GCControllerThumbstickInputView : UIView
{
    GCControllerDirectionPad *_dpadInput;	// 8 = 0x8
    UIVisualEffectView *_background;	// 16 = 0x10
    UIVisualEffectView *_touchTarget;	// 24 = 0x18
    UITouch *_currentTouch;	// 32 = 0x20
    struct CGPoint _touchStartPos;	// 40 = 0x28
    struct CGPoint _touchPrevPos;	// 56 = 0x38
    float _prevThumbstickMagnitude;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000087e3d
- (void)initButtons;	// IMP=0x0000000000087a0c
- (void)setThumbstickPos:(struct CGPoint)arg1 center:(struct CGPoint)arg2;	// IMP=0x0000000000087749
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000087737
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000875c1
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000087529
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000873e9
- (void)processTouch:(id)arg1;	// IMP=0x00000000000870a7
- (void)setActsAsTouchpad:(_Bool)arg1;	// IMP=0x000000000008708a
- (_Bool)actsAsTouchpad;	// IMP=0x000000000008706d
@property(retain) GCControllerDirectionPad *dpadInput;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000086fa5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000086ea4
- (id)init;	// IMP=0x0000000000086e1b

@end

