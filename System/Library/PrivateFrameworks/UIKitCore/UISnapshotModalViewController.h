//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class UINavigationController;

__attribute__((visibility("hidden")))
@interface UISnapshotModalViewController : UIViewController
{
    long long _interfaceOrientation;	// 424 = 0x1a8
    UIViewController *_disappearingViewController;	// 432 = 0x1b0
    UINavigationController *_parentController;	// 440 = 0x1b8
}

- (void).cxx_destruct;	// IMP=0x0000000000446d0a
@property(retain, nonatomic) UIViewController *disappearingViewController; // @synthesize disappearingViewController=_disappearingViewController;
- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000446ce5
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000446c2a
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000446b06
- (id)initWithInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000446a5a

@end

