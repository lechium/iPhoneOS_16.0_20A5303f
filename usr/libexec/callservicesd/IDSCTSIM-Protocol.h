//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IDSCTSIM <NSObject>
@property(nonatomic, readonly) NSString *mobileNetworkCode;
@property(nonatomic, readonly) NSString *mobileCountryCode;
@property(nonatomic, readonly) unsigned long long slot;
@property(nonatomic, readonly) _Bool isDefaultVoiceSIM;
@property(nonatomic, readonly) NSString *label;
@property(nonatomic, readonly) NSString *phoneNumber;
@property(nonatomic, readonly) NSString *SIMIdentifier;
@end
