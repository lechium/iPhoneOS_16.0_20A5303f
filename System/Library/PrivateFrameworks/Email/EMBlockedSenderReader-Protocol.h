//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/NSObject-Protocol.h>

@class CNContact, NSArray, NSSet, NSString;
@protocol EMBlockedSenderTokenAddress;

@protocol EMBlockedSenderReader <NSObject>
@property(readonly, copy, nonatomic) NSSet *blockedSenderEmailAddresses;
- (_Bool)isContactBlocked:(CNContact *)arg1;
- (_Bool)isTokenAddressIsBlocked:(id <EMBlockedSenderTokenAddress>)arg1;
- (_Bool)areAnyEmailAddressesBlocked:(NSArray *)arg1;
- (_Bool)isEmailAddressBlocked:(NSString *)arg1;
@end
