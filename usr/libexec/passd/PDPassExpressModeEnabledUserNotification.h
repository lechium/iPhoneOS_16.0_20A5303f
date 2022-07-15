//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface PDPassExpressModeEnabledUserNotification
{
    unsigned long long _hideDisableAction;	// 128 = 0x80
    NSDate *_promoteEndDate;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000223846
- (void).cxx_destruct;	// IMP=0x0020000000223ab8
@property(readonly, nonatomic) NSDate *promoteEndDate; // @synthesize promoteEndDate=_promoteEndDate;
@property(readonly, nonatomic) unsigned long long hideDisableAction; // @synthesize hideDisableAction=_hideDisableAction;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x0010000000223a58
- (unsigned long long)notificationType;	// IMP=0x0010000000223a1a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000022394d
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000022384e
- (_Bool)promotionActive;	// IMP=0x00100000002237d8
- (id)initWithTitle:(id)arg1 message:(id)arg2 forPassUniqueIdentifier:(id)arg3;	// IMP=0x00100000002237bd
- (id)initAsUnpromotedReplacementForNotification:(id)arg1;	// IMP=0x001000000022366a
- (id)initWithTitle:(id)arg1 message:(id)arg2 forPassUniqueIdentifier:(id)arg3 hideDisableAction:(unsigned long long)arg4 promoteDuration:(double)arg5;	// IMP=0x00100000002233a2

@end
