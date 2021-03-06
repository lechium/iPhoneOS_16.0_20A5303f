//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@protocol SpotlightDaemonClient
- (void)provideFileURLForBundleID:(NSString *)arg1 protectionClass:(NSString *)arg2 itemIdentifier:(NSString *)arg3 typeIdentifier:(NSString *)arg4 options:(long long)arg5 completionHandler:(void (^)(NSURL *, NSError *))arg6;
- (void)provideDataForBundleID:(NSString *)arg1 protectionClass:(NSString *)arg2 itemIdentifier:(NSString *)arg3 typeIdentifier:(NSString *)arg4 options:(long long)arg5 completionHandler:(void (^)(NSData *, NSError *))arg6;
- (void)reindexItemsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3 acknowledgementHandler:(void (^)(void))arg4;
- (void)reindexAllItemsForBundleID:(NSString *)arg1 protectionClass:(NSString *)arg2 acknowledgementHandler:(void (^)(void))arg3;
@end

