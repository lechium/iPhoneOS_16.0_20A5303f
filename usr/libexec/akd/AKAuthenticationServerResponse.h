//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKMasterToken, AKToken, MISSING_TYPE, NSArray, NSData, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface AKAuthenticationServerResponse : NSObject
{
    NSMutableDictionary *_serviceTokens;	// 8 = 0x8
    _Bool _isRetryRequired;	// 16 = 0x10
    _Bool _isSecondaryActionRequired;	// 17 = 0x11
    _Bool _secondaryActionURLGSEndpoint;	// 18 = 0x12
    _Bool _isURLSwitchingRequired;	// 19 = 0x13
    _Bool _isAnisetteResyncRequired;	// 20 = 0x14
    _Bool _isAnisetteReprovisioningRequired;	// 21 = 0x15
    _Bool _shouldProxyAnisetteAction;	// 22 = 0x16
    _Bool _isManagedAppleID;	// 23 = 0x17
    _Bool _isAuditLogin;	// 24 = 0x18
    _Bool _isServerUIRequired;	// 25 = 0x19
    _Bool _isPasscodeResetRequired;	// 26 = 0x1a
    _Bool _requireSigningHeaders;	// 27 = 0x1b
    _Bool _allowPiggybacking;	// 28 = 0x1c
    _Bool _allowPiggybackingPresence;	// 29 = 0x1d
    _Bool _isUnderAgeOfMajority;	// 30 = 0x1e
    _Bool _isSenior;	// 31 = 0x1f
    _Bool _isFirstPartyApp;	// 32 = 0x20
    _Bool _primaryEmailVetted;	// 33 = 0x21
    _Bool _isDemoAccount;	// 34 = 0x22
    _Bool _authorizationUsed;	// 35 = 0x23
    _Bool _phoneAsAppleID;	// 36 = 0x24
    NSDictionary *_serverProvidedData;	// 40 = 0x28
    NSString *_appleID;	// 48 = 0x30
    NSNumber *_dsid;	// 56 = 0x38
    NSString *_altDSID;	// 64 = 0x40
    NSArray *_aliases;	// 72 = 0x48
    unsigned long long _appleIDSecurityLevel;	// 80 = 0x50
    unsigned long long _authMode;	// 88 = 0x58
    AKMasterToken *_masterToken;	// 96 = 0x60
    AKToken *_continuationToken;	// 104 = 0x68
    AKToken *_passwordResetToken;	// 112 = 0x70
    AKToken *_shortLivedToken;	// 120 = 0x78
    AKToken *_custodianSetupToken;	// 128 = 0x80
    NSString *_secondaryActionURLKey;	// 136 = 0x88
    NSString *_secondaryActionMessage;	// 144 = 0x90
    NSString *_urlSwitchingData;	// 152 = 0x98
    NSData *_anisetteResyncData;	// 160 = 0xa0
    long long _errorCode;	// 168 = 0xa8
    NSString *_errorMessage;	// 176 = 0xb0
    NSDictionary *_acceptedTermsInfo;	// 184 = 0xb8
    NSDictionary *_configurationInfo;	// 192 = 0xc0
    NSNumber *_acceptedDeviceTermsVersion;	// 200 = 0xc8
    NSString *_transactionId;	// 208 = 0xd0
    NSString *_serverInfo;	// 216 = 0xd8
    NSNumber *_ageOfMajority;	// 224 = 0xe0
    NSString *_privateEmail;	// 232 = 0xe8
    NSString *_primaryEmail;	// 240 = 0xf0
    NSDictionary *_additionalInfo;	// 248 = 0xf8
    NSString *_nativeActionURLKey;	// 256 = 0x100
    NSNumber *_canHaveCustodian;	// 264 = 0x108
    NSNumber *_canBeCustodian;	// 272 = 0x110
    NSNumber *_custodianEnabled;	// 280 = 0x118
    NSString *_custodianSessionID;	// 288 = 0x120
    NSNumber *_custodianLastModified;	// 296 = 0x128
    MISSING_TYPE *_canHaveBeneficiary;	// 304 = 0x130
    NSNumber *_canBeBeneficiary;	// 312 = 0x138
    NSString *_beneficiaryIdentifier;	// 320 = 0x140
    NSString *_beneficiaryWrappedKey;	// 328 = 0x148
    NSString *_appleIDCountryCode;	// 336 = 0x150
    NSNumber *_hasMDM;	// 344 = 0x158
    unsigned long long _managedOrganizationType;	// 352 = 0x160
    NSString *_managedOrganizationName;	// 360 = 0x168
    NSNumber *_isNotificationEmailAvailable;	// 368 = 0x170
    NSString *_notificationEmail;	// 376 = 0x178
    NSNumber *_privateAttestationEnabled;	// 384 = 0x180
    NSString *_firstName;	// 392 = 0x188
    NSString *_lastName;	// 400 = 0x190
    NSString *_imageURLString;	// 408 = 0x198
    NSString *_federatedAuthURL;	// 416 = 0x1a0
    NSData *_federatedAuthRequestPayload;	// 424 = 0x1a8
    NSDictionary *_federatedAuthSamlRequest;	// 432 = 0x1b0
    NSArray *_federatedAuthURLWhiteList;	// 440 = 0x1b8
}

