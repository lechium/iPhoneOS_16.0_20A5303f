//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIScrollView, UIView;

@protocol _UIWebDoubleTapDelegate
- (_Bool)considerHeightForDoubleTap;
- (CDStruct_39925896)doubleTapScalesForSize:(struct CGSize)arg1;
- (struct CGRect)rectOfInterestForPoint:(struct CGPoint)arg1;
- (double)minimumScaleForSize:(struct CGSize)arg1;
- (struct CGRect)visibleContentRect;
- (double)currentDocumentScale;
- (double)zoomedDocumentScale;
- (UIView *)contentView;
- (UIScrollView *)enclosingScrollView;

@optional
- (void)willZoomToLocation:(struct CGPoint)arg1 atScale:(double)arg2 forDuration:(double)arg3;
- (_Bool)shouldSelectionAssistantReceiveDoubleTapAtPoint:(struct CGPoint)arg1 forScale:(double)arg2;
- (void)willZoomToMinimumScale;
@end
