//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIInputViewSetNotificationInfo, UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollToDismissSupport
{
    UIScrollView *_scrollViewForTransition;	// 32 = 0x20
    _Bool _scrollViewShowsHorizontalScrollIndicator;	// 40 = 0x28
    _Bool _scrollViewTransitionFinishing;	// 41 = 0x29
    _Bool _disableInterfaceAutorotation;	// 42 = 0x2a
    struct CGPoint _scrollViewTransitionPreviousPoint;	// 48 = 0x30
    UIInputViewSetNotificationInfo *_scrollViewNotificationInfo;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000bfffda
- (void)_updateKeyboardLayoutGuideForInteractiveScrollWithSize:(struct CGSize)arg1;	// IMP=0x0000000000bffdc7
- (void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2;	// IMP=0x0000000000bff9cc
- (void)scrollView:(id)arg1 didPanWithGesture:(id)arg2;	// IMP=0x0000000000bff153
- (void)completeKeyboardDismiss:(unsigned long long)arg1 withDuration:(double)arg2;	// IMP=0x0000000000bfee44
- (id)cancelNotificationsForMode:(unsigned long long)arg1;	// IMP=0x0000000000bfedd6
- (void)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;	// IMP=0x0000000000bfecf3
- (void)finishScrollViewTransitionForController:(id)arg1;	// IMP=0x0000000000bfecd9
- (void)setInterfaceAutorotationDisabled:(_Bool)arg1 forController:(id)arg2;	// IMP=0x0000000000bfec2d
- (void)finishScrollViewTransition;	// IMP=0x0000000000bfebb5
- (void)hideScrollViewHorizontalScrollIndicator:(_Bool)arg1;	// IMP=0x0000000000bfeb2d
- (void)updateScrollViewContentInsetBottom:(double)arg1;	// IMP=0x0000000000bfea8b

@end
