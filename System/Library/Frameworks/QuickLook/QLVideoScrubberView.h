//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, PHVideoScrubberView, UIScrollView;

__attribute__((visibility("hidden")))
@interface QLVideoScrubberView : UIView
{
    _Bool _userInteractingWithScrubber;	// 8 = 0x8
    _Bool _touchGestureIsActive;	// 9 = 0x9
    PHVideoScrubberView *_photosScrubber;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005ec78
@property(nonatomic) _Bool touchGestureIsActive; // @synthesize touchGestureIsActive=_touchGestureIsActive;
@property(getter=isUserInteractingWithScrubber) _Bool userInteractingWithScrubber; // @synthesize userInteractingWithScrubber=_userInteractingWithScrubber;
- (void)_updateUserInteractingWithScrubberIfNeeded;	// IMP=0x000000000005eb69
- (void)didBeginTouchingVideoScrubberView:(id)arg1;	// IMP=0x000000000005eb4c
- (void)didEndTouchingVideoScrubberView:(id)arg1;	// IMP=0x000000000005eb2f
- (void)videoScrubberView:(id)arg1 didEndDeceleratingInScrollView:(id)arg2;	// IMP=0x000000000005eb1d
- (void)videoScrubberView:(id)arg1 didEndDraggingInScrollView:(id)arg2;	// IMP=0x000000000005eb0b
- (void)videoScrubberView:(id)arg1 willBeginDeceleratingInScrollView:(id)arg2;	// IMP=0x000000000005eaf9
- (void)videoScrubberView:(id)arg1 willBeginDraggingInScrollView:(id)arg2;	// IMP=0x000000000005eae7
@property(readonly) UIScrollView *scrollView;
@property(readonly) PHVideoScrubberView *photosScrubber; // @synthesize photosScrubber=_photosScrubber;
- (void)layoutSubviews;	// IMP=0x000000000005e7a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
