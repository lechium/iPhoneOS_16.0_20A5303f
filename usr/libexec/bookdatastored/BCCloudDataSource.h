//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface BCCloudDataSource : NSObject
{
    NSManagedObjectContext *_managedObjectContext;	// 8 = 0x8
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 16 = 0x10
}

+ (id)_sharedLegacyRootDirectoryURL;	// IMP=0x002000000003eed5
+ (id)_sharedRootDirectoryURL;	// IMP=0x001000000003ee79
+ (id)_documentsDirectoryURL;	// IMP=0x001000000003ee60
+ (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003ed2a
- (void).cxx_destruct;	// IMP=0x002000000003fa31
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (_Bool)_addStoreAtURL:(id)arg1;	// IMP=0x001000000003f799
- (void)_migrateAndDestroyStoreAtLegacyURL:(id)arg1 toModernURL:(id)arg2;	// IMP=0x001000000003f527
- (void)_deleteDirectoryForStoreAtURL:(id)arg1;	// IMP=0x001000000003f445
- (void)_createDirectoryForStoreAtURL:(id)arg1;	// IMP=0x001000000003f35b
- (_Bool)_directoryExistsForStoreAtURL:(id)arg1;	// IMP=0x001000000003f312
- (void)_setupManagedObjectContext;	// IMP=0x001000000003f2ad
- (_Bool)_setupPersistentStoreWithRootDirectoryURL:(id)arg1 legacyRootDirectoryURL:(id)arg2 nameOnDisk:(id)arg3;	// IMP=0x001000000003f051
- (void)_logIf:(_Bool)arg1 error:(id)arg2 operation:(id)arg3;	// IMP=0x001000000003efce
- (id)_persistentStoreOptions;	// IMP=0x001000000003ef31
- (id)initWithManagedObjectModel:(id)arg1 rootDirectoryURL:(id)arg2 legacyRootDirectoryURL:(id)arg3 nameOnDisk:(id)arg4;	// IMP=0x001000000003eb62
- (id)initWithManagedObjectModel:(id)arg1 nameOnDisk:(id)arg2;	// IMP=0x001000000003eaa2
- (id)initWithManagedObjectModel:(id)arg1;	// IMP=0x001000000003e99c

@end
