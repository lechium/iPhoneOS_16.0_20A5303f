//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPresentationController.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface AMSUIPrivacyPresentationController : UIPresentationController
{
    UIView *_dimmingView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005a260
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;	// IMP=0x000000000005a233
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;	// IMP=0x000000000005a226
- (void)presentationTransitionWillBegin;	// IMP=0x000000000005a1a1
- (void)_prepareDimmingViewIfNecessary;	// IMP=0x000000000005a025
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;	// IMP=0x0000000000059ff1
- (_Bool)shouldRemovePresentersView;	// IMP=0x0000000000059fe9
- (void)containerViewDidLayoutSubviews;	// IMP=0x0000000000059eec
- (void)containerViewWillLayoutSubviews;	// IMP=0x0000000000059cfc
- (long long)adaptivePresentationStyle;	// IMP=0x0000000000059cf1
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x0000000000059ca2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
