//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI29GameLayerNavigationController : UINavigationController
{
    MISSING_TYPE *showsDoneButton;	// 8 = 0x8
    MISSING_TYPE *doneHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000021eb10
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000021eab0
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;	// IMP=0x000000000021ea80
- (void)didTapDone;	// IMP=0x000000000021ea50
- (_Bool)_requiresCustomPresentationController;	// IMP=0x000000000021e7b0
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x000000000021e6d0
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000021e660
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000021e610
- (void)viewDidLoad;	// IMP=0x000000000021e540
@property(nonatomic) struct CGSize preferredContentSize;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000021e370
- (id)initWithRootViewController:(id)arg1;	// IMP=0x000000000021e340

@end
