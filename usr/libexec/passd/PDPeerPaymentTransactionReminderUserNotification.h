//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDPeerPaymentTransactionReminderUserNotification
{
    unsigned long long _reminderPeriod;	// 128 = 0x80
}

+ (id)notificationIdentifierForTransactionServiceIdentifier:(id)arg1 reminderPeriod:(unsigned long long)arg2;	// IMP=0x00200000002299c8
@property(readonly, nonatomic) unsigned long long reminderPeriod; // @synthesize reminderPeriod=_reminderPeriod;
- (id)_acceptanceReminderApplicationMessageContentWithTitleText:(id)arg1 messageText:(id)arg2;	// IMP=0x0010000000229e5e
- (id)_acceptanceReminderApplicationMessageGroupDescriptor;	// IMP=0x0010000000229e07
- (id)applicationMessageContent;	// IMP=0x0010000000229d84
- (id)_messageString;	// IMP=0x0010000000229c3f
- (id)_titleString;	// IMP=0x0010000000229bfb
- (unsigned long long)notificationType;	// IMP=0x0010000000229bf0
- (id)initWithPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 familyMember:(id)arg3 reminderPeriod:(unsigned long long)arg4;	// IMP=0x0010000000229a05

@end
