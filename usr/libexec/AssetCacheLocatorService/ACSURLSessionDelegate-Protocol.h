//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class ACSURLSession, NSError, NSURLAuthenticationChallenge;

@protocol ACSURLSessionDelegate <NSObject>

@optional
- (void)URLSession:(ACSURLSession *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)URLSession:(ACSURLSession *)arg1 didBecomeInvalidWithError:(NSError *)arg2;
@end
