//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class NSURLRequest, UIViewController;

@protocol SWNavigationHandler <NSObject>
- (unsigned long long)handleRequest:(NSURLRequest *)arg1;

@optional
- (void)commitViewController:(UIViewController *)arg1 URLRequest:(NSURLRequest *)arg2;
- (UIViewController *)previewViewControllerForRequest:(NSURLRequest *)arg1;
@end
