//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol LibraryOpen, LibraryProgress, LibraryUninstall, OS_dispatch_queue;

@interface LibraryService : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSArray *_libraryCatalogs;	// 16 = 0x10
    id <LibraryOpen> _libraryOpen;	// 24 = 0x18
    id <LibraryProgress> _libraryProgress;	// 32 = 0x20
    id <LibraryUninstall> _libraryUninstall;	// 40 = 0x28
    NSMutableDictionary *_remoteCatalogs;	// 48 = 0x30
}

+ (id)defaultService;	// IMP=0x002000000022398e
- (void).cxx_destruct;	// IMP=0x0020000000225af6
- (_Bool)_validatePredicate:(id)arg1 error:(id *)arg2;	// IMP=0x00100000002259c7
- (void)_registerNotificationSource;	// IMP=0x0010000000225832
- (void)catalogUnregisteredBundleIDs:(id)arg1;	// IMP=0x00100000002257ba
- (void)catalogRefreshedBundleIDs:(id)arg1;	// IMP=0x0010000000225742
- (void)catalogRegisteredApps:(id)arg1;	// IMP=0x00100000002256ca
- (void)uninstallApp:(id)arg1 requestUserConfirmation:(_Bool)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000022553e
- (void)lookupItemIDsForDeletableSystemAppsForWatchWithBundleIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002252d0
- (void)lookupBundleIDsForDeletableSystemAppsForWatchWithItemIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000225062
- (void)lookupItemIDsForDeletableSystemAppsWithBundleIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000224df4
- (void)lookupBundleIDsForDeletableSystemAppsWithItemIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000224b86
- (void)launchApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000224a0c
- (void)launchApp:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000022486a
- (void)launchApp:(id)arg1 extensionType:(long long)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002246e8
- (void)openableStatusForExecutableAtPath:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002246d3
- (void)resumeApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002246bd
- (void)pauseApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002246a7
- (void)cancelApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000224691
- (void)cancelApp:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000022467b
- (void)executeQueryWithPredicate:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000224612
- (void)executeQueryWithPredicate:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000223c9c
- (void)forceRefreshAllQueries;	// IMP=0x0010000000223ba4
- (id)init;	// IMP=0x00100000002239e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

