//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface ANNotificationStore : NSObject
{
    NSManagedObjectContext *_managedObjectContext;	// 8 = 0x8
    NSPersistentStoreCoordinator *_storeCoordinator;	// 16 = 0x10
}

+ (id)sharedStore;	// IMP=0x0040000000001bba
- (void).cxx_destruct;	// IMP=0x0020000000004019
- (id)_copyPersistentStoreFilePath;	// IMP=0x0010000000003f56
- (id)_managedObjectModel;	// IMP=0x0010000000003e51
- (void)_createManagedObjectContext;	// IMP=0x0010000000003b99
- (_Bool)_unsafe_commitChangesInManagedObjectContext;	// IMP=0x0010000000003af0
- (_Bool)removeNotificationWithIdentifier:(id)arg1;	// IMP=0x0010000000003680
- (_Bool)removeAllNotificationsForAccountTypeID:(id)arg1;	// IMP=0x001000000000325f
- (_Bool)limitPendingNotificationsForAccountTypeID:(id)arg1 toMaximumCount:(unsigned long long)arg2;	// IMP=0x0010000000002af5
- (_Bool)saveNotification:(id)arg1;	// IMP=0x0010000000002623
- (id)_notificationsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2;	// IMP=0x001000000000224e
- (id)_notificationsMatchingPredicate:(id)arg1;	// IMP=0x001000000000223a
- (id)typeIdentifiersOfAccountsWithPendingNotifications;	// IMP=0x0010000000001dd7
- (id)pendingNotificationsWithEventID:(id)arg1;	// IMP=0x0010000000001d65
- (id)notificationWithIdentifier:(id)arg1;	// IMP=0x0010000000001ccd
- (id)pendingNotificationsForAccountsWithTypeID:(id)arg1;	// IMP=0x0010000000001c5b
- (id)init;	// IMP=0x0010000000001c0f

@end

