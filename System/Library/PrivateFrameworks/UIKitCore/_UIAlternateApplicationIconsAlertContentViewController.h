//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface _UIAlternateApplicationIconsAlertContentViewController : UIViewController
{
    UILabel *_messageLabel;	// 424 = 0x1a8
}

- (void).cxx_destruct;	// IMP=0x0000000000e2c954
- (void)loadView;	// IMP=0x0000000000e2c3a4
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x0000000000e2c363
- (void)_updateWithContainingAlertControllerVisualStyle;	// IMP=0x0000000000e2c31c
- (void)__updateWithVisualStyle:(id)arg1;	// IMP=0x0000000000e2c244
- (void)_containingAlertControllerDidChangeVisualStyle:(id)arg1;	// IMP=0x0000000000e2c1d6
@property(copy, nonatomic) NSString *messageText;

@end
