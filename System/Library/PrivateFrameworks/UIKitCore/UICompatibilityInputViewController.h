//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIInputViewController.h"

@class NSArray, NSString, UIKeyboard, UIKeyboardInputMode, UILayoutGuide, UIViewController;
@protocol UITextCursorAssertion;

__attribute__((visibility("hidden")))
@interface UICompatibilityInputViewController : UIInputViewController
{
    UIKeyboardInputMode *_inputMode;	// 464 = 0x1d0
    UIKeyboard *_deferredSystemView;	// 472 = 0x1d8
    UIKeyboardInputMode *_incomingExtensionInputMode;	// 480 = 0x1e0
    double _incomingExtensionInputModeTime;	// 488 = 0x1e8
    double _lastSuspendedTime;	// 496 = 0x1f0
    double _currentResumeTime;	// 504 = 0x1f8
    _Bool _shouldRegenerateSizingConstraints;	// 512 = 0x200
    _Bool _shouldSuppressRemoteInputController;	// 513 = 0x201
    _Bool _tearingDownInputController;	// 514 = 0x202
    double _resetInputModeTime;	// 520 = 0x208
    unsigned long long _latestDelayTime;	// 528 = 0x210
    UILayoutGuide *_focusSafeAreaLayoutGuide;	// 536 = 0x218
    UIViewController *_inputController;	// 544 = 0x220
    NSArray *_internalEdgeMatchConstraints;	// 552 = 0x228
    id <UITextCursorAssertion> _blinkAssertion;	// 560 = 0x230
}

+ (id)inputSnapshotViewForInputMode:(id)arg1 orientation:(long long)arg2;	// IMP=0x00100000009a0db9
+ (void)applicationDidReceiveMemoryWarning:(id)arg1;	// IMP=0x00100000009a0da0
+ (_Bool)_requiresProxyInterface;	// IMP=0x00100000009a0446
+ (id)deferredInputModeControllerWithKeyboard:(id)arg1;	// IMP=0x001000000099ff55
+ (id)inputViewControllerWithView:(id)arg1;	// IMP=0x001000000099fd0e
- (void).cxx_destruct;	// IMP=0x00000000009a4f9e
@property(retain, nonatomic) id <UITextCursorAssertion> blinkAssertion; // @synthesize blinkAssertion=_blinkAssertion;
@property(retain, nonatomic) NSArray *internalEdgeMatchConstraints; // @synthesize internalEdgeMatchConstraints=_internalEdgeMatchConstraints;
@property(retain, nonatomic) UIViewController *inputController; // @synthesize inputController=_inputController;
@property(readonly, nonatomic) UILayoutGuide *focusSafeAreaLayoutGuide;
- (void)_tvUpdateAppearanceForUserInterfaceStyle;	// IMP=0x00000000009a4a3c
- (void)viewDidLayoutSubviews;	// IMP=0x00000000009a4992
- (void)didFinishTranslation;	// IMP=0x00000000009a4860
- (void)finishSplitTransition:(_Bool)arg1;	// IMP=0x00000000009a46b1
- (void)willBeginTranslation;	// IMP=0x00000000009a43b7
- (void)didRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x00000000009a4256
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x00000000009a419f
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x00000000009a3fc0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000009a3f15
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000009a3e66
- (id)_keyboardForThisViewController;	// IMP=0x00000000009a3de9
- (id)_keyboard;	// IMP=0x00000000009a3c3d
- (id)childCompatibilityController;	// IMP=0x00000000009a3bc3
- (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;	// IMP=0x00000000009a3afd
- (id)preferredFocusedView;	// IMP=0x00000000009a3aad
- (void)setInputMode:(id)arg1;	// IMP=0x00000000009a203b
- (void)setTearingDownInputController;	// IMP=0x00000000009a202a
- (void)validateInputModeIsDisplayed;	// IMP=0x00000000009a1fe2
- (void)assertCurrentInputModeIfNecessary;	// IMP=0x00000000009a1f10
- (void)resetInputMode;	// IMP=0x00000000009a1e23
- (void)resetInputModeInMainThread;	// IMP=0x00000000009a1ace
- (id)_systemViewControllerForInputMode:(id)arg1;	// IMP=0x00000000009a18bf
- (void)shouldUpdateInputMode:(id)arg1;	// IMP=0x00000000009a1717
- (void)tearDownInputController;	// IMP=0x00000000009a1553
- (void)removeSnapshotView;	// IMP=0x00000000009a13f9
- (void)addSnapshotViewForInputMode:(id)arg1;	// IMP=0x00000000009a1128
- (void)takeSnapshotView;	// IMP=0x00000000009a0e59
- (void)rebuildChildConstraints;	// IMP=0x00000000009a08dc
- (void)generateCompatibleSizeConstraintsIfNecessary;	// IMP=0x00000000009a0755
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x00000000009a06dd
- (void)willResume:(id)arg1;	// IMP=0x00000000009a05eb
- (void)isHosted:(id)arg1;	// IMP=0x00000000009a05ca
- (void)didSuspend:(id)arg1;	// IMP=0x00000000009a04bb
- (void)killIncomingExtension;	// IMP=0x00000000009a044e
- (id)_compatView;	// IMP=0x00000000009a03cc
- (id)_compatibilityController;	// IMP=0x00000000009a035f
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x00000000009a0357
- (_Bool)shouldAutomaticallyForwardRotationMethods;	// IMP=0x00000000009a034f
- (void)dealloc;	// IMP=0x00000000009a02a0
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000009a0298
- (void)loadView;	// IMP=0x00000000009a01f4
- (id)_initAsDeferredController;	// IMP=0x00000000009a006f
- (void)setDeferredSystemView:(id)arg1;	// IMP=0x00000000009a0016

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

