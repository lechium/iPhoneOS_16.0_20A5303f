//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, UIActivityIndicatorView, UILabel;
@protocol COSBuddyControllerDelegate;

@interface COSActivationViewController : UIViewController
{
    id <COSBuddyControllerDelegate> _delegate;	// 8 = 0x8
    UILabel *_infoLabel;	// 16 = 0x10
    UIActivityIndicatorView *_spinner;	// 24 = 0x18
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x0020000000111afd
- (void).cxx_destruct;	// IMP=0x002000000011227d
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000111f6b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000111f22
- (void)viewDidLoad;	// IMP=0x0010000000111b24
- (_Bool)controllerAllowsNavigatingBackFrom;	// IMP=0x0010000000111b1c
- (void)back:(id)arg1;	// IMP=0x001000000011168d
- (void)enteredCompatibilityState:(id)arg1;	// IMP=0x00100000001114ef
- (void)checkActivationState;	// IMP=0x00100000001113ab
- (void)completedActivation:(id)arg1;	// IMP=0x001000000011133c
- (void)startActivating;	// IMP=0x001000000011129b
- (void)waitForCompatibilityUpdateState;	// IMP=0x00100000001111dc
- (void)postProcessActivation;	// IMP=0x001000000011107c
- (id)init;	// IMP=0x0010000000110fd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
