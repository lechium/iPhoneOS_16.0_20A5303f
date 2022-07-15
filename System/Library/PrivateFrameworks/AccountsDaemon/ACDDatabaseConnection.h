//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSManagedObjectContext, NSNumber, NSPersistentStoreCoordinator;
@protocol ACDDatabaseConnectionDelegate, NSObject;

__attribute__((visibility("hidden")))
@interface ACDDatabaseConnection : NSObject
{
    id <NSObject> _managedObjectContextDidSaveObserver;	// 8 = 0x8
    NSCache *_cache;	// 16 = 0x10
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 24 = 0x18
    NSManagedObjectContext *_managedObjectContext;	// 32 = 0x20
    id <ACDDatabaseConnectionDelegate> _delegate;	// 40 = 0x28
}

+ (id)new;	// IMP=0x006000000005e3b3
- (void).cxx_destruct;	// IMP=0x0000000000060f5d
@property(nonatomic) __weak id <ACDDatabaseConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
- (void)_delegate_databaseConnectionEncounteredUnrecoverableError:(id)arg1;	// IMP=0x0000000000060e2e
- (void)_endObservingManagedObjectContextDidSaveNotifications;	// IMP=0x0000000000060d6c
- (void)_managedObjectContextDidSave:(id)arg1;	// IMP=0x00000000000609de
- (void)_beginObservingManagedObjectContextDidSaveNotifications;	// IMP=0x000000000006081a
- (id)_managedObjectModificationDescription:(id)arg1;	// IMP=0x0000000000060671
- (id)_managedObjectContextModificationDescription;	// IMP=0x0000000000060225
- (void)_traceDatabaseEvents;	// IMP=0x000000000005febc
- (void)_handleManagedObjectContextError:(id)arg1;	// IMP=0x000000000005fe14
- (void)_setupManagedObjectContextWithPersistentStoreCoodinator:(id)arg1;	// IMP=0x000000000005fc8d
- (void)rollback;	// IMP=0x000000000005fc34
- (_Bool)saveWithError:(id *)arg1 rollbackOnFailure:(_Bool)arg2;	// IMP=0x000000000005f9e3
- (_Bool)saveWithError:(id *)arg1;	// IMP=0x000000000005f9cf
- (id)managedObjectIDForURI:(id)arg1;	// IMP=0x000000000005f92e
- (void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3;	// IMP=0x000000000005f7f0
- (void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2;	// IMP=0x000000000005f769
- (void)deleteObject:(id)arg1;	// IMP=0x000000000005f6e9
- (id)insertNewObjectForEntityForName:(id)arg1;	// IMP=0x000000000005f64a
- (id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2;	// IMP=0x000000000005f415
- (unsigned long long)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2;	// IMP=0x000000000005f2a0
- (id)existingObjectWithURI:(id)arg1;	// IMP=0x000000000005efd3
- (id)objectForObjectURI:(id)arg1;	// IMP=0x000000000005eed7
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3 prefetchKeypaths:(id)arg4;	// IMP=0x000000000005e9ae
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3;	// IMP=0x000000000005e999
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;	// IMP=0x000000000005e981
- (id)fetchObjectsForEntityNamed:(id)arg1;	// IMP=0x000000000005e967
@property(retain, nonatomic) NSNumber *keychainVersion;
@property(retain, nonatomic) NSNumber *version;
- (id)_persistentStore;	// IMP=0x000000000005e60a
- (id)_managedObjectModel;	// IMP=0x000000000005e5f4
- (void)dealloc;	// IMP=0x000000000005e4b4
- (id)initWithPersistentStoreCoordinator:(id)arg1;	// IMP=0x000000000005e3f6
- (id)init;	// IMP=0x000000000005e3cb

@end
