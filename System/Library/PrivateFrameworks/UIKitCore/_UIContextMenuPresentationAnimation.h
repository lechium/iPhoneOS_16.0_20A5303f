//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UITargetedPreview, UIViewFloatAnimatableProperty, UIViewPropertyAnimator, _UIContextMenuAnimator, _UIContextMenuLayoutArbiterOutput, _UIContextMenuPresentationController, _UIContextMenuReparentingContainerView, _UIGroupCompletion, _UIPortalView;
@protocol _UIContextMenuPresentationAnimationDelegate;

__attribute__((visibility("hidden")))
@interface _UIContextMenuPresentationAnimation : NSObject
{
    _Bool _previewOverlapsMenu;	// 8 = 0x8
    _Bool _isDismissTransition;	// 9 = 0x9
    _Bool _reparentsInDestinationContainer;	// 10 = 0xa
    UITargetedPreview *_sourcePreview;	// 16 = 0x10
    id <_UIContextMenuPresentationAnimationDelegate> _delegate;	// 24 = 0x18
    _UIContextMenuPresentationController *_presentationController;	// 32 = 0x20
    _UIContextMenuAnimator *_alongsideAnimator;	// 40 = 0x28
    unsigned long long _dismissalStyle;	// 48 = 0x30
    NSArray *_preferredBackgroundEffects;	// 56 = 0x38
    NSArray *_secondarySourcePreviews;	// 64 = 0x40
    unsigned long long _totalItemCount;	// 72 = 0x48
    _UIPortalView *_reparentingPortalView;	// 80 = 0x50
    UITargetedPreview *_trackedPreviewForReparenting;	// 88 = 0x58
    _UIContextMenuReparentingContainerView *_reparentingContainerView;	// 96 = 0x60
    UIViewFloatAnimatableProperty *_animationProgress;	// 104 = 0x68
    CDUnknownBlockType _reparentingAnimationBlock;	// 112 = 0x70
    CDUnknownBlockType _accessoryAnimationBlock;	// 120 = 0x78
    _UIContextMenuLayoutArbiterOutput *_expandedLayout;	// 128 = 0x80
    _UIGroupCompletion *_groupCompletion;	// 136 = 0x88
    struct UIEdgeInsets _preferredBackgroundInsets;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000d2a5fe
@property(retain, nonatomic) _UIGroupCompletion *groupCompletion; // @synthesize groupCompletion=_groupCompletion;
@property(retain, nonatomic) _UIContextMenuLayoutArbiterOutput *expandedLayout; // @synthesize expandedLayout=_expandedLayout;
@property(copy, nonatomic) CDUnknownBlockType accessoryAnimationBlock; // @synthesize accessoryAnimationBlock=_accessoryAnimationBlock;
@property(copy, nonatomic) CDUnknownBlockType reparentingAnimationBlock; // @synthesize reparentingAnimationBlock=_reparentingAnimationBlock;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *animationProgress; // @synthesize animationProgress=_animationProgress;
@property(retain, nonatomic) _UIContextMenuReparentingContainerView *reparentingContainerView; // @synthesize reparentingContainerView=_reparentingContainerView;
@property(retain, nonatomic) UITargetedPreview *trackedPreviewForReparenting; // @synthesize trackedPreviewForReparenting=_trackedPreviewForReparenting;
@property(retain, nonatomic) _UIPortalView *reparentingPortalView; // @synthesize reparentingPortalView=_reparentingPortalView;
@property(nonatomic) _Bool reparentsInDestinationContainer; // @synthesize reparentsInDestinationContainer=_reparentsInDestinationContainer;
@property(nonatomic) _Bool isDismissTransition; // @synthesize isDismissTransition=_isDismissTransition;
@property(nonatomic) unsigned long long totalItemCount; // @synthesize totalItemCount=_totalItemCount;
@property(copy, nonatomic) NSArray *secondarySourcePreviews; // @synthesize secondarySourcePreviews=_secondarySourcePreviews;
@property(nonatomic) _Bool previewOverlapsMenu; // @synthesize previewOverlapsMenu=_previewOverlapsMenu;
@property(nonatomic) struct UIEdgeInsets preferredBackgroundInsets; // @synthesize preferredBackgroundInsets=_preferredBackgroundInsets;
@property(retain, nonatomic) NSArray *preferredBackgroundEffects; // @synthesize preferredBackgroundEffects=_preferredBackgroundEffects;
@property(nonatomic) unsigned long long dismissalStyle; // @synthesize dismissalStyle=_dismissalStyle;
@property(retain, nonatomic) _UIContextMenuAnimator *alongsideAnimator; // @synthesize alongsideAnimator=_alongsideAnimator;
@property(nonatomic) __weak _UIContextMenuPresentationController *presentationController; // @synthesize presentationController=_presentationController;
@property(nonatomic) __weak id <_UIContextMenuPresentationAnimationDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
- (void)_setBackgroundVisible:(_Bool)arg1;	// IMP=0x0000000000d2a298
- (id)_accessoryViews;	// IMP=0x0000000000d2a21e
- (id)_menuView;	// IMP=0x0000000000d2a1ce
- (id)_platterView;	// IMP=0x0000000000d2a17e
- (id)_backgroundView;	// IMP=0x0000000000d2a12e
- (id)_platterTransitionView;	// IMP=0x0000000000d2a0de
- (id)_containerView;	// IMP=0x0000000000d2a08e
- (_Bool)_isDismissingToDrag;	// IMP=0x0000000000d2a074
- (_Bool)_shouldAnimateBackgroundEffects;	// IMP=0x0000000000d2a010
- (void)_updateAccessoryAttachment:(id)arg1;	// IMP=0x0000000000d29b30
- (void)_installAccessories;	// IMP=0x0000000000d297d1
- (void)_prepareReparentingAnimationWithDismissalTarget:(id)arg1;	// IMP=0x0000000000d28ddd
- (void)_presentation_applyBackgroundEffectWithProgress:(double)arg1;	// IMP=0x0000000000d28a3d
- (void)_prepareAnimatablePropertyBasedAnimations;	// IMP=0x0000000000d28567
- (void)animateForDragSetDown;	// IMP=0x0000000000d284cc
- (void)_performOverallAnimationCompletion;	// IMP=0x0000000000d283bd
- (void)transitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000d282c3
- (id)_dismissalPreviewForSecondaryItemPreview:(id)arg1;	// IMP=0x0000000000d28206
- (id)_targetedPreviewForDismissalAnimation;	// IMP=0x0000000000d279ad
- (void)_performReduceMotionDisappearanceTransition;	// IMP=0x0000000000d2778c
- (void)_performReduceMotionAppearanceTransition;	// IMP=0x0000000000d276ba
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;	// IMP=0x0000000000d273fc
- (void)_performAlongsideAnimations;	// IMP=0x0000000000d2730b
- (void)_actuallyPerformTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;	// IMP=0x0000000000d25c4f
- (void)_anchorTransitionViewToTargetedPreview:(id)arg1;	// IMP=0x0000000000d25500
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;	// IMP=0x0000000000d2422b
- (id)initWithPresentationController:(id)arg1 asDismissal:(_Bool)arg2;	// IMP=0x0000000000d23f34

// Remaining properties
@property(readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

