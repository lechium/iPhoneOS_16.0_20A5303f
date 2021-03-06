//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKAccountService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00200000001b3f65
+ (Class)interfaceClass;	// IMP=0x00100000001b3f54
- (oneway void)setLastContactsIntegrationConsentVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x00200000001b7150
- (oneway void)getLastContactsIntegrationConsentVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b6d2d
- (oneway void)setLastProfilePrivacyVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x00100000001b6a77
- (oneway void)getLastProfilePrivacyVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b6654
- (oneway void)getLastPersonalizationVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b6231
- (oneway void)setLastPersonalizationVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x00100000001b5f7b
- (oneway void)getLastPrivacyNoticeVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b5ae3
- (oneway void)setLastPrivacyNoticeVersionDisplayedForSignedInPlayer:(unsigned long long)arg1;	// IMP=0x00100000001b5798
- (oneway void)signOutPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b42c3
- (oneway void)resetCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b4247
- (oneway void)authenticationWasCancelled;	// IMP=0x00100000001b41f2
- (oneway void)fetchItemsForIdentityVerificationSignature:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b40f4
- (oneway void)generateIdentityVerificationSignatureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b3ff6
- (oneway void)authenticatePlayerWithExistingCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b3f76
- (void)notifyWidgetPlayerAuthenticationUpdated;	// IMP=0x00100000001b3f70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

