//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonViewController.h"

@class AMSBinaryPromise, AMSUILoadingView, AMSUIWebAppearance, AMSUIWebClientContext, AMSUIWebLoadingPageModel, NSString, UIView, UIViewController;
@protocol AMSUIWebPagePresenter;

__attribute__((visibility("hidden")))
@interface AMSUIWebPlaceholderViewController : AMSUICommonViewController
{
    _Bool _animateFadeIn;	// 8 = 0x8
    _Bool _hasAppeared;	// 9 = 0x9
    _Bool _isVisible;	// 10 = 0xa
    _Bool _shouldSnapshot;	// 11 = 0xb
    AMSUIWebAppearance *_appearance;	// 16 = 0x10
    AMSUIWebLoadingPageModel *_model;	// 24 = 0x18
    UIViewController<AMSUIWebPagePresenter> *_originalViewController;	// 32 = 0x20
    AMSUIWebClientContext *_context;	// 40 = 0x28
    AMSUILoadingView *_loadingView;	// 48 = 0x30
    AMSBinaryPromise *_snapshotPromise;	// 56 = 0x38
    UIView *_snapshotView;	// 64 = 0x40
    UIView *_visibleView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000a4368
@property(retain, nonatomic) UIView *visibleView; // @synthesize visibleView=_visibleView;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) AMSBinaryPromise *snapshotPromise; // @synthesize snapshotPromise=_snapshotPromise;
@property(nonatomic) _Bool shouldSnapshot; // @synthesize shouldSnapshot=_shouldSnapshot;
@property(retain, nonatomic) AMSUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(retain, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UIViewController<AMSUIWebPagePresenter> *originalViewController; // @synthesize originalViewController=_originalViewController;
@property(retain, nonatomic) AMSUIWebLoadingPageModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AMSUIWebAppearance *appearance; // @synthesize appearance=_appearance;
@property(nonatomic) _Bool animateFadeIn; // @synthesize animateFadeIn=_animateFadeIn;
- (void)_transitionToSnapshot;	// IMP=0x00000000000a4142
- (void)_transitionToLoadingAnimated:(_Bool)arg1;	// IMP=0x00000000000a40f1
- (void)_replacePrimaryViewWithView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000a3ed7
- (void)_startReappearTransitionTimerAnimated:(_Bool)arg1;	// IMP=0x00000000000a3ce3
- (void)_applyAppearance;	// IMP=0x00000000000a3b83
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;	// IMP=0x00000000000a3966
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000a389d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000a383d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000a370c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000a3693
- (void)willAppearAfterDismiss;	// IMP=0x00000000000a367f
- (void)loadView;	// IMP=0x00000000000a34c0
- (void)dealloc;	// IMP=0x00000000000a344b
- (void)awaitSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a3384
- (id)initWithSnapshot:(id)arg1 context:(id)arg2 appearance:(id)arg3;	// IMP=0x00000000000a316a
- (id)initWithModel:(id)arg1 context:(id)arg2 appearance:(id)arg3;	// IMP=0x00000000000a30ce
- (id)initWithContext:(id)arg1;	// IMP=0x00000000000a2fdd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

