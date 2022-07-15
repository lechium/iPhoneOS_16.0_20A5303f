//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSNumber, NSString, SKArcadeSubscribeViewController;

@interface ServiceOcelotUpsellViewController : SBUIRemoteAlertServiceViewController
{
    SKArcadeSubscribeViewController *_childViewController;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSNumber *_itemID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000007e85
@property(retain, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) SKArcadeSubscribeViewController *childViewController; // @synthesize childViewController=_childViewController;
- (void)didFinishWithError:(id)arg1;	// IMP=0x0010000000007c6e
- (void)_dismissViewService;	// IMP=0x0010000000007bca
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007bb8
- (void)handleHomeButtonPressed;	// IMP=0x0010000000007ba6
- (void)handleButtonActions:(id)arg1;	// IMP=0x0010000000007a53
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007666
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x001000000000760a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
