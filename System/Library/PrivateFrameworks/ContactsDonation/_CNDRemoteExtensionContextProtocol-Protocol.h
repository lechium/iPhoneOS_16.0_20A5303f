//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsDonation/NSObject-Protocol.h>

@class CNDonationValue;

@protocol _CNDRemoteExtensionContextProtocol <NSObject>
- (void)redonateAllValuesWithReason:(unsigned long long)arg1;
- (void)renewExpirationDateForDonatedValue:(CNDonationValue *)arg1 acknowledgementHandler:(void (^)(NSDate *, NSError *))arg2;
@end

