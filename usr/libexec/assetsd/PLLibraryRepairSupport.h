//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PLPhotoLibraryBundle, PLXPCTransaction;
@protocol OS_xpc_object;

@interface PLLibraryRepairSupport : NSObject
{
    NSObject<OS_xpc_object> *_xpcActivity;	// 8 = 0x8
    PLXPCTransaction *_transaction;	// 16 = 0x10
    NSString *_description;	// 24 = 0x18
    PLPhotoLibraryBundle *_bundle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000007a52
@property(retain) PLPhotoLibraryBundle *bundle; // @synthesize bundle=_bundle;
- (void)runPeriodicMaintenanceActivityOnAllLibrariesWithExecutionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007312
- (void)_maintainLibrary:(id)arg1 executionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006d3e
- (_Bool)_updateDeferredCriticalMaintenanceTaskMarker:(id)arg1;	// IMP=0x0010000000006cb6
- (_Bool)_updateDeferredMaintenanceTaskMarker:(id)arg1 value:(id)arg2;	// IMP=0x0010000000006c9a
- (_Bool)_updateMaintenanceTaskMarker:(id)arg1 key:(id)arg2 value:(id)arg3;	// IMP=0x0010000000006b7a
- (_Bool)_isValidProcessingURL:(id)arg1 interruptedPaths:(id)arg2;	// IMP=0x0010000000006adf
- (id)_interruptedProcessingURLs;	// IMP=0x0010000000006a27
- (void)_saveInterruptedProcessingURLs:(id)arg1;	// IMP=0x001000000000697d
- (id)_buildIncompleteMaintenanceTaskPathsKey;	// IMP=0x00100000000068b0
- (void)runPeriodicMaintenance;	// IMP=0x0010000000006365
- (void)runCuratedLibraryPeriodicMaintenanceTasks;	// IMP=0x001000000000627b
- (_Bool)_runCriticalPeriodicMaintenanceTasksDeferActivityIfRequired:(id)arg1;	// IMP=0x0010000000006106
- (_Bool)_deferActivityIfRequiredForClassName:(id)arg1;	// IMP=0x0010000000005f48
- (unsigned long long)_indexOfRegisteredMaintenanceTaskForMarker:(id)arg1;	// IMP=0x0010000000005e5d
- (id)_registeredMaintenanceTaskClasses;	// IMP=0x0010000000005cba
- (id)_registeredCriticalMaintenaceTaskClasses;	// IMP=0x0010000000005c29
- (id)initWithActivity:(id)arg1 description:(id)arg2;	// IMP=0x0010000000005b4e

@end
