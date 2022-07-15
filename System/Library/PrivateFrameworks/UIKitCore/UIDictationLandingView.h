//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CADisplayLink, NSOperation, NSString, UITextRange;
@protocol UITextCursorAssertion;

__attribute__((visibility("hidden")))
@interface UIDictationLandingView : UIView
{
    UITextRange *_range;	// 8 = 0x8
    id _placeholder;	// 16 = 0x10
    _Bool _didHaveText;	// 24 = 0x18
    _Bool _willInsertResult;	// 25 = 0x19
    double _angle;	// 32 = 0x20
    double _diameter;	// 40 = 0x28
    CADisplayLink *_displayLink;	// 48 = 0x30
    double _startTime;	// 56 = 0x38
    double _shrinkStartTime;	// 64 = 0x40
    _Bool _shrinking;	// 72 = 0x48
    NSOperation *_afterShrinkCompletionInvocation;	// 80 = 0x50
    id <UITextCursorAssertion> _blinkAssertion;	// 88 = 0x58
}

+ (long long)fallbackPlaceholderLength;	// IMP=0x0010000000adfa5b
+ (id)activeInstance;	// IMP=0x0010000000adfa4a
+ (id)sharedInstance;	// IMP=0x0010000000adf9d2
+ (double)widthForLineHeight:(double)arg1;	// IMP=0x0010000000adf972
+ (double)diameterForLineHeight:(double)arg1;	// IMP=0x0010000000adf954
- (void).cxx_destruct;	// IMP=0x0000000000ae206b
@property(retain, nonatomic) id <UITextCursorAssertion> blinkAssertion; // @synthesize blinkAssertion=_blinkAssertion;
@property(nonatomic) _Bool willInsertResult; // @synthesize willInsertResult=_willInsertResult;
- (id)_timingFunctionForAnimation;	// IMP=0x0000000000ae2003
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0000000000ae1fe7
- (double)fadeOutDuration;	// IMP=0x0000000000ae1f90
- (void)stopLandingForError;	// IMP=0x0000000000ae1b13
- (void)errorShakeDidFinish;	// IMP=0x0000000000ae1a2b
- (_Bool)hasActivePlaceholder;	// IMP=0x0000000000ae1a16
- (void)stopLanding;	// IMP=0x0000000000ae16ea
- (void)startLandingIfNecessary;	// IMP=0x0000000000ae10b8
- (void)performRemoteSelector:(SEL)arg1;	// IMP=0x0000000000ae0f2d
- (void)startDisplayLinkIfNecessary;	// IMP=0x0000000000ae0c10
- (void)showCursor;	// IMP=0x0000000000ae0abd
- (void)hideCursor;	// IMP=0x0000000000ae0972
- (_Bool)delegateWasEmpty;	// IMP=0x0000000000ae094c
- (void)updatePosition;	// IMP=0x0000000000ae062f
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000ae0067
- (void)advanceLanding:(id)arg1;	// IMP=0x0000000000adfd92
- (void)shrinkWithCompletion:(id)arg1;	// IMP=0x0000000000adfc48
- (void)rotateBy:(double)arg1;	// IMP=0x0000000000adfbe0
- (void)clearRotation;	// IMP=0x0000000000adfb82
- (void)dealloc;	// IMP=0x0000000000adfb44
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000adfa74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
