//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CNContact, LUIPrivacyView, LUIUserAvatarView, MTLumaDodgePillView, NSString, SBUICallToActionLabel, UIActivityIndicatorView, UILabel;

@interface LUIDashBoardView : UIView
{
    _Bool _callToActionLabelEnabled;	// 8 = 0x8
    _Bool _gettingReadyViewEnabled;	// 9 = 0x9
    NSString *_gettingReadyString;	// 16 = 0x10
    NSString *_subtitleString;	// 24 = 0x18
    UILabel *_greetingLabel;	// 32 = 0x20
    UILabel *_subtitleLabel;	// 40 = 0x28
    UILabel *_legalTextLabel;	// 48 = 0x30
    LUIPrivacyView *_privacyView;	// 56 = 0x38
    LUIUserAvatarView *_userAvatarView;	// 64 = 0x40
    SBUICallToActionLabel *_callToActionLabel;	// 72 = 0x48
    NSString *_callToActionLabelText;	// 80 = 0x50
    UIActivityIndicatorView *_spinner;	// 88 = 0x58
    MTLumaDodgePillView *_dynamicHomeAffordance;	// 96 = 0x60
    CNContact *_contact;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000000330fc
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) MTLumaDodgePillView *dynamicHomeAffordance; // @synthesize dynamicHomeAffordance=_dynamicHomeAffordance;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(copy, nonatomic) NSString *callToActionLabelText; // @synthesize callToActionLabelText=_callToActionLabelText;
@property(retain, nonatomic) SBUICallToActionLabel *callToActionLabel; // @synthesize callToActionLabel=_callToActionLabel;
@property(retain, nonatomic) LUIUserAvatarView *userAvatarView; // @synthesize userAvatarView=_userAvatarView;
@property(retain, nonatomic) LUIPrivacyView *privacyView; // @synthesize privacyView=_privacyView;
@property(retain, nonatomic) UILabel *legalTextLabel; // @synthesize legalTextLabel=_legalTextLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *greetingLabel; // @synthesize greetingLabel=_greetingLabel;
@property(retain, nonatomic) NSString *subtitleString; // @synthesize subtitleString=_subtitleString;
@property(retain, nonatomic) NSString *gettingReadyString; // @synthesize gettingReadyString=_gettingReadyString;
@property(nonatomic) _Bool gettingReadyViewEnabled; // @synthesize gettingReadyViewEnabled=_gettingReadyViewEnabled;
@property(nonatomic, getter=isCallToActionLabelEnabled) _Bool callToActionLabelEnabled; // @synthesize callToActionLabelEnabled=_callToActionLabelEnabled;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0010000000032f59
- (id)_animationKeyForKeyPath:(id)arg1 iteration:(unsigned long long)arg2 reset:(_Bool)arg3;	// IMP=0x0010000000032f23
- (void)_removeNormalAnimationsForKeyPath:(id)arg1 onLayer:(id)arg2;	// IMP=0x0010000000032e96
- (void)_removeResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;	// IMP=0x0010000000032e16
- (void)_addResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;	// IMP=0x0010000000032be3
- (void)_addRepeatedAnimationWithProvider:(CDUnknownBlockType)arg1 animationDuration:(double)arg2 toLayer:(id)arg3;	// IMP=0x0010000000032911
- (id)_textAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2;	// IMP=0x0010000000032839
- (id)_textPositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2;	// IMP=0x0010000000032641
- (void)_addTextResetAnimation;	// IMP=0x00100000000325ac
- (void)_addTextAnimation;	// IMP=0x0010000000032358
- (struct CGRect)_homeAffordanceRestingFrame;	// IMP=0x001000000003222e
- (void)_addHomeAffordanceResetAnimation;	// IMP=0x00100000000321af
- (void)_addHomeAffordanceAnimation;	// IMP=0x0010000000031fc3
- (id)_homeAffordancePositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2;	// IMP=0x0010000000031dd0
- (void)stopProgressAnimation;	// IMP=0x0010000000031d4a
- (void)startProgressAnimation;	// IMP=0x0010000000031cd8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000031c3d
- (void)_setupDynamicHomeAffordance;	// IMP=0x0010000000031a40
- (id)_legalString;	// IMP=0x00100000000318dd
- (void)_hideCallToAction;	// IMP=0x0010000000031468
- (void)_showCallToAction;	// IMP=0x00100000000313e6
- (void)_addTeachableMomentsResetAnimation;	// IMP=0x0010000000031397
- (void)_addTeachableMomentsAnimation;	// IMP=0x0010000000031369
- (void)didMoveToWindow;	// IMP=0x00100000000312f8
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00100000000312bc
- (void)setUser:(id)arg1 isTemporarySession:(_Bool)arg2;	// IMP=0x00100000000305ac
- (void)applyStyle:(id)arg1;	// IMP=0x00100000000302ac
- (id)_topConstraints;	// IMP=0x001000000002fa26
- (void)layoutSubviews;	// IMP=0x001000000002f36e
- (void)activateConstraints;	// IMP=0x001000000002f31e
- (void)dealloc;	// IMP=0x001000000002f2de
- (void)commonInit;	// IMP=0x001000000002f0d6
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002f08a
- (id)initWithFrame:(struct CGRect)arg1 callToActionLabelText:(id)arg2;	// IMP=0x001000000002efea
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000002efd6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
