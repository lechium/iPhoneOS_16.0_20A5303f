//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKOperationCallbacks-Protocol.h>

@class CKSubscription, NSError, NSString;

@protocol CKFetchSubscriptionsOperationCallbacks <CKOperationCallbacks>
- (void)handleSubscriptionFetchForSubscriptionID:(NSString *)arg1 subscription:(CKSubscription *)arg2 error:(NSError *)arg3;
@end
