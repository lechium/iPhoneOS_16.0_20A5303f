//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISplitViewController.h>

@class MISSING_TYPE, NSUndoManager;

@interface _TtC9Reminders22TTRIRootViewController : UISplitViewController
{
    MISSING_TYPE *presenter;	// 8 = 0x8
    MISSING_TYPE *mainNavigationController;	// 24 = 0x18
    MISSING_TYPE *detailNavigationController;	// 32 = 0x20
    MISSING_TYPE *ttrMainViewController;	// 40 = 0x28
    MISSING_TYPE *pendingNavigateToRootPromise;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x004000000024c210
- (id)initWithStyle:(long long)arg1;	// IMP=0x001000000024c1e0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000024c1b0
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x001000000024c0a0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000024be90
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000024be70
- (void)viewDidLoad;	// IMP=0x001000000024be40
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
@property(nonatomic, readonly) NSUndoManager *undoManager;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000024bac0

@end
