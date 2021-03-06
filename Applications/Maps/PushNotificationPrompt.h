//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSLayoutConstraint, NSString, UIButton, UILabel;

@interface PushNotificationPrompt : UIViewController
{
    CDUnknownBlockType _completion;	// 8 = 0x8
    long long _authorizationStatus;	// 16 = 0x10
    unsigned long long _promptReason;	// 24 = 0x18
    UILabel *_detailLabel;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UIButton *_notNowButton;	// 48 = 0x30
    UIButton *_continueButton;	// 56 = 0x38
    NSArray *_horizontalConstraints;	// 64 = 0x40
    _Bool _horizontalLayoutIsWide;	// 72 = 0x48
    NSLayoutConstraint *_titleToDetailConstraint;	// 80 = 0x50
    NSLayoutConstraint *_notNowToContinueConstraint;	// 88 = 0x58
    NSLayoutConstraint *_continueToBottomConstraint;	// 96 = 0x60
}

+ (_Bool)shouldPromptForLaunch;	// IMP=0x0020000000a3b384
+ (_Bool)shouldRepeatPromptForLaunch;	// IMP=0x0010000000a3b020
+ (void)checkShouldRepeatForUserAction:(CDUnknownBlockType)arg1;	// IMP=0x0010000000a3ac00
- (void).cxx_destruct;	// IMP=0x0020000000a3dfe1
- (_Bool)presentationControllerShouldDismiss:(id)arg1;	// IMP=0x0010000000a3dfd9
- (int)_analyticsTarget;	// IMP=0x0010000000a3dfb6
- (void)continueSelected;	// IMP=0x0010000000a3dd00
- (struct CGSize)preferredContentSize;	// IMP=0x0010000000a3dcb2
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000a3db63
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000a3da9b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000a3da5a
- (void)_updateHorizontalLayoutIfNeeded;	// IMP=0x0010000000a3d8a5
- (void)_setHorizontalLayoutWide:(_Bool)arg1;	// IMP=0x0010000000a3d0d7
- (void)_contentSizeDidChange;	// IMP=0x0010000000a3cf9b
- (void)viewDidLoad;	// IMP=0x0010000000a3b918
- (id)initWithReason:(unsigned long long)arg1 authorizationStatus:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000a3b7e5
- (id)primaryButtonTitle;	// IMP=0x0010000000a3b710
- (id)detailText;	// IMP=0x0010000000a3b664
- (id)titleString;	// IMP=0x0010000000a3b52e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

