//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface PDAccountServicingTokenUserNotification
{
    NSString *_servicingToken;	// 112 = 0x70
    NSDate *_expirationDate;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000235aa1
+ (id)notificationIdentifierWithAccount:(id)arg1;	// IMP=0x00100000002358f4
- (void).cxx_destruct;	// IMP=0x0020000000235dd6
- (id)_messageString;	// IMP=0x0010000000235db1
- (id)_titleString;	// IMP=0x0010000000235da0
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x0010000000235ccb
- (_Bool)isValid;	// IMP=0x0010000000235c42
- (unsigned long long)notificationType;	// IMP=0x0010000000235c37
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000235b98
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000235aa9
- (id)initWithAccount:(id)arg1 servicingToken:(id)arg2 expirationDate:(id)arg3;	// IMP=0x0010000000235984

@end
