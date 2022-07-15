//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKCurrencyAmount;

@interface PDPeerPaymentBalanceReminderUserNotification
{
    PKCurrencyAmount *_currentBalance;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000022a11c
- (void).cxx_destruct;	// IMP=0x002000000022a3c8
@property(readonly, nonatomic) PKCurrencyAmount *currentBalance; // @synthesize currentBalance=_currentBalance;
- (id)_messageString;	// IMP=0x001000000022a3a6
- (id)_titleString;	// IMP=0x001000000022a344
- (unsigned long long)notificationType;	// IMP=0x001000000022a339
- (_Bool)isValid;	// IMP=0x001000000022a2b4
- (void)updateWithNewBalance:(id)arg1 andNewReminderDate:(id)arg2;	// IMP=0x001000000022a23c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000022a1bf
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000022a124
- (id)initWithPassUniqueIdentifier:(id)arg1 currentBalance:(id)arg2 reminderDate:(id)arg3;	// IMP=0x001000000022a026

@end
