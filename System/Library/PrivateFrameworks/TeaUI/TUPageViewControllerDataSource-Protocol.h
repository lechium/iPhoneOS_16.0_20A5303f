//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TeaUI/NSObject-Protocol.h>

@class TUPageViewController, UIViewController;

@protocol TUPageViewControllerDataSource <NSObject>
- (UIViewController *)pageViewController:(TUPageViewController *)arg1 viewControllerBeforeViewController:(UIViewController *)arg2;
- (UIViewController *)pageViewController:(TUPageViewController *)arg1 viewControllerAfterViewController:(UIViewController *)arg2;
@end
