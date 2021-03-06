//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSSQLiteEntity.h>

@interface ApplicationWorkspaceState : SSSQLiteEntity
{
}

+ (_Bool)_incompleteNotification:(id)arg1 forDownload:(long long)arg2 bundleIdentifier:(id)arg3;	// IMP=0x004000000004a42e
+ (_Bool)_completeNotification:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x001000000004a2e1
+ (_Bool)incompleteNotificationForInstallingDownload:(long long)arg1 bundleIdentifier:(id)arg2;	// IMP=0x001000000004a2bf
+ (_Bool)incompleteNotificationForFailedDownload:(long long)arg1 bundleIdentifier:(id)arg2;	// IMP=0x001000000004a29d
+ (_Bool)incompleteNotificationForCanceledDownload:(long long)arg1 bundleIdentifier:(id)arg2;	// IMP=0x001000000004a27b
+ (_Bool)deleteIncompleteNotification:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x001000000004a269
+ (_Bool)completeNotificationForInstallingBundleIdentifier:(id)arg1;	// IMP=0x001000000004a24a
+ (_Bool)completeNotificationForFailedBundleIdentifier:(id)arg1;	// IMP=0x001000000004a22b
+ (_Bool)completeNotificationForCanceledBundleIdentifier:(id)arg1;	// IMP=0x001000000004a20c
+ (id)databaseTable;	// IMP=0x001000000004a1ff

@end

