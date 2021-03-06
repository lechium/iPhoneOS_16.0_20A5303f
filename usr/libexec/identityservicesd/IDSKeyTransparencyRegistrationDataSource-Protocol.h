//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString;

@protocol IDSKeyTransparencyRegistrationDataSource <NSObject>
- (_Bool)isiCloudSignedIn;
- (NSArray *)currentLocalKeyTransparencyEnrolledURIsForServiceIdentifier:(NSString *)arg1;
- (NSArray *)currentLocalKeyTransparencyEligibleServiceIdentifiers;
- (long long)expectedRemoteKeyTransparencyEligibilityForServiceIdentifier:(NSString *)arg1 pushToken:(NSData *)arg2;
- (NSData *)trustedRemoteKeyTransparencySignatureForServiceIdentifier:(NSString *)arg1 pushToken:(NSData *)arg2;
@end

