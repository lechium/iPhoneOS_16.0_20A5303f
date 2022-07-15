//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AKPageController, NSHashTable, NSString, PKCanvasView, PKInk, UIGestureRecognizer;
@protocol AKInkOverlayViewDelegate, PKRulerHostingDelegate;

@interface AKInkOverlayView : UIView
{
    PKInk *_ink;	// 8 = 0x8
    NSHashTable *_reportedStrokes;	// 16 = 0x10
    AKPageController *_pageController;	// 24 = 0x18
    id _drawingUndoTarget;	// 32 = 0x20
    PKCanvasView *_canvasView;	// 40 = 0x28
    id <AKInkOverlayViewDelegate> _delegate;	// 48 = 0x30
    id <PKRulerHostingDelegate> _rulerHostingDelegate;	// 56 = 0x38
    struct CGSize _canvasSizeInPKDrawingSpace;	// 64 = 0x40
    struct CGRect _previousPageRectInAKModel;	// 80 = 0x50
}

+ (struct CGRect)_convertRect:(struct CGRect)arg1 fromPageControllerModelSpace:(id)arg2 toDrawingInCanvasViewSpace:(id)arg3;	// IMP=0x0010000000054755
+ (id)newDrawingUndoTargetWithPageController:(id)arg1;	// IMP=0x0010000000052a0f
+ (id)newAKInkOverlayViewForCurrentPlatformWithPageController:(id)arg1 drawingUndoTarget:(id)arg2;	// IMP=0x0010000000052999
- (void).cxx_destruct;	// IMP=0x0000000000055379
@property(nonatomic) struct CGRect previousPageRectInAKModel; // @synthesize previousPageRectInAKModel=_previousPageRectInAKModel;
@property(nonatomic) __weak id <PKRulerHostingDelegate> rulerHostingDelegate; // @synthesize rulerHostingDelegate=_rulerHostingDelegate;
@property struct CGSize canvasSizeInPKDrawingSpace; // @synthesize canvasSizeInPKDrawingSpace=_canvasSizeInPKDrawingSpace;
@property __weak id <AKInkOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) PKCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property __weak id drawingUndoTarget; // @synthesize drawingUndoTarget=_drawingUndoTarget;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
@property(readonly, nonatomic) UIGestureRecognizer *pinchGestureRecognizer;
@property(readonly, nonatomic) UIGestureRecognizer *drawingGestureRecognizer;
- (void)canvasViewDrawingDidChange:(id)arg1;	// IMP=0x0000000000054dcf
- (void)_canvasView:(id)arg1 cancelledStroke:(id)arg2;	// IMP=0x0000000000054d0d
- (void)_canvasView:(id)arg1 endedStroke:(id)arg2;	// IMP=0x0000000000054c81
- (void)_canvasView:(id)arg1 beganStroke:(id)arg2;	// IMP=0x0000000000054bd0
- (void)canvasViewDidEndDrawing:(id)arg1;	// IMP=0x0000000000054b29
- (void)canvasViewDidBeginDrawing:(id)arg1;	// IMP=0x00000000000549a2
- (_Bool)_canvasView:(id)arg1 shouldBeginDrawingWithTouch:(id)arg2;	// IMP=0x0000000000054917
- (void)_calculateFixedPixelSize:(struct CGSize *)arg1 drawingScale:(double *)arg2;	// IMP=0x0000000000053f74
- (void)layoutSubviews;	// IMP=0x0000000000053d33
- (id)updatedDrawingForPageRectUpdate;	// IMP=0x0000000000053a14
- (_Bool)canvasNeedsUpdate;	// IMP=0x00000000000537b5
- (void)setupInkView;	// IMP=0x00000000000532f0
- (void)didMoveToSuperview;	// IMP=0x000000000005325e
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x00000000000531ed
- (void)removeStrokesFromDrawing:(id)arg1;	// IMP=0x0000000000053070
- (void)_updatedSelectedStrokesWithColor:(id)arg1;	// IMP=0x0000000000052fdc
- (void)_updateCanvasViewInk;	// IMP=0x0000000000052f2d
@property(copy) PKInk *ink;
- (void)teardown;	// IMP=0x0000000000052d76
- (void)commonPostInit;	// IMP=0x0000000000052c13
- (void)commonInit;	// IMP=0x0000000000052baa
- (void)awakeFromNib;	// IMP=0x0000000000052b69
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000052b0c
- (id)initWithPageController:(id)arg1 drawingUndoTarget:(id)arg2;	// IMP=0x0000000000052a58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
