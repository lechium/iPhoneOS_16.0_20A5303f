//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit23CanvasElementResizeView : UIView
{
    MISSING_TYPE *resizeHandles;	// 8 = 0x8
    MISSING_TYPE *controlHandles;	// 16 = 0x10
    MISSING_TYPE *currentActiveHandle;	// 24 = 0x18
    MISSING_TYPE *moreButton;	// 32 = 0x20
    MISSING_TYPE *borderView;	// 40 = 0x28
    MISSING_TYPE *canvas;	// 48 = 0x30
    MISSING_TYPE *contextMenuInteraction;	// 56 = 0x38
    MISSING_TYPE *liveOriginalFrame;	// 64 = 0x40
    MISSING_TYPE *resizeOriginalCoordinateSpace;	// 104 = 0x68
    MISSING_TYPE *resizeOriginalFrame;	// 152 = 0x98
    MISSING_TYPE *originalControlPointLocation;	// 184 = 0xb8
    MISSING_TYPE *dragGestureRecognizer;	// 200 = 0xc8
    MISSING_TYPE *rotationGestureRecognizer;	// 208 = 0xd0
    MISSING_TYPE *tapGestureRecognizer;	// 216 = 0xd8
    MISSING_TYPE *dragLocation;	// 224 = 0xe0
    MISSING_TYPE *draggedImage;	// 248 = 0xf8
    MISSING_TYPE *resizingCanvasElements;	// 256 = 0x100
    MISSING_TYPE *hasContextMenuInteractionVisible;	// 264 = 0x108
    MISSING_TYPE *hasDraggingCanvasElement;	// 265 = 0x109
    MISSING_TYPE *dragConstainedAxis;	// 266 = 0x10a
    MISSING_TYPE *nudgeDelta;	// 272 = 0x110
    MISSING_TYPE *nudgeTimer;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x000000000009b220
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000009b1c0
- (_Bool)scribbleInteraction:(id)arg1 shouldBeginAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000009b150
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000009b0a0
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000009af00
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000009ad10
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x000000000009ac30
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000009abb0
- (void)tapped:(id)arg1;	// IMP=0x000000000009aa90
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000009aa30
- (void)rotateFromResizeHandle:(id)arg1;	// IMP=0x0000000000099240
- (void)rotate:(id)arg1;	// IMP=0x00000000000991f0
- (void)dragMoved:(id)arg1;	// IMP=0x0000000000098cb0
- (void)resizeHandleMoved:(id)arg1;	// IMP=0x0000000000097730
- (void)controlHandleMoved:(id)arg1;	// IMP=0x0000000000095a60
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000093ea0
- (void)layoutSubviews;	// IMP=0x00000000000917c0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000090260
- (void)didMoveToWindow;	// IMP=0x0000000000090230
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;	// IMP=0x0000000000148140
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;	// IMP=0x00000000001480b0
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;	// IMP=0x0000000000148040
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;	// IMP=0x0000000000147fa0
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;	// IMP=0x0000000000147f10
- (long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;	// IMP=0x0000000000147e60
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;	// IMP=0x0000000000147db0

@end
