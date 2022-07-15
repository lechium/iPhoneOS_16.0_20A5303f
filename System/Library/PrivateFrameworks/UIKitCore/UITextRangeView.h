//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSString, UIPointerInteraction, UIResponder, UISelectionGrabber, UISelectionGrabberCustomPath, UITextRangeAdjustmentInteraction, UITextSelectionView, UITouch;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextRangeView : UIView
{
    UITextSelectionView *m_selectionView;	// 184 = 0xb8
    UIResponder<UITextInput> *m_container;	// 192 = 0xc0
    int m_mode;	// 200 = 0xc8
    NSArray *m_rects;	// 208 = 0xd0
    NSMutableArray *m_rectViews;	// 216 = 0xd8
    UITouch *m_activeTouch;	// 224 = 0xe0
    struct CGRect m_startEdge;	// 232 = 0xe8
    struct CGRect m_endEdge;	// 264 = 0x108
    UIView *m_rectContainerView;	// 296 = 0x128
    UISelectionGrabber *m_startGrabber;	// 304 = 0x130
    UISelectionGrabber *m_endGrabber;	// 312 = 0x138
    _Bool m_animateUpdate;	// 320 = 0x140
    _Bool m_commandsWereShowing;	// 321 = 0x141
    _Bool m_willBeginMagnifying;	// 322 = 0x142
    _Bool m_inGesture;	// 323 = 0x143
    _Bool m_magnifying;	// 324 = 0x144
    _Bool m_scrolling;	// 325 = 0x145
    _Bool m_scaling;	// 326 = 0x146
    _Bool m_rotating;	// 327 = 0x147
    _Bool m_inputViewIsChanging;	// 328 = 0x148
    UIPointerInteraction *_pointerInteraction;	// 336 = 0x150
    _Bool m_isClearingRange;	// 344 = 0x158
    _Bool m_shouldStayVisible;	// 345 = 0x159
    UITextRangeAdjustmentInteraction *_adjustmentInteraction;	// 352 = 0x160
    UISelectionGrabberCustomPath *_startCustomPath;	// 360 = 0x168
    UISelectionGrabberCustomPath *_endCustomPath;	// 368 = 0x170
    struct CGPoint m_basePoint;	// 376 = 0x178
    struct CGPoint m_extentPoint;	// 392 = 0x188
    struct CGPoint m_initialExtentPoint;	// 408 = 0x198
    struct CGPoint _activeTouchPoint;	// 424 = 0x1a8
}

