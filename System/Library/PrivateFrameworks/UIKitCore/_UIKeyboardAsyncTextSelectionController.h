//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIKeyboardAsyncTextSelectionController
{
    _Bool _shouldDelayShowSelectionCommands;	// 8 = 0x8
}

- (void)endFloatingCursor;	// IMP=0x0000000000c6eacb
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000c6ea72
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000c6ea19
- (void)modifySelectionWithExtentPoint:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000c6ea07
- (void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;	// IMP=0x0000000000c6e9f5
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 withBoundary:(long long)arg2 executionContext:(id)arg3;	// IMP=0x0000000000c6e768
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000c6e39b
- (void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(struct CGPoint)arg2 executionContext:(id)arg3;	// IMP=0x0000000000c6e014
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c6dd51
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 executionContext:(id)arg3;	// IMP=0x0000000000c6db07
- (void)showSelectionView;	// IMP=0x0000000000c6da45
- (void)showSelectionCommands;	// IMP=0x0000000000c6d965
- (void)setRangedSelectionShouldShowGrabbers:(_Bool)arg1;	// IMP=0x0000000000c6d690
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4;	// IMP=0x0000000000c6d430
- (void)selectPositionAtPoint:(struct CGPoint)arg1 granularity:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c6d385
- (void)selectPositionAtPoint:(struct CGPoint)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c6d36e
- (void)selectPositionAtPoint:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000c6cff9
- (_Bool)shouldAllowSelectionGestureWithTouchType:(long long)arg1 atPoint:(struct CGPoint)arg2 toProgressToState:(long long)arg3;	// IMP=0x0000000000c6cf85
- (struct CGRect)caretRectForRightmostSelectedPosition;	// IMP=0x0000000000c6cd68
- (struct CGRect)caretRectForLeftmostSelectedPosition;	// IMP=0x0000000000c6cb4b
- (_Bool)cursorPositionIsContainedByRange:(id)arg1;	// IMP=0x0000000000c6c86e

@end
