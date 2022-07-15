//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSString;

@interface COSFaceTimeLoginViewController
{
    ACAccount *_account;	// 8 = 0x8
}

+ (_Bool)controllerNeedsToRunForBuddyControllerDelegate:(id)arg1;	// IMP=0x00200000000f660d
- (void).cxx_destruct;	// IMP=0x00200000000f71e8
- (id)localizedWaitScreenDescription;	// IMP=0x00100000000f717c
- (double)waitScreenPushGracePeriod;	// IMP=0x00100000000f716e
- (_Bool)holdWithWaitScreen;	// IMP=0x00100000000f70df
- (void)signInFailedWithError:(id)arg1;	// IMP=0x00100000000f709e
- (void)loggedInSuccessfullyWithBuddyControllerDoneBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f6fc4
- (void)checkIfCanReleaseHold;	// IMP=0x00100000000f6d28
- (void)silentSignInStateChanged:(id)arg1;	// IMP=0x00100000000f6c7b
- (void)finishedActivating;	// IMP=0x00100000000f6c69
- (void)didEstablishHold;	// IMP=0x00100000000f6c3b
- (_Bool)holdBeforeDisplaying;	// IMP=0x00100000000f69cc
- (id)activationHoldActivityIdentifier;	// IMP=0x00100000000f6600
- (id)holdActivityIdentifier;	// IMP=0x00100000000f65f3
- (unsigned long long)performanceMonitorCATiming;	// IMP=0x00100000000f65e8
- (id)performanceMonitorActivityName;	// IMP=0x00100000000f65db
- (_Bool)allowSkipping;	// IMP=0x00100000000f65d3
- (_Bool)controllerAllowsNavigatingBackTo;	// IMP=0x00100000000f6590
- (id)detailString;	// IMP=0x00100000000f64f4
- (id)titleString;	// IMP=0x00100000000f6488
- (id)username;	// IMP=0x00100000000f6425
- (id)accountTypeString;	// IMP=0x00100000000f6411
- (id)account;	// IMP=0x00100000000f63fc
- (void)dealloc;	// IMP=0x00100000000f6387
- (id)init;	// IMP=0x00100000000f62e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
