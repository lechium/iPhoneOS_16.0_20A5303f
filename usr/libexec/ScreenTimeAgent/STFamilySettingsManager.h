//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSTimer, STScreenTimeCapabilities;
@protocol STPersistenceControllerProtocol;

@interface STFamilySettingsManager : NSObject
{
    STScreenTimeCapabilities *_capabilities;	// 8 = 0x8
    NSDictionary *_familyMemberByAppleID;	// 16 = 0x10
    id <STPersistenceControllerProtocol> _persistenceController;	// 24 = 0x18
    NSTimer *_notificationDelayTimer;	// 32 = 0x20
}

+ (id)_notificationForClearingChildContactManagementUserNotification;	// IMP=0x0040000000043b51
+ (id)_notificationForClearingParentContactManagementUserNotificiationAboutChildWithName:(id)arg1;	// IMP=0x0010000000043ac2
+ (id)_childPresentedContactManagementNotificationForTransition:(long long)arg1 childIsManaged:(_Bool)arg2;	// IMP=0x0010000000043636
+ (id)_parentPresentedContactManagementNotificationForTransition:(long long)arg1 childName:(id)arg2;	// IMP=0x00100000000434da
+ (long long)_contactManagementStateTransitionFromOldManagementState:(long long)arg1 toNewContactManagementState:(long long)arg2;	// IMP=0x0010000000043485
+ (_Bool)_shouldPurgeBlueprintsBasedOnScreenTimeManagementStateTransition:(long long)arg1;	// IMP=0x0010000000043478
+ (void)_updateScreenTimeEnabledNotificationShownUserDefaultForTransition:(long long)arg1;	// IMP=0x001000000004324a
+ (void)_postScreenTimeManagementEnabledNotification:(id)arg1;	// IMP=0x0010000000043172
+ (id)_screenTimeManagementNotificationForTransition:(long long)arg1;	// IMP=0x001000000004302d
+ (_Bool)_updateScreenTimeSettingsForTransition:(long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000042e78
+ (long long)_screenTimeManagementStateTransitionFromOldManagementState:(_Bool)arg1 toNewManagementState:(_Bool)arg2;	// IMP=0x0010000000042e54
+ (id)_processFamilySettings:(id)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000041dad
- (void).cxx_destruct;	// IMP=0x0020000000044285
@property(retain) NSTimer *notificationDelayTimer; // @synthesize notificationDelayTimer=_notificationDelayTimer;
@property(readonly, nonatomic) id <STPersistenceControllerProtocol> persistenceController; // @synthesize persistenceController=_persistenceController;
@property(retain, nonatomic) NSDictionary *familyMemberByAppleID; // @synthesize familyMemberByAppleID=_familyMemberByAppleID;
@property(readonly) STScreenTimeCapabilities *capabilities; // @synthesize capabilities=_capabilities;
- (void)_handleDontApproveNotificationForManageContactsRequest:(id)arg1;	// IMP=0x001000000004419c
- (void)_handleApproveNotificationForManageContactsRequest:(id)arg1;	// IMP=0x001000000004410c
- (void)_updateContactManagementToState:(long long)arg1;	// IMP=0x0010000000043bab
- (void)_postContactManagementNotification:(id)arg1 notificationIsForParent:(_Bool)arg2;	// IMP=0x00100000000437ce
- (void)_performEffectsForProcessSettingsResult:(id)arg1 localUserDSID:(id)arg2 localUserIsParent:(_Bool)arg3 context:(id)arg4;	// IMP=0x00100000000425bb
- (id)handleFamilySettings:(id)arg1 inContext:(id)arg2;	// IMP=0x0010000000041893
- (void)handleFamilySettingsPayload:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000041195
- (void)prepareSettingsPayloadsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004029d
- (void)registerFamilyMembers:(id)arg1;	// IMP=0x001000000004000e
- (id)initWithCapabilities:(id)arg1 persistenceController:(id)arg2;	// IMP=0x001000000003fefc

@end

