//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class UIDelayedAction;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSelectionDelayGestureRecognizer : UIGestureRecognizer
{
    UIDelayedAction *_delayedAction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000043c40
@property(readonly, nonatomic) UIDelayedAction *delayedAction; // @synthesize delayedAction=_delayedAction;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000043c18
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000043c01
- (void)_timerSatisfied;	// IMP=0x0000000000043bea
- (void)reset;	// IMP=0x0000000000043b8b
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000043b36

@end
