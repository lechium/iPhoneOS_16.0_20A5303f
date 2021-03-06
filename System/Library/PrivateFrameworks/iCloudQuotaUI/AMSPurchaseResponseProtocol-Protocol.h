//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iCloudQuotaUI/NSObject-Protocol.h>

@class AMSAuthenticateRequest, AMSDialogRequest, AMSEngagementRequest, AMSPurchase, AMSPurchaseQueue;

@protocol AMSPurchaseResponseProtocol <NSObject>

@optional
- (void)handleEngagementRequest:(AMSEngagementRequest *)arg1 purchase:(AMSPurchase *)arg2 purchaseQueue:(AMSPurchaseQueue *)arg3 completion:(void (^)(AMSEngagementResult *, NSError *))arg4;
- (void)handleDialogRequest:(AMSDialogRequest *)arg1 purchase:(AMSPurchase *)arg2 purchaseQueue:(AMSPurchaseQueue *)arg3 completion:(void (^)(AMSDialogResult *, NSError *))arg4;
- (void)handleAuthenticateRequest:(AMSAuthenticateRequest *)arg1 purchase:(AMSPurchase *)arg2 purchaseQueue:(AMSPurchaseQueue *)arg3 completion:(void (^)(AMSAuthenticateResult *, NSError *))arg4;
@end

