//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/PKAttachmentView.h>

@class MISSING_TYPE, PKTiledView, UIView;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit24CanvasElementDrawingView : PKAttachmentView
{
    MISSING_TYPE *canvasElementView;	// 8 = 0x8
    MISSING_TYPE *liveStreamingDisplayLink;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000039b30
- (void)setAttachmentChromeVisible:(_Bool)arg1 animated:(_Bool)arg2 highlightBackground:(_Bool)arg3;	// IMP=0x0000000000039a30
- (_Bool)hitChrome:(struct CGPoint)arg1 isStylus:(_Bool)arg2;	// IMP=0x00000000000399d0
@property(nonatomic, readonly) UIView *attachmentContainerView;
- (void)updateDrawingHeight:(double)arg1;	// IMP=0x0000000000039780
- (double)heightFromDrawing:(id)arg1 delta:(double)arg2;	// IMP=0x00000000000396c0
@property(nonatomic, readonly) _Bool isAtEndOfDocument;
- (void)updateFrameForTextContainer;	// IMP=0x0000000000039490
- (void)didEndDrawing;	// IMP=0x0000000000039390
- (void)drawingDidEraseStrokes;	// IMP=0x00000000000392f0
- (void)updateLiveDrawing;	// IMP=0x00000000000392c0
- (void)didBeginDrawing;	// IMP=0x0000000000039020
- (void)updateTileContainerViewFrame;	// IMP=0x0000000000038ca0
@property(nonatomic, readonly) struct CGAffineTransform drawingTransform;
- (void)drawingDidChangeVisibleStrokes:(_Bool)arg1;	// IMP=0x0000000000038950
@property(nonatomic, readonly) PKTiledView *tiledView;
- (_Bool)resignFirstResponder;	// IMP=0x00000000000386c0
- (_Bool)becomeFirstResponder;	// IMP=0x00000000000384e0
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)didMoveToWindow;	// IMP=0x0000000000038410
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000038190
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000038130
- (id)initWithFrame:(struct CGRect)arg1 drawing:(id)arg2;	// IMP=0x0000000000038080

@end

