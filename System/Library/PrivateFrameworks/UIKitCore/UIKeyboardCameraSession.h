//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIKeyboardCameraBasePresentationController, UIKeyboardCameraViewController, UIResponder, UITextInputSessionActionAnalytics;
@protocol UIKeyInput, UIViewControllerAnimatedTransitioning;

__attribute__((visibility("hidden")))
@interface UIKeyboardCameraSession : NSObject
{
    UIKeyboardCameraViewController *_keyboardCameraViewController;	// 8 = 0x8
    UIKeyboardCameraBasePresentationController *_presentationController;	// 16 = 0x10
    id <UIViewControllerAnimatedTransitioning> _animationController;	// 24 = 0x18
    _Bool _didFindText;	// 32 = 0x20
    NSString *_keyboardCameraCandidateString;	// 40 = 0x28
    id _sender;	// 48 = 0x30
    _Bool _presentingOverKeyboard;	// 56 = 0x38
    _Bool _isTextInputResponder;	// 57 = 0x39
    _Bool _isWebKitResponder;	// 58 = 0x3a
    _Bool _respondsToKeyboardInputShouldInsertText;	// 59 = 0x3b
    _Bool _isSingleLineDocument;	// 60 = 0x3c
    _Bool _didCleanup;	// 61 = 0x3d
    _Bool _isSecureFieldEditor;	// 62 = 0x3e
    _Bool _shouldSuppressSoftwareKeyboard;	// 63 = 0x3f
    _Bool _shouldResignFirstResponderWhenDone;	// 64 = 0x40
    UITextInputSessionActionAnalytics *_sessionAnalytics;	// 72 = 0x48
    UIResponder<UIKeyInput> *_responder;	// 80 = 0x50
}

+ (_Bool)shouldShowTextSuggestionForResponder:(id)arg1;	// IMP=0x0010000000b2cc3f
+ (id)keyboardCameraContentTypeForResponder:(id)arg1;	// IMP=0x0010000000b2cb0d
+ (id)_textContentTypesForDataDetection;	// IMP=0x0010000000b2ca12
+ (_Bool)updatesGuideDuringRotation;	// IMP=0x0010000000b2c915
+ (_Bool)isEnabled;	// IMP=0x0010000000b2c8fc
+ (id)activeSession;	// IMP=0x0010000000b2c8eb
+ (id)sharedSession;	// IMP=0x0010000000b2c8ae
- (void).cxx_destruct;	// IMP=0x0000000000b2e539
@property(readonly, nonatomic) UIResponder<UIKeyInput> *responder; // @synthesize responder=_responder;
@property(nonatomic) _Bool shouldSuppressSoftwareKeyboard; // @synthesize shouldSuppressSoftwareKeyboard=_shouldSuppressSoftwareKeyboard;
- (void)handleRemoteSelfDestruct;	// IMP=0x0000000000b2e440
- (void)dimmingViewWasTapped:(id)arg1;	// IMP=0x0000000000b2e42e
- (long long)_overrideTextInputSource;	// IMP=0x0000000000b2e423
- (id)_sessionIdentifier;	// IMP=0x0000000000b2e3cc
- (id)_delegateAsResponder;	// IMP=0x0000000000b2e3be
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000000b2e34b
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0000000000b2e233
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x0000000000b2e208
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000000b2e1dd
- (void)keyboardCameraDidCancel;	// IMP=0x0000000000b2e1ad
- (void)keyboardCameraDidAccept;	// IMP=0x0000000000b2e17a
- (void)keyboardCameraDidUpdateString:(id)arg1;	// IMP=0x0000000000b2df9f
- (void)_dismissKeyboardCamera;	// IMP=0x0000000000b2de0b
- (void)_cleanupKeyboardCameraAndShouldInsertText:(_Bool)arg1;	// IMP=0x0000000000b2db36
- (void)_updatePreviewWithString:(id)arg1;	// IMP=0x0000000000b2da34
- (id)_textInputResponder;	// IMP=0x0000000000b2da13
- (void)_addObservers;	// IMP=0x0000000000b2d8e9
- (void)_inputModeDidChange:(id)arg1;	// IMP=0x0000000000b2d8d7
- (void)_firstResponderDidChange:(id)arg1;	// IMP=0x0000000000b2d842
- (void)_keyboardAboutToHide:(id)arg1;	// IMP=0x0000000000b2d79b
- (void)_didEnterBackground:(id)arg1;	// IMP=0x0000000000b2d789
- (void)_keyboardCameraPreparationDidComplete;	// IMP=0x0000000000b2d4d8
- (void)_show;	// IMP=0x0000000000b2d11e
- (void)_makeResponderEditableIfNecessary;	// IMP=0x0000000000b2d05d
@property(readonly) UITextInputSessionActionAnalytics *sessionAnalytics; // @synthesize sessionAnalytics=_sessionAnalytics;
- (void)dealloc;	// IMP=0x0000000000b2cf99
- (void)showForResponder:(id)arg1 sender:(id)arg2 rtiConfiguration:(id)arg3;	// IMP=0x0000000000b2cc47

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
