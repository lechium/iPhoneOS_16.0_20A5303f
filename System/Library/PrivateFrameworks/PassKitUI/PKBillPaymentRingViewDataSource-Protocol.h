//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSDecimalNumber, NSString, PKBillPaymentRingView, PKBillPaymentSuggestedAmount;

@protocol PKBillPaymentRingViewDataSource <NSObject>
- (NSString *)billPaymentRingViewZeroInterestText:(PKBillPaymentRingView *)arg1;
- (NSString *)billPaymentRingView:(PKBillPaymentRingView *)arg1 interestTextForAmount:(NSDecimalNumber *)arg2;
- (NSString *)disabledBottomCurvedTextForBillPaymentRingView:(PKBillPaymentRingView *)arg1;
- (NSString *)disabledTopCurvedTextForBillPaymentRingView:(PKBillPaymentRingView *)arg1;
- (NSString *)billPaymentRingView:(PKBillPaymentRingView *)arg1 bottomCurvedTextForSuggestedAmount:(PKBillPaymentSuggestedAmount *)arg2;
- (NSString *)billPaymentRingView:(PKBillPaymentRingView *)arg1 topCurvedTextForSuggestedAmount:(PKBillPaymentSuggestedAmount *)arg2;
@end

