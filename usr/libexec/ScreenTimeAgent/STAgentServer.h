//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, STManagementStateServer, STRemoteUIPinService;

@interface STAgentServer : NSObject
{
    STManagementStateServer *_stateServer;	// 8 = 0x8
    STRemoteUIPinService *_remoteUIPINService;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000637b
@property(retain, nonatomic) STRemoteUIPinService *remoteUIPINService; // @synthesize remoteUIPINService=_remoteUIPINService;
@property(retain, nonatomic) STManagementStateServer *stateServer; // @synthesize stateServer=_stateServer;
- (void)setLocationSharingModificationAllowed:(_Bool)arg1 forDSID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000062b7
- (void)isLocationSharingModificationAllowedForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006231
- (void)applyIntroductionModel:(id)arg1 forDSID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000619c
- (void)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006116
- (void)shouldAllowOneMoreMinuteForWebDomain:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006090
- (void)shouldAllowOneMoreMinuteForBundleIdentifier:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000600a
- (void)permitWebFilterURL:(id)arg1 pageTitle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005f75
- (void)performMigrationFromMCXSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005eef
- (void)deleteAllWebApplicationHistory:(id)arg1 clientBundleURLWrapper:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005e5a
- (void)deleteWebHistoryDuringInterval:(id)arg1 webApplication:(id)arg2 clientBundleURLWrapper:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000005d93
- (void)deleteWebHistoryForURL:(id)arg1 webApplication:(id)arg2 clientBundleURLWrapper:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000005ccc
- (void)deleteAllWebApplicationHistory:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005c46
- (void)deleteWebHistoryDuringInterval:(id)arg1 webApplication:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005bb1
- (void)deleteWebHistoryForDomain:(id)arg1 webApplication:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005b1c
- (void)deleteWebHistoryForURL:(id)arg1 webApplication:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005a87
- (void)presentRemotePINControllerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005a15
- (void)isExplicitContentRestrictedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000059a3
- (void)contactManagementStateForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000591d
- (void)setContactManagementState:(long long)arg1 forDSID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000588f
- (void)primaryiCloudCardDAVAccountIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000581d
- (void)communicationPoliciesForDSID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005797
- (void)communicationPoliciesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005725
- (void)shouldRequestMoreTimeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000056b3
- (void)needsToSetRestrictionsPasscodeWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005641
- (void)isRestrictionsPasscodeSetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000055cf
- (void)clearRestrictionsPasscodeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000555d
- (void)isContentPrivacyEnabledForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000054d7
- (void)setScreenTimeSyncingEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000545f
- (void)screenTimeSyncStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000053ed
- (void)enableScreenTimeForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005367
- (void)setScreenTimeEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000052ef
- (void)screenTimeStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000527d
- (void)requestConfigurationWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000514e
- (id)initWithScreenTimeStateManager:(id)arg1;	// IMP=0x00100000000050ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

