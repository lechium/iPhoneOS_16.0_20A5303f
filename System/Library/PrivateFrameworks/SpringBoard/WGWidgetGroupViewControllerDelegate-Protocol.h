//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/UIScrollViewDelegate-Protocol.h>

@class WGWidgetGroupViewController;

@protocol WGWidgetGroupViewControllerDelegate <UIScrollViewDelegate>

@optional
- (void)widgetGroupViewControllerDidChangeHeaderVisibility:(WGWidgetGroupViewController *)arg1;
- (struct UIEdgeInsets)widgetGroupViewController:(WGWidgetGroupViewController *)arg1 contentOccludingInsetsForInterfaceOrientation:(long long)arg2;
- (struct CGSize)widgetGroupViewController:(WGWidgetGroupViewController *)arg1 sizeForInterfaceOrientation:(long long)arg2;
@end

