//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface PDNotificationServiceTransactionAuthenticationTask
{
    NSString *_dpanIdentifier;	// 24 = 0x18
    NSString *_transactionServiceIdentifier;	// 32 = 0x20
    NSData *_authenticationResultsData;	// 40 = 0x28
    NSData *_signature;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000002a8743
+ (id)transactionAuthenticationTaskWithNotificationService:(id)arg1 dpanIdentifier:(id)arg2 transactionServiceIdentifier:(id)arg3 authenticationResultsData:(id)arg4 signature:(id)arg5;	// IMP=0x00100000002a8580
- (void).cxx_destruct;	// IMP=0x00200000002a9731
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSData *authenticationResultsData; // @synthesize authenticationResultsData=_authenticationResultsData;
@property(readonly, nonatomic) NSString *transactionServiceIdentifier; // @synthesize transactionServiceIdentifier=_transactionServiceIdentifier;
@property(readonly, nonatomic) NSString *dpanIdentifier; // @synthesize dpanIdentifier=_dpanIdentifier;
- (id)_resultFromResponseData:(id)arg1;	// IMP=0x00100000002a96a0
- (void)_reportForbiddenErrorResponse:(id)arg1;	// IMP=0x00100000002a9500
- (void)_reportUnexpectedResponseCode:(long long)arg1;	// IMP=0x00100000002a94b0
- (void)_reportAuthenticationFailure;	// IMP=0x00100000002a9466
- (_Bool)pertainsToNotificationService:(id)arg1 andDPANIdentifier:(id)arg2;	// IMP=0x00100000002a938f
- (void)handleError:(id)arg1;	// IMP=0x00100000002a92c3
- (void)handleResponse:(id)arg1 data:(id)arg2;	// IMP=0x00100000002a90f6
- (_Bool)backoffComplete;	// IMP=0x00100000002a90ee
- (_Bool)matchesTask:(id)arg1;	// IMP=0x00100000002a8dcc
- (id)description;	// IMP=0x00100000002a8cc8
- (id)bodyDictionary;	// IMP=0x00100000002a8be6
- (id)method;	// IMP=0x00100000002a8bd9
- (id)endpointComponents;	// IMP=0x00100000002a8a70
- (long long)taskType;	// IMP=0x00100000002a8a65
- (_Bool)isValid;	// IMP=0x00100000002a8981
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002a88ac
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002a874b
- (id)initWithNotificationService:(id)arg1 dpanIdentifier:(id)arg2 transactionServiceIdentifier:(id)arg3 authenticationResultsData:(id)arg4 signature:(id)arg5;	// IMP=0x00100000002a8648

@end

