//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GKGameInternal, NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol GKUtilityService <NSObject>
- (oneway void)openDashboardAsRemoteAlertForGame:(GKGameInternal *)arg1 hostPID:(int)arg2 deeplink:(NSDictionary *)arg3;
- (oneway void)enqueAMSMetrics:(NSString *)arg1 properties:(NSDictionary *)arg2;
- (oneway void)deleteCachedImageDataFromSubdirectory:(NSString *)arg1 withFileName:(NSString *)arg2 handler:(void (^)(void))arg3;
- (oneway void)loadCachedImageDataFromSubdirectory:(NSString *)arg1 withFileName:(NSString *)arg2 handler:(void (^)(NSData *))arg3;
- (oneway void)cacheImageData:(NSData *)arg1 inSubdirectory:(NSString *)arg2 withFileName:(NSString *)arg3 handler:(void (^)(void))arg4;
- (oneway void)requestImageDataForURL:(NSURL *)arg1 subdirectory:(NSString *)arg2 fileName:(NSString *)arg3 handler:(void (^)(NSData *))arg4;
- (oneway void)getStoreBagValuesForKeys:(NSArray *)arg1 handler:(void (^)(NSDictionary *, NSError *))arg2;
@end

