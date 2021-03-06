//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIView;
@protocol LUIProgressAnimationProtocol;

@interface LUIAssignedStudentViewController
{
    _Bool _isFetchingAuthMode;	// 8 = 0x8
}

@property(nonatomic) _Bool isFetchingAuthMode; // @synthesize isFetchingAuthMode=_isFetchingAuthMode;
- (void)_startUnlockingDevice;	// IMP=0x001000000001e45b
- (void)_fetchAuthMode;	// IMP=0x001000000001e1ea
- (_Bool)shouldUpdateStudentStatusWithClassroom;	// IMP=0x001000000001e1e2
- (void)presentPasscodeViewControllerForUser:(id)arg1 passcodeViewDidAppearAction:(CDUnknownBlockType)arg2 passcodeCanceledAction:(CDUnknownBlockType)arg3 passcodeEnteredAction:(CDUnknownBlockType)arg4;	// IMP=0x001000000001e10e
@property(readonly, nonatomic) UIView<LUIProgressAnimationProtocol> *progressView;
- (void)bottomLeftVibrantButtonTapped:(id)arg1;	// IMP=0x001000000001e036
- (id)callToActionLabelText;	// IMP=0x001000000001dfa5
- (void)userActionTriggered;	// IMP=0x001000000001df93
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000001dea0
- (void)viewDidLoad;	// IMP=0x001000000001dde4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

