//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@interface SSSScrollView : UIScrollView
{
    _Bool _animateSuperZoomToRect;	// 8 = 0x8
    _Bool _inSuperZoomToRect;	// 9 = 0x9
    _Bool _isInProgrammaticCall;	// 10 = 0xa
    _Bool _hitTestsUsingSubviews;	// 11 = 0xb
}

@property(nonatomic) _Bool hitTestsUsingSubviews; // @synthesize hitTestsUsingSubviews=_hitTestsUsingSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x001000000002d572
@property(readonly, nonatomic) _Bool isMoving;
@property(readonly, nonatomic) struct CGRect visibleRect;
- (struct CGSize)_unscaledContentSize;	// IMP=0x001000000002d3d5
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x001000000002d388
@property(readonly, nonatomic) _Bool isInProgrammaticCall;
- (void)zoomToRect:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x001000000002d2cd
- (void)setZoomScale:(double)arg1 animated:(_Bool)arg2;	// IMP=0x001000000002d259
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x001000000002d1be
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x001000000002d134

@end
