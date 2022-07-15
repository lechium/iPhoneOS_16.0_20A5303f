//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UISwipeActionController, _UIStatesFeedbackGenerator, _UISwipeActionPanGestureRecognizer, _UISwipeDismissalGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UISwipeHandler : NSObject
{
    struct {
        unsigned int didProcessBegan:1;
    } _flags;	// 8 = 0x8
    _UISwipeDismissalGestureRecognizer *_dismissalGestureRecognizer;	// 16 = 0x10
    _UISwipeActionPanGestureRecognizer *_swipeActionPanRecognizer;	// 24 = 0x18
    CDStruct_324b76a9 _currentSwipeConfig;	// 32 = 0x20
    unsigned long long _currentSwipeState;	// 64 = 0x40
    _Bool _resetSwipeWhileInitiating;	// 72 = 0x48
    double _initialTranslation;	// 80 = 0x50
    double _confirmationTranslationAdjustment;	// 88 = 0x58
    _Bool _active;	// 96 = 0x60
    _UIStatesFeedbackGenerator *_swipeFeedbackGenerator;	// 104 = 0x68
    UISwipeActionController *_swipeController;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000fccffc
@property(nonatomic) __weak UISwipeActionController *swipeController; // @synthesize swipeController=_swipeController;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) _UIStatesFeedbackGenerator *swipeFeedbackGenerator; // @synthesize swipeFeedbackGenerator=_swipeFeedbackGenerator;
@property(readonly, nonatomic) unsigned long long currentSwipeState; // @synthesize currentSwipeState=_currentSwipeState;
- (void)_moveSwipedItemToOffset:(double)arg1 animated:(_Bool)arg2 usingSpringWithStiffness:(double)arg3 isTracking:(_Bool)arg4;	// IMP=0x0000000000fccf07
- (CDStruct_b06b0113)_currentSwipeInfoWithTargetOffset:(double)arg1 animated:(_Bool)arg2 usingSpringWithStiffness:(double)arg3;	// IMP=0x0000000000fccc9d
@property(readonly, nonatomic) CDStruct_324b76a9 currentSwipeConfig;
- (_Bool)_delegateWantsToDismissOnTouchDownForGestureRecognizer:(id)arg1;	// IMP=0x0000000000fccbca
- (void)_cancelExistingSwipe;	// IMP=0x0000000000fccb3f
- (void)_cancelExistingSwipeForGestureBeganIfNecessary:(id)arg1;	// IMP=0x0000000000fccacc
- (void)resetSwipe;	// IMP=0x0000000000fcca99
- (void)initiateSwipeWithDirection:(unsigned long long)arg1 configuration:(id)arg2 location:(struct CGPoint)arg3 userInitiated:(_Bool)arg4;	// IMP=0x0000000000fcc958
- (void)_swipeRecognizerEnded:(id)arg1 wasCancelled:(_Bool)arg2;	// IMP=0x0000000000fcc5e7
- (void)_swipeRecognizerChanged:(id)arg1;	// IMP=0x0000000000fcbf07
- (void)_swipeRecognizerBegan:(id)arg1;	// IMP=0x0000000000fcbca7
- (void)_swipeRecognizerDidRecognize:(id)arg1;	// IMP=0x0000000000fcbae9
- (unsigned long long)_directionForGestureRecognizer:(id)arg1;	// IMP=0x0000000000fcba16
- (void)_dismissalRecognizerDidRecognize:(id)arg1;	// IMP=0x0000000000fcb9d3
- (_Bool)gestureRecognizerShouldDismissForTouchUp:(id)arg1;	// IMP=0x0000000000fcb915
- (_Bool)gestureRecognizerShouldDismissForTouchDown:(id)arg1;	// IMP=0x0000000000fcb903
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000fcb786
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000fcb6cf
@property(readonly, nonatomic, getter=isInteracting) _Bool interacting;
- (void)dealloc;	// IMP=0x0000000000fcb5df
- (void)_setUp;	// IMP=0x0000000000fcb435
- (id)initWithSwipeController:(id)arg1;	// IMP=0x0000000000fcb3b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
