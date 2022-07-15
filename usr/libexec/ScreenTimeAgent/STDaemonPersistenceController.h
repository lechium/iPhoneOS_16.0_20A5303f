//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenTimeCore/STPersistenceController.h>

@class NSBackgroundActivityScheduler;

@interface STDaemonPersistenceController : STPersistenceController
{
    _Bool _hasStoreLoaded;	// 8 = 0x8
    NSBackgroundActivityScheduler *_cleanupActivity;	// 16 = 0x10
}

+ (long long)_computeHourAgeFromDefaultHourAge:(long long)arg1 overrideHourAge:(id)arg2;	// IMP=0x004000000002ba18
+ (id)_buildPersistentHistoryCleanupBackgroundActivity;	// IMP=0x001000000002b969
- (void).cxx_destruct;	// IMP=0x002000000002ba9e
@property(readonly) NSBackgroundActivityScheduler *cleanupActivity; // @synthesize cleanupActivity=_cleanupActivity;
@property(nonatomic) _Bool hasStoreLoaded; // @synthesize hasStoreLoaded=_hasStoreLoaded;
- (void)_schedulePersistentHistoryCleanupActivity;	// IMP=0x001000000002b5ec
- (void)_createDataVaultDirectory;	// IMP=0x001000000002b3f0
- (void)_loadLocalPersistentStore;	// IMP=0x001000000002b033
- (void)resume;	// IMP=0x001000000002aff8
- (_Bool)removeCloudPersistentStoreWithError:(id *)arg1;	// IMP=0x001000000002ad5e
- (_Bool)unloadCloudPersistentStoreWithError:(id *)arg1;	// IMP=0x001000000002a9da
- (id)_destroyPersistentStoreWithDescription:(id)arg1;	// IMP=0x001000000002a75b
- (void)_destroyAndReloadAfterFailureWithStoreDescription:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002a3ff
- (_Bool)_isFatalMigrationError:(id)arg1;	// IMP=0x001000000002a272
- (_Bool)_isFatalSQLiteError:(id)arg1;	// IMP=0x001000000002a1dd
- (_Bool)_shouldDestroyStoreGivenError:(id)arg1;	// IMP=0x001000000002a17d
- (void)_didAddPersistentStoreDescription:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000029e51
- (void)loadPersistentStoreDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029bd7
- (id)newBackgroundContext;	// IMP=0x0010000000029b73
- (id)viewContext;	// IMP=0x0010000000029b23
- (id)init;	// IMP=0x0010000000029abb

@end
