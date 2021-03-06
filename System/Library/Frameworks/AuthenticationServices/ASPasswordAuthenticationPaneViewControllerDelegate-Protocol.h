//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthenticationServices/NSObject-Protocol.h>

@class ASCPasswordCredential, ASPasswordAuthenticationPaneViewController, NSString;

@protocol ASPasswordAuthenticationPaneViewControllerDelegate <NSObject>
- (void)passwordAuthenticationViewController:(ASPasswordAuthenticationPaneViewController *)arg1 completedWithManuallyEnteredPasswordCredential:(ASCPasswordCredential *)arg2;
- (void)passwordAuthenticationViewController:(ASPasswordAuthenticationPaneViewController *)arg1 validateUserEnteredPIN:(NSString *)arg2 completionHandler:(void (^)(id <ASCCredentialProtocol>, NSError *))arg3;
@end

