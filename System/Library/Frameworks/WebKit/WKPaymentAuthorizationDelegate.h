//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKPaymentAuthorizationDelegate : NSObject
{
    struct RetainPtr<PKPaymentRequest> _request;	// 8 = 0x8
    struct WeakPtr<WebKit::PaymentAuthorizationPresenter, WTF::EmptyCounter> _presenter;	// 16 = 0x10
    struct RetainPtr<NSArray<PKPaymentSummaryItem *>> _summaryItems;	// 24 = 0x18
    struct RetainPtr<PKShippingMethods> _availableShippingMethods;	// 32 = 0x20
    struct RetainPtr<NSError> _sessionError;	// 40 = 0x28
    struct BlockPtr<void (PKPaymentAuthorizationResult *)> _didAuthorizePaymentCompletion;	// 48 = 0x30
    struct BlockPtr<void (PKPaymentMerchantSession *, NSError *)> _didRequestMerchantSessionCompletion;	// 56 = 0x38
    struct BlockPtr<void (PKPaymentRequestPaymentMethodUpdate *)> _didSelectPaymentMethodCompletion;	// 64 = 0x40
    struct BlockPtr<void (PKPaymentRequestShippingContactUpdate *)> _didSelectShippingContactCompletion;	// 72 = 0x48
    struct BlockPtr<void (PKPaymentRequestShippingMethodUpdate *)> _didSelectShippingMethodCompletion;	// 80 = 0x50
    struct BlockPtr<void (PKPaymentRequestCouponCodeUpdate *)> _didChangeCouponCodeCompletion;	// 88 = 0x58
}

- (id).cxx_construct;	// IMP=0x000000000013a823
- (void).cxx_destruct;	// IMP=0x000000000013a75f
- (void)completePaymentSession:(long long)arg1 errors:(id)arg2 orderDetails:(id)arg3;	// IMP=0x000000000013a66d
- (void)invalidate;	// IMP=0x000000000013a646
- (void)completeCouponCodeChange:(id)arg1;	// IMP=0x000000000013a4f1
- (void)completeShippingMethodSelection:(id)arg1;	// IMP=0x000000000013a39c
- (void)completeShippingContactSelection:(id)arg1;	// IMP=0x000000000013a247
- (void)completePaymentSession:(long long)arg1 errors:(id)arg2;	// IMP=0x000000000013a180
- (void)completePaymentMethodSelection:(id)arg1;	// IMP=0x000000000013a02b
- (void)completeMerchantValidation:(id)arg1 error:(id)arg2;	// IMP=0x0000000000139fa4
- (void)_willFinishWithError:(id)arg1;	// IMP=0x000000000013b636
- (void)_getPaymentServicesMerchantURL:(CDUnknownBlockType)arg1;	// IMP=0x000000000013b624
- (void)_didChangeCouponCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000013b537
- (void)_didSelectShippingMethod:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000013aeb1
- (void)_didSelectShippingContact:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000013adb9
- (void)_didSelectPaymentMethod:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000013acc1
- (void)_didRequestMerchantSession:(CDUnknownBlockType)arg1;	// IMP=0x000000000013ab6a
- (void)_didFinish;	// IMP=0x000000000013aaac
- (void)_didAuthorizePayment:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000013a9aa
- (id)_initWithRequest:(id)arg1 presenter:(void *)arg2;	// IMP=0x000000000013a84b

@end

