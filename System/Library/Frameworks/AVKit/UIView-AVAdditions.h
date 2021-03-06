//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutDimension, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSString;

@interface UIView (AVAdditions)
- (void)avkit_setFrame:(struct CGRect)arg1 inLayoutDirection:(long long)arg2;	// IMP=0x0020000000042bf7
- (struct CGRect)avkit_portionOfFrameUnobscuredBySuperviews;	// IMP=0x0020000000042998
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)arg1;	// IMP=0x0020000000042926
- (void)avkit_reevaluateHiddenStateOfItem:(id)arg1;	// IMP=0x00200000000428b4
- (struct CGRect)avkit_largestInscribedRectInBoundingPathWithCenter:(struct CGPoint)arg1 aspectRatio:(double)arg2;	// IMP=0x002000000004288b
- (_Bool)avkit_hasFullScreenLayoutClass;	// IMP=0x0020000000042847
- (void)avkit_makeSubtreeDisallowGroupBlending;	// IMP=0x00200000000426e7
- (_Bool)avkit_isDescendantOfNonPagingScrollView;	// IMP=0x00200000000426a3
- (_Bool)avkit_wantsAnimatedViewTransitions;	// IMP=0x002000000004266c
- (_Bool)avkit_isInAScrollView;	// IMP=0x0020000000042628
- (_Bool)avkit_isBeingScrolledQuickly;	// IMP=0x00200000000425e4
- (_Bool)avkit_isBeingScrolled;	// IMP=0x00200000000425a0
- (_Bool)avkit_isBeingScrollTested;	// IMP=0x002000000004255c
- (id)avkit_backdropGroupLeader;	// IMP=0x002000000004250c
- (void)avkit_needsUpdateBackdropCaptureViewHidden;	// IMP=0x00200000000424cf
- (_Bool)avkit_isBeingPresented;	// IMP=0x002000000004248b
- (_Bool)avkit_isBeingDismissed;	// IMP=0x0020000000042447
- (_Bool)avkit_isCounterRotatedForTransition;	// IMP=0x0020000000042403
- (_Bool)avkit_isVideoGravityFrozen;	// IMP=0x00200000000423bf
- (struct UIEdgeInsets)avkit_overrideLayoutMarginsForCounterRotation;	// IMP=0x002000000004231c
- (_Bool)avkit_isCompletelyTransparent;	// IMP=0x002000000004226e
- (_Bool)avkit_isInAWindowAndVisible;	// IMP=0x002000000004210d
- (void)avkit_hitTestControlForPoint:(struct CGPoint)arg1 withEvent:(id)arg2 bestSoFar:(inout id *)arg3 shortestDistanceSoFar:(inout double *)arg4;	// IMP=0x0020000000041b76
- (id)avkit_hitTestControlForPoint:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0020000000041b2a
- (_Bool)avkit_isDescendantOfViewPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0020000000041aaf
- (_Bool)avkit_isAncestorOfViewPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0020000000041932
- (id)avkit_ancestorViewPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00200000000418a1
- (id)avkit_constraintsFromCenterAndDimensionAnchorsToCenterAndDimensionAnchorsOfItem:(id)arg1;	// IMP=0x0020000000117193
- (id)avkit_constraintsFromEdgeAnchorsToEdgeAnchorsOfItem:(id)arg1;	// IMP=0x0020000000117174
- (id)avkit_constraintsFromCenterAnchorsToCenterAnchorsOfItem:(id)arg1;	// IMP=0x0020000000117016
- (id)avkit_constraintsFromDimensionAnchorsToSize:(struct CGSize)arg1;	// IMP=0x0020000000116f05

// Remaining properties
@property(readonly, nonatomic) NSLayoutYAxisAnchor *bottomAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *centerXAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *centerYAnchor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSLayoutDimension *heightAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leadingAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leftAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *rightAnchor;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *topAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *trailingAnchor;
@property(readonly, nonatomic) NSLayoutDimension *widthAnchor;
@end

