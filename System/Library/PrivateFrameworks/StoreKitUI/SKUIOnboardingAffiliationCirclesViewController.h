//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSMapTable, NSMutableArray, NSObject, NSString, SKUIClientContext, SKUIOnboardingInstructionsView, SKUIPhysicalCirclesView, UIView;
@protocol OS_dispatch_source, SKUIOnboardingAffiliationCirclesDelegate;

__attribute__((visibility("hidden")))
@interface SKUIOnboardingAffiliationCirclesViewController : UIViewController
{
    NSMutableArray *_affiliationItems;	// 8 = 0x8
    SKUIPhysicalCirclesView *_circlesView;	// 16 = 0x10
    SKUIClientContext *_clientContext;	// 24 = 0x18
    id <SKUIOnboardingAffiliationCirclesDelegate> _delegate;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_deletionTimer;	// 40 = 0x28
    _Bool _didPerformFinishAnimation;	// 48 = 0x30
    UIView *_footerView;	// 56 = 0x38
    NSMapTable *_images;	// 64 = 0x40
    SKUIOnboardingInstructionsView *_instructionsView;	// 72 = 0x48
    _Bool _needsReloadOnDidAppear;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000a7b88
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak id <SKUIOnboardingAffiliationCirclesDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(copy, nonatomic) NSArray *affiliationItems; // @synthesize affiliationItems=_affiliationItems;
- (double)_topLayoutMargin;	// IMP=0x00000000000a7a6f
- (long long)_titlePositionForAffinityCount:(long long)arg1;	// IMP=0x00000000000a7a61
- (void)_sendAffilationItemsDidChange;	// IMP=0x00000000000a7a04
- (void)_reloadRepellors;	// IMP=0x00000000000a7744
- (void)_completeDeletionForCircleAtIndex:(long long)arg1;	// IMP=0x00000000000a75fa
- (struct CGSize)_circleSizeForAffinityCount:(long long)arg1;	// IMP=0x00000000000a755c
- (double)_circleImageAlphaForAffinityCount:(long long)arg1;	// IMP=0x00000000000a7535
- (void)_cancelDeletionTimer;	// IMP=0x00000000000a74fb
- (void)circleView:(id)arg1 didTapCircleAtIndex:(long long)arg2;	// IMP=0x00000000000a73e1
- (void)circleView:(id)arg1 didEndLongPressForCircleAtIndex:(long long)arg2;	// IMP=0x00000000000a7371
- (void)circleView:(id)arg1 didBeginLongPressForCircleAtIndex:(long long)arg2;	// IMP=0x00000000000a6f46
- (long long)numberOfCirclesInCircleView:(id)arg1;	// IMP=0x00000000000a6f29
- (id)circlesView:(id)arg1 circleForIndex:(long long)arg2;	// IMP=0x00000000000a6c70
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000a6c01
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000a6ba6
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000a697e
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000a692b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000a6892
- (void)loadView;	// IMP=0x00000000000a65c3
- (void)setUserAffinityCount:(long long)arg1 forAffiliationItemAtIndex:(long long)arg2 animated:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a62bc
- (void)setImage:(id)arg1 forAffiliationItem:(id)arg2;	// IMP=0x00000000000a6184
- (void)setFooterView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000a60e0
- (void)resetWithAffiliationItems:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a5e6c
- (void)removeAffiliationItemsInIndexSet:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a5ddb
- (void)performFinishAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a5859
@property(readonly, nonatomic) double maximumCircleDiameter;
@property(readonly, nonatomic) SKUIOnboardingInstructionsView *instructionsView;
- (void)addAffiliationItems:(id)arg1;	// IMP=0x00000000000a565a
- (void)dealloc;	// IMP=0x00000000000a55de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

