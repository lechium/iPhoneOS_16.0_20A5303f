//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSTransparentEndpointViewer : NSObject
{
}

- (void)internal_nukeTransparencyState:(CDUnknownBlockType)arg1;	// IMP=0x00400000006d5e40
- (void)internal_nukeCloudKitTransparencyStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000006d5d00
- (void)internal_fetchCloudKitTransparencyStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000006d5900
- (void)internal_fetchVerifierAccountKeyPublicDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000006d5750
- (void)internal_fetchVerifierAccountKeyTrustedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000006d5410
- (void)internal_fetchVerifierCloudKitTrustedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000006d50d0
- (void)internal_fetchVerifierTrustedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000006d4d90
- (void)internal_kickVerificationForServiceIdentifier:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000006d49b0
- (void)internal_fetchTransparentEndpointsForServiceIdentifier:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 verifyAgainstTrustCircle:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000006d42a0
- (void)internal_fetchEndpointCacheStateForServiceIdentifier:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000006d40a0
- (id)_keyTransparencyEntriesForEndpoints:(id)arg1;	// IMP=0x00100000006d3e20
- (void)performOutstandingKeyTransparencyVerificationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000006d3080
- (void)schedulePeriodicKeyTransparencyVerificationActivity;	// IMP=0x00100000006d2650
- (id)_peerIDManager;	// IMP=0x00100000006d2620
- (id)_registrationKeyManager;	// IMP=0x00100000006d25f0
- (id)_cloudKitContainer;	// IMP=0x00100000006d2580
- (id)_verifier;	// IMP=0x00100000006d2550

@end

