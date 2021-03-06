//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MOEffectiveSettings, NSArray, NSManagedObjectContext, NSMapTable, NSPersistentContainer, NSString;
@protocol OS_dispatch_queue;

@interface DMDPolicyPersistence : NSObject
{
    NSMapTable *_contextsByXPCConnection;	// 8 = 0x8
    _Bool _isPersistentContainerLoaded;	// 16 = 0x10
    NSManagedObjectContext *_internalContext;	// 24 = 0x18
    NSManagedObjectContext *_registrationContext;	// 32 = 0x20
    NSPersistentContainer *_persistentContainer;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_emergencyModeQueue;	// 48 = 0x30
    MOEffectiveSettings *_effectiveSettings;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000730a6
@property(readonly, nonatomic) MOEffectiveSettings *effectiveSettings; // @synthesize effectiveSettings=_effectiveSettings;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *emergencyModeQueue; // @synthesize emergencyModeQueue=_emergencyModeQueue;
@property(readonly, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(retain, nonatomic) NSManagedObjectContext *registrationContext; // @synthesize registrationContext=_registrationContext;
@property(retain, nonatomic) NSManagedObjectContext *internalContext; // @synthesize internalContext=_internalContext;
@property(nonatomic) _Bool isPersistentContainerLoaded; // @synthesize isPersistentContainerLoaded=_isPersistentContainerLoaded;
- (void)handleManagedEffectiveSettingsChangeInGroup:(id)arg1;	// IMP=0x0010000000072e83
- (void)handleDistributedNotificationWithName:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000072c7b
- (void)handleNotifyMatchingNotificationWithName:(id)arg1;	// IMP=0x0010000000072bd6
- (void)handleAlarmWithIdentifier:(id)arg1;	// IMP=0x0010000000072afc
@property(readonly, nonatomic) NSArray *managedSettingsGroups;
@property(readonly, nonatomic) NSArray *distributedNotificationNames;
@property(readonly, nonatomic) NSArray *notifyMatchingNotifications;
@property(readonly, nonatomic) _Bool alarms;
- (void)emergencyModeStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000007268b
- (void)disableEmergencyModeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000072517
- (void)_enableEmergencyModeUntilDate:(id)arg1 referenceDate:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000072252
- (void)enableEmergencyModeForDuration:(double)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007210f
- (void)enableEmergencyModeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000071fa0
- (void)_notifyClientsRegisteredForPolicyType:(id)arg1;	// IMP=0x0010000000071c68
- (void)_removeOrphanedPoliciesFromFetchRequest:(id)arg1 managedObjectContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000071481
- (void)removeOrphanedPoliciesNotBelongingToExistingDeclarationIdentifiersByOrganizationIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000711b9
- (void)removeOrphanedPoliciesNotBelongingToExistingOrganizationIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000071010
- (void)removeEffectivePolicyFromOrganizationIdentifier:(id)arg1 declarationIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007080a
- (_Bool)_upsertPolicy:(long long)arg1 forType:(id)arg2 identifier:(id)arg3 priority:(unsigned long long)arg4 organizationIdentifier:(id)arg5 declarationIdentifier:(id)arg6 policyToUpdate:(id)arg7 managedObjectContext:(id)arg8;	// IMP=0x0010000000070590
- (void)setEffectivePolicy:(long long)arg1 forType:(id)arg2 identifiers:(id)arg3 priority:(unsigned long long)arg4 organizationIdentifier:(id)arg5 declarationIdentifier:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x001000000006fa95
- (id)_effectivePolicyForManagedSettingsIdentifier:(id)arg1 type:(id)arg2 excludedIdentifiers:(id)arg3;	// IMP=0x001000000006f990
- (id)_effectiveCategoryPoliciesForCategoryShieldPolicy:(id)arg1 type:(id)arg2 excludedIdentifiersKey:(id)arg3;	// IMP=0x001000000006f4ad
- (void)requestPoliciesForTypes:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000006e22d
- (void)addRegistration:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000006dc09
- (void)_performBackgroundTask:(CDUnknownBlockType)arg1;	// IMP=0x001000000006d9e6
- (void)_performRegistrationBackgroundTask:(CDUnknownBlockType)arg1;	// IMP=0x001000000006d8be
- (_Bool)_loadPersistentStoreIfNeeded:(id *)arg1;	// IMP=0x001000000006d2bd
- (id)initWithPersistentStoreDescriptions:(id)arg1;	// IMP=0x001000000006cf1f
- (id)init;	// IMP=0x001000000006ce40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