- (void).cxx_destruct;	// IMP=0x0000000001174be5
@property(retain, nonatomic) UISelectionGrabberCustomPath *endCustomPath; // @synthesize endCustomPath=_endCustomPath;
@property(retain, nonatomic) UISelectionGrabberCustomPath *startCustomPath; // @synthesize startCustomPath=_startCustomPath;
@property(retain, nonatomic) UITextRangeAdjustmentInteraction *adjustmentInteraction; // @synthesize adjustmentInteraction=_adjustmentInteraction;
@property(readonly, nonatomic) struct CGPoint activeTouchPoint; // @synthesize activeTouchPoint=_activeTouchPoint;
@property(nonatomic) _Bool shouldStayVisible; // @synthesize shouldStayVisible=m_shouldStayVisible;
@property(nonatomic) _Bool isClearingRange; // @synthesize isClearingRange=m_isClearingRange;
@property(nonatomic) _Bool inputViewIsChanging; // @synthesize inputViewIsChanging=m_inputViewIsChanging;
@property(nonatomic) _Bool rotating; // @synthesize rotating=m_rotating;
@property(nonatomic) _Bool scaling; // @synthesize scaling=m_scaling;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=m_scrolling;
@property(nonatomic) _Bool inGesture; // @synthesize inGesture=m_inGesture;
@property(nonatomic) _Bool magnifying; // @synthesize magnifying=m_magnifying;
@property(nonatomic) _Bool willBeginMagnifying; // @synthesize willBeginMagnifying=m_willBeginMagnifying;
@property(nonatomic) _Bool commandsWereShowing; // @synthesize commandsWereShowing=m_commandsWereShowing;
@property(nonatomic) _Bool animateUpdate; // @synthesize animateUpdate=m_animateUpdate;
@property(retain, nonatomic) UISelectionGrabber *endGrabber; // @synthesize endGrabber=m_endGrabber;
@property(retain, nonatomic) UISelectionGrabber *startGrabber; // @synthesize startGrabber=m_startGrabber;
@property(nonatomic) struct CGPoint initialExtentPoint; // @synthesize initialExtentPoint=m_initialExtentPoint;
@property(readonly, nonatomic) struct CGPoint extentPoint; // @synthesize extentPoint=m_extentPoint;
@property(readonly, nonatomic) struct CGPoint basePoint; // @synthesize basePoint=m_basePoint;
@property(nonatomic) struct CGRect endEdge; // @synthesize endEdge=m_endEdge;
@property(nonatomic) struct CGRect startEdge; // @synthesize startEdge=m_startEdge;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00000000011748e8
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x000000000117479b
@property(readonly, nonatomic) _Bool areSelectionRectsVisible;
- (struct CGPoint)convertFromMagnifierPoint:(struct CGPoint)arg1;	// IMP=0x0000000001174579
- (struct CGPoint)magnifierPoint;	// IMP=0x0000000001174356
- (void)_cancelGrabberTransitionOutAnimations:(id)arg1;	// IMP=0x0000000001174267
- (void)updateGrabbers;	// IMP=0x0000000001173063
- (_Bool)shouldShowGrabbers;	// IMP=0x000000000117304b
- (_Bool)shouldHitTestGrabbers;	// IMP=0x0000000001173011
- (_Bool)_endIsHorizontal;	// IMP=0x0000000001172fba
- (_Bool)_startIsHorizontal;	// IMP=0x0000000001172f63
- (void)updateRectViews;	// IMP=0x00000000011721e6
- (struct CGRect)_selectionClipRect;	// IMP=0x0000000001172162
- (void)beginMagnifying;	// IMP=0x00000000011720fd
- (void)animateHighlighterDelayedFadeInOnLayer:(id)arg1;	// IMP=0x0000000001171ea6
- (void)animateHighlighterExpanderOnLayer:(id)arg1 withOffset:(struct CGPoint)arg2;	// IMP=0x00000000011718ce
- (void)animateHighlighterExpanderAnimation;	// IMP=0x000000000117126c
@property(readonly, nonatomic) _Bool autoscrolled;
- (struct CGPoint)applyTouchOffset:(struct CGPoint)arg1;	// IMP=0x00000000011711e7
- (_Bool)pointCloserToEnd:(struct CGPoint)arg1 startEdge:(struct CGRect)arg2 endEdge:(struct CGRect)arg3;	// IMP=0x00000000011711a7
- (void)cancelDelayedActions;	// IMP=0x000000000117118b
- (void)stopAnimating;	// IMP=0x0000000001171106
- (void)startAnimating;	// IMP=0x000000000117107b
- (void)updateDots;	// IMP=0x0000000001170f9e
- (void)clearRangeAnimated:(_Bool)arg1;	// IMP=0x0000000001170cee
- (void)inputViewDidChange;	// IMP=0x0000000001170cbe
- (void)inputViewWillChange;	// IMP=0x0000000001170c8b
- (void)didRotate;	// IMP=0x0000000001170c4f
- (void)willRotate;	// IMP=0x0000000001170c1c
- (void)scaleDidChange;	// IMP=0x0000000001170bec
- (void)scaleWillChange;	// IMP=0x0000000001170bb9
- (void)didScroll;	// IMP=0x0000000001170b89
- (void)willScroll;	// IMP=0x0000000001170b56
- (void)doneMagnifying;	// IMP=0x0000000001170aaf
- (void)prepareForMagnification;	// IMP=0x0000000001170a0b
- (void)updateBaseAndExtentPointsFromEdges;	// IMP=0x00000000011709ee
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint)arg1;	// IMP=0x00000000011708d2
@property(nonatomic) _Bool baseIsStart;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint)arg1;	// IMP=0x000000000117083a
@property(retain, nonatomic) NSArray *rects; // @synthesize rects=m_rects;
- (void)updateEdges;	// IMP=0x000000000116fb9a
@property(readonly, nonatomic) UIResponder<UITextInput> *container;
@property(readonly, nonatomic) UITextSelectionView *selectionView;
@property(nonatomic) int mode; // @synthesize mode=m_mode;
- (void)updateAfterEffectiveModeChange;	// IMP=0x000000000116fad5
- (id)containerCoordinateSpaceForTextRangeAdjustmentInteraction:(id)arg1;	// IMP=0x000000000116fa4b
- (struct CGRect)caretRectForTextRangeAdjustmentInteraction:(id)arg1;	// IMP=0x000000000116f9a3
- (void)textRangeAdjustmentInteractionWasCancelled:(id)arg1;	// IMP=0x000000000116f8c3
- (void)textRangeAdjustmentInteraction:(id)arg1 didEndAtPoint:(struct CGPoint)arg2;	// IMP=0x000000000116f829
- (void)textRangeAdjustmentInteraction:(id)arg1 selectionMoved:(struct CGPoint)arg2 withTouchPoint:(struct CGPoint)arg3;	// IMP=0x000000000116f79a
- (void)textRangeAdjustmentInteraction:(id)arg1 didBeginAtPoint:(struct CGPoint)arg2;	// IMP=0x000000000116f639
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000116f49f
- (_Bool)_gestureRecognizerShouldReceiveTouch:(id)arg1;	// IMP=0x000000000116f48d
- (void)setMagnifierOrientation;	// IMP=0x000000000116f40f
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000116f32c
- (struct CGRect)_endEdgeHitRectWithPrecision:(unsigned long long)arg1;	// IMP=0x000000000116f293
- (struct CGRect)_startEdgeHitRectWithPrecision:(unsigned long long)arg1;	// IMP=0x000000000116f1fa
- (struct CGRect)_edgeHitRectForEdgeRect:(struct CGRect)arg1 grabber:(id)arg2 precision:(unsigned long long)arg3;	// IMP=0x000000000116ef34
- (void)removeFromSuperview;	// IMP=0x000000000116edec
- (id)initWithFrame:(struct CGRect)arg1 selectionView:(id)arg2;	// IMP=0x000000000116eb9a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
