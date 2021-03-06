//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class SKUIScrollingSegmentedController, SKUIScrollingTabBarController, SKUIStackedBar, _UIBackdropView;

@interface UIViewController (SKUIExtensions)
- (id)_SKUIView;	// IMP=0x00300000000c0fb0
- (void)unregisterForPreviewing:(id)arg1;	// IMP=0x00300000000dcbb8
- (id)registerForPreviewingFromSourceView:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00300000000dcaa4
@property(nonatomic) double SKUIStackedBarSplit;
@property(readonly, nonatomic) SKUIStackedBar *SKUIStackedBar;
- (void)setNeedsNestedPagingScrollViewUpdate;	// IMP=0x0030000000152e34
@property(readonly, nonatomic) SKUIScrollingTabBarController *scrollingTabBarController;
- (void)setNeedsScrollingSegmentContentScrollViewUpdate;	// IMP=0x003000000017c0bf
@property(readonly, nonatomic) SKUIScrollingSegmentedController *scrollingSegmentedController;
@property(readonly, nonatomic) _UIBackdropView *SKUIPinnedHeaderView;
- (void)setNeedsNavigationBarAppearanceUpdate;	// IMP=0x0030000000386715
@end

