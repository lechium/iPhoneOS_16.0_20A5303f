//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class COSAppleIDAuthController, NSDictionary, NSSManager, NSString;
@protocol COSBuddyControllerDelegate;

@interface COSTinkerFamilyCirclePostcheckViewController : UIViewController
{
    id <COSBuddyControllerDelegate> _delegate;	// 8 = 0x8
    NSDictionary *_familyMemberAccount;	// 16 = 0x10
    NSSManager *_nssManager;	// 24 = 0x18
    COSAppleIDAuthController *_authController;	// 32 = 0x20
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x00200000000cb92a
- (void).cxx_destruct;	// IMP=0x00200000000ccb1b
@property(retain, nonatomic) COSAppleIDAuthController *authController; // @synthesize authController=_authController;
@property(retain, nonatomic) NSSManager *nssManager; // @synthesize nssManager=_nssManager;
@property(copy, nonatomic) NSDictionary *familyMemberAccount; // @synthesize familyMemberAccount=_familyMemberAccount;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)holdActivityIdentifier;	// IMP=0x00100000000cca89
- (_Bool)controllerAllowsNavigatingBackTo;	// IMP=0x00100000000cca81
- (void)startPostCheck;	// IMP=0x00100000000cbf9a
- (void)presentAlertAndFallbackToSignInForError:(id)arg1;	// IMP=0x00100000000cbcdc
- (void)didEstablishHold;	// IMP=0x00100000000cb9b7
- (id)localizedWaitScreenDescription;	// IMP=0x00100000000cb94b
- (double)waitScreenPushGracePeriod;	// IMP=0x00100000000cb942
- (_Bool)holdWithWaitScreen;	// IMP=0x00100000000cb93a
- (_Bool)holdBeforeDisplaying;	// IMP=0x00100000000cb932

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
