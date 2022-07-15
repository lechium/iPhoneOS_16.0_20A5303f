//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDecimalNumber, NSString;

@interface PDPassLowBalanceReminderUserNotification
{
    NSDecimalNumber *_currentBalanceAmount;	// 112 = 0x70
    NSString *_currentBalanceCurrency;	// 120 = 0x78
    NSDecimalNumber *_reminderAmount;	// 128 = 0x80
    NSString *_reminderCurrency;	// 136 = 0x88
    NSString *_balanceIdentifier;	// 144 = 0x90
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002280d4
- (void).cxx_destruct;	// IMP=0x002000000022852f
@property(readonly, nonatomic) NSString *balanceIdentifier; // @synthesize balanceIdentifier=_balanceIdentifier;
@property(readonly, nonatomic) NSString *reminderCurrency; // @synthesize reminderCurrency=_reminderCurrency;
@property(readonly, nonatomic) NSDecimalNumber *reminderAmount; // @synthesize reminderAmount=_reminderAmount;
@property(readonly, nonatomic) NSString *currentBalanceCurrency; // @synthesize currentBalanceCurrency=_currentBalanceCurrency;
@property(readonly, nonatomic) NSDecimalNumber *currentBalanceAmount; // @synthesize currentBalanceAmount=_currentBalanceAmount;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x0010000000228441
- (id)_messageString;	// IMP=0x00100000002283d9
- (id)_titleString;	// IMP=0x0010000000228371
- (unsigned long long)notificationType;	// IMP=0x0010000000228366
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000228276
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002280dc
- (void)updateReminderAmount:(id)arg1 currency:(id)arg2;	// IMP=0x001000000022805a
- (void)updateBalanceAmount:(id)arg1 currency:(id)arg2;	// IMP=0x0010000000227fe0
- (id)initWithCurrentBalance:(id)arg1 balanceCurrency:(id)arg2 reminderAmount:(id)arg3 reminderCurrency:(id)arg4 passUniqueIdentifier:(id)arg5 balanceIdentifier:(id)arg6;	// IMP=0x0010000000227e73

@end
