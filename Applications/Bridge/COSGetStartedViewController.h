//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSWelcomeOptinViewController.h>

@class COSWatchUnpairInstructionsController, MCProfileConnection, NSString, NSTimer, UIButton, UIImageView;
@protocol COSGetStartedViewControllerDelegate;

@interface COSGetStartedViewController : BPSWelcomeOptinViewController
{
    _Bool _didRegisterNRObserver;	// 8 = 0x8
    _Bool _showMigrationLayout;	// 9 = 0x9
    _Bool _isAutomationUIEnabled;	// 10 = 0xa
    _Bool _pairingInfrastructureIsBusy;	// 11 = 0xb
    id <COSGetStartedViewControllerDelegate> _getStartedDelegate;	// 16 = 0x10
    unsigned long long _radioState;	// 24 = 0x18
    NSTimer *_welcomeTextUpdater;	// 32 = 0x20
    MCProfileConnection *_mcConnection;	// 40 = 0x28
    UIImageView *_marketingBannerImage;	// 48 = 0x30
    UIButton *_automationButton;	// 56 = 0x38
    NSString *_desiredImageName;	// 64 = 0x40
    NSString *_fallbackImageName;	// 72 = 0x48
    COSWatchUnpairInstructionsController *_unpairInstructions;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000039077
@property(retain, nonatomic) COSWatchUnpairInstructionsController *unpairInstructions; // @synthesize unpairInstructions=_unpairInstructions;
@property(retain, nonatomic) NSString *fallbackImageName; // @synthesize fallbackImageName=_fallbackImageName;
@property(retain, nonatomic) NSString *desiredImageName; // @synthesize desiredImageName=_desiredImageName;
@property(retain, nonatomic) UIButton *automationButton; // @synthesize automationButton=_automationButton;
@property(retain, nonatomic) UIImageView *marketingBannerImage; // @synthesize marketingBannerImage=_marketingBannerImage;
@property(retain, nonatomic) MCProfileConnection *mcConnection; // @synthesize mcConnection=_mcConnection;
@property(retain, nonatomic) NSTimer *welcomeTextUpdater; // @synthesize welcomeTextUpdater=_welcomeTextUpdater;
@property(nonatomic) unsigned long long radioState; // @synthesize radioState=_radioState;
@property(nonatomic) _Bool pairingInfrastructureIsBusy; // @synthesize pairingInfrastructureIsBusy=_pairingInfrastructureIsBusy;
@property(nonatomic) _Bool isAutomationUIEnabled; // @synthesize isAutomationUIEnabled=_isAutomationUIEnabled;
@property(nonatomic) _Bool showMigrationLayout; // @synthesize showMigrationLayout=_showMigrationLayout;
@property(nonatomic) _Bool didRegisterNRObserver; // @synthesize didRegisterNRObserver=_didRegisterNRObserver;
@property(nonatomic) __weak id <COSGetStartedViewControllerDelegate> getStartedDelegate; // @synthesize getStartedDelegate=_getStartedDelegate;
- (void)nanoRegistryStatusChanged:(id)arg1;	// IMP=0x0010000000038d50
- (void)showConnectivityAlert;	// IMP=0x0010000000038b07
- (void)presentUnpairingViewControllerAnimated:(_Bool)arg1;	// IMP=0x0010000000038a91
- (void)_unregisterNRObserver;	// IMP=0x0010000000038a31
- (void)_registerNRObserver;	// IMP=0x001000000003895a
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x00100000000388ea
- (void)updateRadioStateForNotification:(id)arg1;	// IMP=0x00100000000388d8
- (void)_logConnectionDescription;	// IMP=0x00100000000388d2
- (void)updateRadioState;	// IMP=0x00100000000388c0
- (void)updateUIState;	// IMP=0x0010000000038884
- (void)stopUpdatingWelcomeText;	// IMP=0x00100000000386c7
- (void)startUpdatingWelcomeText;	// IMP=0x0010000000038586
- (void)updateWelcomeText;	// IMP=0x0010000000038574
- (void)_tappedInternalManualMode:(id)arg1;	// IMP=0x0010000000038509
- (void)learnMoreButtonPressed:(id)arg1;	// IMP=0x00100000000384c6
- (void)alternateButtonPressed:(id)arg1;	// IMP=0x00100000000384aa
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x001000000003842b
- (id)learnMoreButtonTitle;	// IMP=0x00100000000383bf
- (id)alternateButtonTitle;	// IMP=0x0010000000038344
- (id)suggestedButtonTitle;	// IMP=0x001000000003826b
- (id)detailString;	// IMP=0x00100000000381dd
- (id)titleString;	// IMP=0x00100000000380b7
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000038031
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000037e17
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000037c25
- (id)_getUnpairInstructions;	// IMP=0x0010000000037be4
- (void)updateImagesWithAnimation;	// IMP=0x00100000000378bb
- (void)viewDidLoad;	// IMP=0x0010000000036fdc
- (void)dealloc;	// IMP=0x0010000000036f35
- (id)init;	// IMP=0x0010000000036d6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

