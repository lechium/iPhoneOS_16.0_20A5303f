//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI/NSObject-Protocol.h>

@class NUPageViewController, UIViewController;

@protocol NUPageViewControllerDataSource <NSObject>
- (UIViewController *)pageViewController:(NUPageViewController *)arg1 viewControllerBeforeViewController:(UIViewController *)arg2;
- (UIViewController *)pageViewController:(NUPageViewController *)arg1 viewControllerAfterViewController:(UIViewController *)arg2;
@end
