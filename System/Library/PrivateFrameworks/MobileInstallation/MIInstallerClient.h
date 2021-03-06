//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MIInstallerClient : NSObject
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _delegatesCompleteCondMutex;	// 8 = 0x8
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _delegatesCompleteCond;	// 72 = 0x48
    _Bool _delegatesComplete;	// 120 = 0x78
    NSXPCConnection *_connection;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_queue;	// 136 = 0x88
    CDUnknownBlockType _progressBlock;	// 144 = 0x90
    CDUnknownBlockType _appDictionaryEnumBlock;	// 152 = 0x98
    NSError *_delegatesCompleteError;	// 160 = 0xa0
}

+ (id)installerWithAppDictionaryEnumerator:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f838
+ (id)installerWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f7de
- (void).cxx_destruct;	// IMP=0x000000000001811d
@property(retain, nonatomic) NSError *delegatesCompleteError; // @synthesize delegatesCompleteError=_delegatesCompleteError;
@property(nonatomic) _Bool delegatesComplete; // @synthesize delegatesComplete=_delegatesComplete;
@property(copy, nonatomic) CDUnknownBlockType appDictionaryEnumBlock; // @synthesize appDictionaryEnumBlock=_appDictionaryEnumBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (_Bool)clearTestFlags:(unsigned long long)arg1 withError:(id *)arg2;	// IMP=0x0000000000017ecf
- (_Bool)setTestFlags:(unsigned long long)arg1 withError:(id *)arg2;	// IMP=0x0000000000017d2b
- (_Bool)getTestModeEnabled:(_Bool *)arg1 outError:(id *)arg2;	// IMP=0x0000000000017a46
- (_Bool)endTestMode:(id *)arg1;	// IMP=0x00000000000177fc
- (_Bool)setTestMode:(id *)arg1;	// IMP=0x000000000001758d
- (void)dieForTesting;	// IMP=0x00000000000174cc
- (int)pidForTesting;	// IMP=0x0000000000017370
- (void)createSerializedPlaceholderForInstalledAppWithBundeID:(id)arg1 personaUniqueString:(id)arg2 atResultURL:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000016feb
- (void)waitForSystemAppMigratorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016cd5
- (void)waitForSystemAppMigratorToComplete:(CDUnknownBlockType)arg1;	// IMP=0x00000000000169bf
- (void)systemAppMigratorHasCompleted:(CDUnknownBlockType)arg1;	// IMP=0x000000000001669a
- (void)setSystemAppMigrationComplete:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016384
- (void)snapshotWKAppInCompanionAppID:(id)arg1 toURL:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015fc8
- (void)getAppMetadataForApp:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015c4c
- (void)updatePlaceholderMetadataForApp:(id)arg1 installType:(unsigned long long)arg2 failureReason:(unsigned long long)arg3 underlyingError:(id)arg4 failureSource:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000158ce
- (void)checkCapabilities:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001553b
- (void)listSafeHarborsOfType:(unsigned long long)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000151c1
- (void)removeSafeHarborForIdentifier:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000014e57
- (void)registerSafeHarborAtPath:(id)arg1 forIdentifier:(id)arg2 ofType:(unsigned long long)arg3 withOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000014ac8
- (void)fetchDiskUsageForIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000014735
- (void)updateiTunesMetadataForIXWithIdentifier:(id)arg1 options:(id)arg2 plistData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000143b0
- (void)updateiTunesMetadataForLSWithIdentifier:(id)arg1 options:(id)arg2 plistData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001402b
- (void)updateSinfForIXWithIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000013c6f
- (void)updateSinfForLSWithIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000138b3
- (void)fetchInfoForContainerizedAppWithBundleID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000013520
- (void)fetchInfoForFrameworkAtURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001318d
- (void)enumerateInstalledAppsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012dc3
- (void)updateSystemAppStateForIdentifier:(id)arg1 appState:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012a82
- (void)lookupSystemAppStateWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012706
- (void)clearUninstalledIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000123aa
- (void)lookupUninstalledWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001202e
- (void)invalidateReference:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011cf3
- (void)acquireReferenceforInstalledAppWithIdentity:(id)arg1 inDomain:(unsigned long long)arg2 matchingInstallSessionID:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000011952
- (void)finalizeReference:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000115d6
- (void)uninstallIdentity:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001127a
- (void)uninstallIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010e8b
- (void)revertIdentity:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010a50
- (void)revertForLSWithIdentifier:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010615
- (void)registerPlaceholderForReference:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001021b
- (void)installURL:(id)arg1 identity:(id)arg2 targetingDomain:(unsigned long long)arg3 withOptions:(id)arg4 returningResultInfo:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000000fca6
- (id)_waitForPendingDelegateMessages;	// IMP=0x000000000000fbf8
- (void)delegateMessageDeliveryCompleteWithError:(id)arg1;	// IMP=0x000000000000fb70
- (void)enumerateAppDictionary:(id)arg1 error:(id)arg2;	// IMP=0x000000000000f9bd
- (void)reportProgress:(id)arg1;	// IMP=0x000000000000f892
- (void)dealloc;	// IMP=0x000000000000f79b
- (id)init;	// IMP=0x000000000000f266
- (void)_invalidateObject;	// IMP=0x000000000000f18e

@end

