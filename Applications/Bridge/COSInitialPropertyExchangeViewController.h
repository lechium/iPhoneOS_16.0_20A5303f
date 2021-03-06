//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSObject, NSString;
@protocol COSBuddyControllerDelegate, OS_dispatch_queue;

@interface COSInitialPropertyExchangeViewController : UIViewController
{
    _Bool _canBeginActivating;	// 8 = 0x8
    _Bool _didBeginActivating;	// 9 = 0x9
    id <COSBuddyControllerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_npsQueue;	// 24 = 0x18
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x0020000000050ef7
- (void).cxx_destruct;	// IMP=0x0020000000052ae8
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *npsQueue; // @synthesize npsQueue=_npsQueue;
@property(nonatomic) _Bool didBeginActivating; // @synthesize didBeginActivating=_didBeginActivating;
@property(nonatomic) _Bool canBeginActivating; // @synthesize canBeginActivating=_canBeginActivating;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endPerformancePhases;	// IMP=0x00100000000529af
- (void)completedHoldTasks;	// IMP=0x0010000000052893
- (void)deferredActivationCompleted;	// IMP=0x001000000005278d
- (void)watchDidSelectLanguageAndLocale:(unsigned short)arg1;	// IMP=0x0010000000052352
- (void)tellWatchToDoLanguageAndLocalePrep;	// IMP=0x00100000000520ea
- (void)completedActivationPhase;	// IMP=0x0010000000052045
- (void)activationDeferredForUserAction;	// IMP=0x0010000000051fa0
- (void)_prepareForLanguageChangePostActivation;	// IMP=0x0010000000051ea6
- (void)beginActivationIfPossible;	// IMP=0x0010000000051ab8
- (void)completedInitialProperyExchangePhase;	// IMP=0x0010000000051613
- (id)holdActivityIdentifier;	// IMP=0x00100000000515b5
- (_Bool)controllerAllowsNavigatingBackTo;	// IMP=0x00100000000515ad
- (id)localizedWaitScreenDescription;	// IMP=0x00100000000514e5
- (void)enteredCompatibilityState:(id)arg1;	// IMP=0x0010000000051383
- (double)waitScreenPushGracePeriod;	// IMP=0x00100000000511b3
- (_Bool)holdWithWaitScreen;	// IMP=0x00100000000511ab
- (_Bool)holdBeforeDisplaying;	// IMP=0x0010000000051125
- (void)dealloc;	// IMP=0x0010000000051059

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