+ (id)decodedConfigurationInfo:(id)arg1;	// IMP=0x004000000000c472
- (void).cxx_destruct;	// IMP=0x002000000000fb5f
@property(readonly, nonatomic) _Bool phoneAsAppleID; // @synthesize phoneAsAppleID=_phoneAsAppleID;
@property(readonly, nonatomic) _Bool authorizationUsed; // @synthesize authorizationUsed=_authorizationUsed;
@property(readonly, nonatomic) NSArray *federatedAuthURLWhiteList; // @synthesize federatedAuthURLWhiteList=_federatedAuthURLWhiteList;
@property(readonly, nonatomic) NSDictionary *federatedAuthSamlRequest; // @synthesize federatedAuthSamlRequest=_federatedAuthSamlRequest;
@property(readonly, nonatomic) NSData *federatedAuthRequestPayload; // @synthesize federatedAuthRequestPayload=_federatedAuthRequestPayload;
@property(readonly, nonatomic) NSString *federatedAuthURL; // @synthesize federatedAuthURL=_federatedAuthURL;
@property(readonly, nonatomic) _Bool isDemoAccount; // @synthesize isDemoAccount=_isDemoAccount;
@property(readonly, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) NSNumber *privateAttestationEnabled; // @synthesize privateAttestationEnabled=_privateAttestationEnabled;
@property(readonly, nonatomic) NSString *notificationEmail; // @synthesize notificationEmail=_notificationEmail;
@property(readonly, nonatomic) NSNumber *isNotificationEmailAvailable; // @synthesize isNotificationEmailAvailable=_isNotificationEmailAvailable;
@property(readonly, nonatomic) NSString *managedOrganizationName; // @synthesize managedOrganizationName=_managedOrganizationName;
@property(readonly, nonatomic) unsigned long long managedOrganizationType; // @synthesize managedOrganizationType=_managedOrganizationType;
@property(readonly, nonatomic) NSNumber *hasMDM; // @synthesize hasMDM=_hasMDM;
@property(readonly, nonatomic) NSString *appleIDCountryCode; // @synthesize appleIDCountryCode=_appleIDCountryCode;
@property(readonly, nonatomic) NSString *beneficiaryWrappedKey; // @synthesize beneficiaryWrappedKey=_beneficiaryWrappedKey;
@property(readonly, nonatomic) NSString *beneficiaryIdentifier; // @synthesize beneficiaryIdentifier=_beneficiaryIdentifier;
@property(readonly, nonatomic) NSNumber *canBeBeneficiary; // @synthesize canBeBeneficiary=_canBeBeneficiary;
@property(readonly, nonatomic) NSNumber *canHaveBeneficiary; // @synthesize canHaveBeneficiary=_canHaveBeneficiary;
@property(readonly, nonatomic) NSNumber *custodianLastModified; // @synthesize custodianLastModified=_custodianLastModified;
@property(readonly, nonatomic) NSString *custodianSessionID; // @synthesize custodianSessionID=_custodianSessionID;
@property(readonly, nonatomic) NSNumber *custodianEnabled; // @synthesize custodianEnabled=_custodianEnabled;
@property(readonly, nonatomic) NSNumber *canBeCustodian; // @synthesize canBeCustodian=_canBeCustodian;
@property(readonly, nonatomic) NSNumber *canHaveCustodian; // @synthesize canHaveCustodian=_canHaveCustodian;
@property(readonly, nonatomic) NSString *nativeActionURLKey; // @synthesize nativeActionURLKey=_nativeActionURLKey;
@property(readonly, nonatomic) NSDictionary *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(readonly, nonatomic) _Bool primaryEmailVetted; // @synthesize primaryEmailVetted=_primaryEmailVetted;
@property(readonly, nonatomic) NSString *primaryEmail; // @synthesize primaryEmail=_primaryEmail;
@property(readonly, nonatomic) NSString *privateEmail; // @synthesize privateEmail=_privateEmail;
@property(readonly, nonatomic) _Bool isFirstPartyApp; // @synthesize isFirstPartyApp=_isFirstPartyApp;
@property(readonly, nonatomic) NSNumber *ageOfMajority; // @synthesize ageOfMajority=_ageOfMajority;
@property(readonly, nonatomic) _Bool isSenior; // @synthesize isSenior=_isSenior;
@property(readonly, nonatomic) _Bool isUnderAgeOfMajority; // @synthesize isUnderAgeOfMajority=_isUnderAgeOfMajority;
@property(readonly, nonatomic) _Bool allowPiggybackingPresence; // @synthesize allowPiggybackingPresence=_allowPiggybackingPresence;
@property(readonly, nonatomic) _Bool allowPiggybacking; // @synthesize allowPiggybacking=_allowPiggybacking;
@property(readonly, nonatomic) NSString *serverInfo; // @synthesize serverInfo=_serverInfo;
@property(readonly, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(readonly, nonatomic) NSNumber *acceptedDeviceTermsVersion; // @synthesize acceptedDeviceTermsVersion=_acceptedDeviceTermsVersion;
@property(readonly, nonatomic) NSDictionary *configurationInfo; // @synthesize configurationInfo=_configurationInfo;
@property(readonly, nonatomic) _Bool requireSigningHeaders; // @synthesize requireSigningHeaders=_requireSigningHeaders;
@property(readonly, nonatomic) _Bool isPasscodeResetRequired; // @synthesize isPasscodeResetRequired=_isPasscodeResetRequired;
@property(readonly, nonatomic) _Bool isServerUIRequired; // @synthesize isServerUIRequired=_isServerUIRequired;
@property(readonly, nonatomic) _Bool isAuditLogin; // @synthesize isAuditLogin=_isAuditLogin;
@property(readonly, nonatomic) _Bool isManagedAppleID; // @synthesize isManagedAppleID=_isManagedAppleID;
@property(readonly, nonatomic) NSDictionary *acceptedTermsInfo; // @synthesize acceptedTermsInfo=_acceptedTermsInfo;
@property(readonly, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(readonly, nonatomic) _Bool shouldProxyAnisetteAction; // @synthesize shouldProxyAnisetteAction=_shouldProxyAnisetteAction;
@property(readonly, nonatomic) _Bool isAnisetteReprovisioningRequired; // @synthesize isAnisetteReprovisioningRequired=_isAnisetteReprovisioningRequired;
@property(readonly, nonatomic) NSData *anisetteResyncData; // @synthesize anisetteResyncData=_anisetteResyncData;
@property(readonly, nonatomic) _Bool isAnisetteResyncRequired; // @synthesize isAnisetteResyncRequired=_isAnisetteResyncRequired;
@property(readonly, nonatomic) NSString *urlSwitchingData; // @synthesize urlSwitchingData=_urlSwitchingData;
@property(readonly, nonatomic) _Bool isURLSwitchingRequired; // @synthesize isURLSwitchingRequired=_isURLSwitchingRequired;
@property(readonly, nonatomic) NSString *secondaryActionMessage; // @synthesize secondaryActionMessage=_secondaryActionMessage;
@property(readonly, nonatomic, getter=isSecondaryActionURLGSEndpoint) _Bool secondaryActionURLGSEndpoint; // @synthesize secondaryActionURLGSEndpoint=_secondaryActionURLGSEndpoint;
@property(readonly, nonatomic) NSString *secondaryActionURLKey; // @synthesize secondaryActionURLKey=_secondaryActionURLKey;
@property(readonly, nonatomic) _Bool isSecondaryActionRequired; // @synthesize isSecondaryActionRequired=_isSecondaryActionRequired;
@property(readonly, nonatomic) _Bool isRetryRequired; // @synthesize isRetryRequired=_isRetryRequired;
@property(readonly, nonatomic) NSDictionary *serviceTokens; // @synthesize serviceTokens=_serviceTokens;
@property(readonly, nonatomic) AKToken *custodianSetupToken; // @synthesize custodianSetupToken=_custodianSetupToken;
@property(readonly, nonatomic) AKToken *shortLivedToken; // @synthesize shortLivedToken=_shortLivedToken;
@property(readonly, nonatomic) AKToken *passwordResetToken; // @synthesize passwordResetToken=_passwordResetToken;
@property(readonly, nonatomic) AKToken *continuationToken; // @synthesize continuationToken=_continuationToken;
@property(readonly, nonatomic) AKMasterToken *masterToken; // @synthesize masterToken=_masterToken;
@property(readonly, nonatomic) unsigned long long authMode; // @synthesize authMode=_authMode;
@property(readonly, nonatomic) unsigned long long appleIDSecurityLevel; // @synthesize appleIDSecurityLevel=_appleIDSecurityLevel;
@property(readonly, nonatomic) NSArray *aliases; // @synthesize aliases=_aliases;
@property(readonly, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(readonly, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(readonly, nonatomic) NSDictionary *serverProvidedData; // @synthesize serverProvidedData=_serverProvidedData;
- (id)_numberFormatter;	// IMP=0x001000000000f7cd
- (id)_decodeBase64String:(id)arg1;	// IMP=0x001000000000f744
- (void)_updateDSIDWithRawValue:(id)arg1;	// IMP=0x001000000000f643
- (_Bool)updateWithSecondaryAuthenticationResponse:(id)arg1 shouldUpdateDSID:(_Bool)arg2;	// IMP=0x001000000000e7cb
- (_Bool)updateWithSecondaryAuthenticationResponse:(id)arg1;	// IMP=0x001000000000e7b7
- (void)_updateAccountInformationWithResultsDictionary:(id)arg1;	// IMP=0x001000000000e341
- (void)updateWithSecondaryAuthenticationBody:(id)arg1;	// IMP=0x001000000000e28e
@property(readonly, nonatomic) _Bool isUpdateable;
- (void)_setHeartbeatToken:(id)arg1;	// IMP=0x001000000000e263
@property(readonly, nonatomic) AKToken *inheritanceBeneficiarySetupToken;
@property(readonly, nonatomic) AKToken *heartbeatToken;
- (void)_setPasswordEquivalentToken:(id)arg1;	// IMP=0x001000000000e20c
@property(readonly, nonatomic) AKToken *passwordEquivalentToken;
- (void)_harvestManagedAppleIDInfoFromDictionary:(id)arg1;	// IMP=0x001000000000de7f
- (void)_harvestCommonFieldsFromBody:(id)arg1;	// IMP=0x001000000000d923
- (void)_harvestCommonFieldsFromResponse:(id)arg1;	// IMP=0x001000000000d67c
- (id)initWithServerResponse:(id)arg1 responseBody:(id)arg2;	// IMP=0x001000000000d5c4
- (id)initWithServerResponse:(id)arg1 forAppleID:(id)arg2;	// IMP=0x001000000000d511
- (id)_federatedPayloadFromInfo:(id)arg1;	// IMP=0x001000000000d436
- (id)initWithSRPContext:(id)arg1;	// IMP=0x001000000000c64f

@end
