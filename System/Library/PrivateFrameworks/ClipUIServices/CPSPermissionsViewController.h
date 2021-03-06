//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CPSPermissionItemView, NSString, UIImage, UIImageView, UIView;
@protocol CPSPermissionsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CPSPermissionsViewController : UIViewController
{
    NSString *_appName;	// 8 = 0x8
    UIImageView *_backgroundImageView;	// 16 = 0x10
    UIView *_optionsContainer;	// 24 = 0x18
    CPSPermissionItemView *_notificationItemView;	// 32 = 0x20
    CPSPermissionItemView *_locationConfirmationItemView;	// 40 = 0x28
    _Bool _backgroundImageNeedsUpdate;	// 48 = 0x30
    UIImage *_backgroundImage;	// 56 = 0x38
    id <CPSPermissionsViewControllerDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000022128
@property(nonatomic) __weak id <CPSPermissionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(readonly, nonatomic) _Bool allowsPullToDismiss;
- (void)updatePreferredContentSizeForCardWidth:(double)arg1;	// IMP=0x000000000002206f
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000022067
@property(nonatomic) _Bool locationConfirmationPermissionEnabled;
@property(nonatomic) _Bool notificationPermissionEnabled;
- (void)doneTapped;	// IMP=0x0000000000021f56
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000021c78
- (void)setUpOptionsContainer;	// IMP=0x0000000000021792
- (void)viewDidLoad;	// IMP=0x0000000000020114
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001ff7b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001ff2e
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000001fed1
- (id)init;	// IMP=0x000000000001fe8d
- (id)initWithAppName:(id)arg1 backgroundImage:(id)arg2;	// IMP=0x000000000001fbcf
- (void)loadView;	// IMP=0x000000000001fb96

// Remaining properties
@property(readonly, nonatomic) long long cardStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

