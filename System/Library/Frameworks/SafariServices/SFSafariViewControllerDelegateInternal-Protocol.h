//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/SFSafariViewControllerDelegate-Protocol.h>

@class LSAppLink, NSURL, SFSafariViewController;

@protocol SFSafariViewControllerDelegateInternal <SFSafariViewControllerDelegate>

@optional
- (void)safariViewController:(SFSafariViewController *)arg1 didResolveRedirectionWithURL:(NSURL *)arg2 appLink:(LSAppLink *)arg3;
- (void)safariViewController:(SFSafariViewController *)arg1 hostApplicationOpenURL:(NSURL *)arg2;
- (void)safariViewController:(SFSafariViewController *)arg1 didDecideCookieSharingForURL:(NSURL *)arg2 shouldCancel:(_Bool)arg3;
@end
