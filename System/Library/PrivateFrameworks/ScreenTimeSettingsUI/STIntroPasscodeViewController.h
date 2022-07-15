//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, STIntroductionViewModel;

__attribute__((visibility("hidden")))
@interface STIntroPasscodeViewController : UIViewController
{
    _Bool _askForRecoveryAppleID;	// 8 = 0x8
    _Bool _childOrNotSignedIntoiCloud;	// 9 = 0x9
    _Bool _numeric;	// 10 = 0xa
    STIntroductionViewModel *_model;	// 16 = 0x10
    NSString *_altDSID;	// 24 = 0x18
    CDUnknownBlockType _continueHandler;	// 32 = 0x20
    long long _passcodeState;	// 40 = 0x28
    NSString *_initialPasscode;	// 48 = 0x30
    unsigned long long _numericLength;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000006b4e4
@property unsigned long long numericLength; // @synthesize numericLength=_numericLength;
@property(getter=isNumeric) _Bool numeric; // @synthesize numeric=_numeric;
@property(retain) NSString *initialPasscode; // @synthesize initialPasscode=_initialPasscode;
@property long long passcodeState; // @synthesize passcodeState=_passcodeState;
@property(readonly, copy) CDUnknownBlockType continueHandler; // @synthesize continueHandler=_continueHandler;
@property(readonly, getter=isChildOrNotSignedIntoiCloud) _Bool childOrNotSignedIntoiCloud; // @synthesize childOrNotSignedIntoiCloud=_childOrNotSignedIntoiCloud;
@property(readonly, copy) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(readonly) _Bool askForRecoveryAppleID; // @synthesize askForRecoveryAppleID=_askForRecoveryAppleID;
@property(readonly) STIntroductionViewModel *model; // @synthesize model=_model;
- (void)passcodeInput:(id)arg1 enteredPasscode:(id)arg2;	// IMP=0x000000000006b3dc
- (void)updatePasscodeType;	// IMP=0x000000000006b315
- (void)_transitionToFirstPasscodePaneWithState:(long long)arg1;	// IMP=0x000000000006b244
- (void)userEnteredPasscode:(id)arg1;	// IMP=0x000000000006a7c6
- (void)nextButtonTapped;	// IMP=0x000000000006a730
- (id)passcodeInputView;	// IMP=0x000000000006a55f
- (void)passcodeTypeChanged:(_Bool)arg1;	// IMP=0x000000000006a511
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000006a466
- (void)viewDidLoad;	// IMP=0x000000000006a35e
- (id)_passcodeView;	// IMP=0x000000000006a34c
- (void)loadView;	// IMP=0x000000000006a2e4
- (id)initWithIntroductionModel:(id)arg1 askForRecoveryAppleID:(_Bool)arg2 altDSID:(id)arg3 isChildOrNotSignedIntoiCloud:(_Bool)arg4 continueHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000006a198

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
