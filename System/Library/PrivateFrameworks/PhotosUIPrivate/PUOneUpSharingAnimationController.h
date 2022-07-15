//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UISheetAnimationController.h>

@class NSString, PUOneUpPhotosSharingTransitionContext, UIViewController;
@protocol PUOneUpAssetTransitionViewController, PUOneUpSharingAnimationControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUOneUpSharingAnimationController : _UISheetAnimationController
{
    _Bool _interruptibleAnimatorForTransitionWasCalled;	// 8 = 0x8
    PUOneUpPhotosSharingTransitionContext *_oneUpTransitionContext;	// 16 = 0x10
    UIViewController<PUOneUpAssetTransitionViewController> *_presentingViewController;	// 24 = 0x18
    id <PUOneUpSharingAnimationControllerDelegate> _delegate;	// 32 = 0x20
}

+ (id)new;	// IMP=0x001000000020e2c2
- (void).cxx_destruct;	// IMP=0x000000000020bff7
@property(nonatomic) __weak id <PUOneUpSharingAnimationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIViewController<PUOneUpAssetTransitionViewController> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) PUOneUpPhotosSharingTransitionContext *oneUpTransitionContext; // @synthesize oneUpTransitionContext=_oneUpTransitionContext;
- (void)_configurePhotoView:(id)arg1 withContentHelper:(id)arg2;	// IMP=0x000000000020bc06
- (void)_installTransitioningBadgeViewsForAssetTransitionInfo:(id)arg1 inTransitioningView:(id)arg2;	// IMP=0x000000000020b66a
- (id)interruptibleAnimatorForTransition:(id)arg1;	// IMP=0x000000000020acc8
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000020ac34
- (id)initWithTransitionContext:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x000000000020ab92
- (id)init;	// IMP=0x000000000020ab18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
