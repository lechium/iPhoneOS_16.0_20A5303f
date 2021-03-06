//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDecimalNumber;

@interface PDPassPaymentDailyDailyCashWithPercentageUserNotification
{
    NSDecimalNumber *_percentage;	// 136 = 0x88
    NSArray *_merchantNames;	// 144 = 0x90
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000232859
- (void).cxx_destruct;	// IMP=0x0020000000232d01
@property(readonly, nonatomic) NSArray *merchantNames; // @synthesize merchantNames=_merchantNames;
@property(readonly, nonatomic) NSDecimalNumber *percentage; // @synthesize percentage=_percentage;
- (unsigned long long)notificationType;	// IMP=0x0010000000232cd4
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x0010000000232861
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002327ba
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002326ce
- (id)initWithPercentage:(id)arg1 merchantNames:(id)arg2 periodAmount:(id)arg3 date:(id)arg4 hasRedemptions:(_Bool)arg5 forPassUniqueIdentifier:(id)arg6;	// IMP=0x00100000002325f5

@end

