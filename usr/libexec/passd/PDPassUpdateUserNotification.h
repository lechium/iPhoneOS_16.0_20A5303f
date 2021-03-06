//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PKDiff;

@interface PDPassUpdateUserNotification
{
    NSArray *_passDiffs;	// 112 = 0x70
}

+ (_Bool)supportsCoalescing;	// IMP=0x0020000000224120
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000223fa9
- (void).cxx_destruct;	// IMP=0x0020000000224e0a
@property(readonly, nonatomic) NSArray *passDiffs; // @synthesize passDiffs=_passDiffs;
- (id)passUniqueIdentifier;	// IMP=0x0010000000224da9
@property(readonly, nonatomic) PKDiff *primaryPassDiff;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x0010000000224b54
- (unsigned long long)coalesceWithExistingUserNotification:(id)arg1;	// IMP=0x001000000022417b
- (_Bool)isValid;	// IMP=0x0010000000224133
- (unsigned long long)notificationType;	// IMP=0x0010000000224128
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002240a3
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000223fb1
- (id)initWithPassDiff:(id)arg1;	// IMP=0x0010000000223e21

@end

