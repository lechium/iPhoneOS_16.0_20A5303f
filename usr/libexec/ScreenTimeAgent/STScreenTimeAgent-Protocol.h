//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateInterval, NSSecurityScopedURLWrapper, NSString, NSURL;

@protocol STScreenTimeAgent
- (void)deleteAllWebApplicationHistory:(NSString *)arg1 clientBundleURLWrapper:(NSSecurityScopedURLWrapper *)arg2 replyHandler:(void (^)(NSError *))arg3;
- (void)deleteWebHistoryDuringInterval:(NSDateInterval *)arg1 webApplication:(NSString *)arg2 clientBundleURLWrapper:(NSSecurityScopedURLWrapper *)arg3 replyHandler:(void (^)(NSError *))arg4;
- (void)deleteWebHistoryForURL:(NSURL *)arg1 webApplication:(NSString *)arg2 clientBundleURLWrapper:(NSSecurityScopedURLWrapper *)arg3 replyHandler:(void (^)(NSError *))arg4;
- (void)requestConfigurationWithReplyHandler:(void (^)(STScreenTimeConfiguration *, NSError *))arg1;
@end
