//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class NSArray, NSDictionary, VSSubscription;

@protocol VSSubscriptionServiceProtocol <NSObject>
- (void)removeSubscriptions:(NSArray *)arg1;
- (void)registerSubscription:(VSSubscription *)arg1;
- (void)fetchActiveSubscriptionsWithOptions:(NSDictionary *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
@end

