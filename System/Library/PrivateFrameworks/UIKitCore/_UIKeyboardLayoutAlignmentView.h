//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface _UIKeyboardLayoutAlignmentView : UIView
{
    struct CGRect lastKnownKeyboardRect;	// 8 = 0x8
    NSLayoutConstraint *bottomConstraint;	// 40 = 0x28
    NSLayoutConstraint *widthConstraint;	// 48 = 0x30
    NSLayoutConstraint *heightConstraint;	// 56 = 0x38
    NSLayoutConstraint *disambiguatingLeftConstraint;	// 64 = 0x40
    _Bool _automaticKeyboardFrameTrackingDisabled;	// 72 = 0x48
}

+ (struct CGRect)_endFrameForNotification:(id)arg1 inView:(id)arg2;	// IMP=0x00600000007f6c9d
+ (_Bool)_shouldIgnoreFrameChangeNotification:(id)arg1 inView:(id)arg2;	// IMP=0x00600000007f6b42
+ (struct CGRect)_frameInBoundsForKeyboardFrame:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x00600000007f682e
- (void).cxx_destruct;	// IMP=0x00000000007f7afa
@property(nonatomic) _Bool automaticKeyboardFrameTrackingDisabled; // @synthesize automaticKeyboardFrameTrackingDisabled=_automaticKeyboardFrameTrackingDisabled;
- (void)_startObservingKeyboardNotificationsForScreen:(id)arg1;	// IMP=0x00000000007f7a53
- (void)_stopObservingKeyboardNotifications;	// IMP=0x00000000007f79f3
- (void)dealloc;	// IMP=0x00000000007f79b5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000007f793f
- (void)_removeConstraints;	// IMP=0x00000000007f787b
- (void)_matchInitialKeyboardFrame;	// IMP=0x00000000007f7772
- (void)_createConstraints;	// IMP=0x00000000007f7535
- (void)didMoveToWindow;	// IMP=0x00000000007f7507
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000007f7488
- (void)_keyboardChanged:(id)arg1;	// IMP=0x00000000007f7476
- (void)_updateConstraintsForKeyboardNotification:(id)arg1;	// IMP=0x00000000007f6efc
- (_Bool)_shouldOverrideAnimationForFrameChangeNotification:(id)arg1;	// IMP=0x00000000007f6c22
- (void)_updateConstraintsToMatchKeyboardFrame:(struct CGRect)arg1;	// IMP=0x00000000007f6a41
- (struct CGRect)_frameInBoundsForKeyboardFrame:(struct CGRect)arg1;	// IMP=0x00000000007f69e2

@end

