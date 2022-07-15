//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (HealthKit)
+ (_Bool)hk_assignError:(id *)arg1 nilArgument:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;	// IMP=0x0060000000023e3e
+ (_Bool)hk_assignError:(id *)arg1 invalidArgument:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;	// IMP=0x0060000000023dd4
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 userInfo:(id)arg3;	// IMP=0x0060000000023d69
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 format:(id)arg3;	// IMP=0x0060000000015eef
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;	// IMP=0x0060000000023cff
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 description:(id)arg3;	// IMP=0x0060000000016013
+ (id)hk_transactionInterruptedError;	// IMP=0x0060000000023cda
+ (id)hk_databaseSchemaRolledBackError;	// IMP=0x0060000000023cb3
+ (id)hk_healthStoreUnavailableError;	// IMP=0x0060000000023c8e
+ (id)hk_invalidProfileError;	// IMP=0x0060000000023c4a
+ (id)hk_featureUnavailableForProfileError;	// IMP=0x0060000000023c25
+ (id)hk_protectedDataInaccessibilityError;	// IMP=0x0060000000002e5e
+ (id)hk_databaseInaccessibleBeforeFirstUnlockError;	// IMP=0x0060000000023c00
+ (id)hk_healthDataUnavailableError;	// IMP=0x0060000000023bdb
+ (id)hk_errorForNilArgument:(id)arg1 class:(Class)arg2 selector:(SEL)arg3;	// IMP=0x0060000000023a57
+ (id)hk_errorForInvalidArgument:(id)arg1 class:(Class)arg2 selector:(SEL)arg3 format:(id)arg4;	// IMP=0x0060000000023831
+ (id)hk_errorForInvalidArgument:(id)arg1 class:(Class)arg2 selector:(SEL)arg3;	// IMP=0x00600000000236ab
+ (id)hk_error:(long long)arg1 class:(Class)arg2 selector:(SEL)arg3 format:(id)arg4;	// IMP=0x00600000000234ba
+ (id)hk_error:(long long)arg1 format:(id)arg2;	// IMP=0x0060000000017f90
+ (id)hk_error:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0060000000023498
+ (id)hk_error:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;	// IMP=0x006000000001607a
+ (id)hk_error:(long long)arg1 description:(id)arg2;	// IMP=0x0060000000002e83
+ (id)hk_HTTPErrorWithHTTPStatusCode:(long long)arg1 URLResponse:(id)arg2;	// IMP=0x00600000000a2536
+ (id)hk_HTTPErrorRepresentingResponse:(id)arg1 request:(id)arg2;	// IMP=0x00600000000a21c1
+ (id)_hk_OAuth2_errorFromResponseData:(id)arg1 defaultError:(id)arg2 parseError:(id *)arg3;	// IMP=0x00600000001baaa2
+ (id)_hk_OAuth2_errorForBadRequestStatusWithResponse:(id)arg1 data:(id)arg2;	// IMP=0x00600000001ba990
+ (id)_hk_OAuth2_errorForUnauthorizedStatusWithRequest:(id)arg1 response:(id)arg2;	// IMP=0x00600000001ba814
+ (id)_hk_OAuth2_rawErrorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3;	// IMP=0x00600000001ba716
+ (id)hk_OAuth2_errorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3;	// IMP=0x00600000001ba5d0
+ (id)hk_OAuth2_errorFromErrorValue:(id)arg1;	// IMP=0x00600000001ba3cb
+ (id)_hk_OAuth2_defaultDescriptionForErrorCode:(long long)arg1;	// IMP=0x00600000001ba3ac
+ (id)_hk_OAuth2_error:(long long)arg1 userInfo:(id)arg2 underlyingError:(id)arg3;	// IMP=0x00600000001ba1fe
+ (id)hk_OAuth2_error:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x00600000001ba1e7
+ (id)hk_OAuth2_error:(long long)arg1;	// IMP=0x00600000001ba1d3
- (id)hk_errorByAddingEntriesToUserInfo:(id)arg1;	// IMP=0x00100000000245ff
- (id)hk_sanitizedErrorForDomain:(id)arg1;	// IMP=0x0010000000024529
- (id)hk_sanitizedError;	// IMP=0x00100000000244ff
- (id)hk_underlyingErrorWithDomain:(id)arg1;	// IMP=0x00100000000243e7
- (_Bool)hk_isErrorInDomain:(id)arg1 code:(long long)arg2;	// IMP=0x0010000000024350
- (_Bool)hk_isHFDUnsupportedError;	// IMP=0x0010000000024339
- (_Bool)hk_isXPCConnectionInterruptedError;	// IMP=0x0010000000024318
- (_Bool)hk_isXPCConnectionError;	// IMP=0x001000000002428c
- (_Bool)hk_isCocoaFileExistsError;	// IMP=0x0010000000024219
- (_Bool)hk_isCocoaNoSuchFileError;	// IMP=0x00100000000241a4
- (_Bool)hk_isUserCanceledError;	// IMP=0x0010000000024168
- (_Bool)hk_isTimeoutError;	// IMP=0x001000000002412c
- (_Bool)hk_isStreamFailureError;	// IMP=0x00100000000240f0
- (_Bool)hk_isRequiredAuthorizationError;	// IMP=0x00100000000240b4
- (_Bool)hk_isFeatureDisabledError;	// IMP=0x001000000002409d
- (_Bool)hk_isInternalFailureError;	// IMP=0x0010000000024061
- (_Bool)hk_isInvalidArgumentError;	// IMP=0x0010000000024025
- (_Bool)hk_isAuthorizationNotDeterminedError;	// IMP=0x0010000000023fe9
- (_Bool)hk_isAuthorizationDeniedError;	// IMP=0x0010000000023fad
- (_Bool)hk_isServiceDeviceNotFoundError;	// IMP=0x0010000000023f6f
- (_Bool)hk_isTransactionInterruptedError;	// IMP=0x0010000000023f58
- (_Bool)hk_isObjectNotFoundError;	// IMP=0x0010000000023f41
- (_Bool)hk_isDuplicateObjectError;	// IMP=0x0010000000023f2a
- (_Bool)hk_isDatabaseSchemaRolledBackError;	// IMP=0x0010000000023f13
- (_Bool)hk_isHealthStoreUnavailableError;	// IMP=0x0010000000023efc
- (_Bool)hk_isDatabaseTransactionError;	// IMP=0x0010000000023ee5
- (_Bool)hk_isDatabaseAccessibilityError;	// IMP=0x001000000000448d
- (_Bool)hk_isHealthKitErrorWithCode:(long long)arg1;	// IMP=0x0010000000023ea8
- (_Bool)hk_isHealthKitError;	// IMP=0x00100000000044d2
- (id)_hk_OAuth2_errorByAddingItemsToUserInfo:(id)arg1;	// IMP=0x00100000001bade2
- (_Bool)hk_OAuth2_isBearerAuthenticationError;	// IMP=0x00100000001badcb
- (_Bool)hk_OAuth2_isAccessDeniedError;	// IMP=0x00100000001badb4
- (_Bool)hk_OAuth2_isOAuth2ErrorWithCode:(long long)arg1;	// IMP=0x00100000001bad77
- (_Bool)hk_OAuth2_isOAuth2Error;	// IMP=0x00100000001bad2c
@end
