//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSData, NSFileProviderDomainVersion;

@interface _TtC9libfssync20FPDDomainFPFSBackend : NSObject
{
    MISSING_TYPE *domain;	// 8 = 0x8
    MISSING_TYPE *providerDomainID;	// 16 = 0x10
    MISSING_TYPE *nsDomain;	// 24 = 0x18
    MISSING_TYPE *pathsManager;	// 32 = 0x20
    MISSING_TYPE *__cachedURL;	// 6712343 = 0x666c17
    MISSING_TYPE *__fpfs;	// 9104 = 0x2390
    MISSING_TYPE *backingStoreIdentity;	// 9104 = 0x2390
    MISSING_TYPE *queue;	// 6336 = 0x18c0
    MISSING_TYPE *startupQueue;	// 6721448 = 0x668fa8
    MISSING_TYPE *itemChangedQueue;	// 2147484680 = 0x80000408
    MISSING_TYPE *workingSetChangedQueue;	// 0 = 0x0
    MISSING_TYPE *pendingSetWatchingQueue;	// 6 = 0x6
    MISSING_TYPE *startStatus;	// 0 = 0x0
    MISSING_TYPE *itemsChangedSource;	// 2147484672 = 0x80000400
    MISSING_TYPE *enumerationAnchorChangedSource;	// 0 = 0x0
    MISSING_TYPE *runningEnumerator;	// 0 = 0x0
    MISSING_TYPE *pendingSetSource;	// 1953718111 = 0x74735f5f
    MISSING_TYPE *initializationGroup;	// 0 = 0x0
    MISSING_TYPE *started;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *invalidated;	// 0 = 0x0
    MISSING_TYPE *progressMonitor;	// 0 = 0x0
    MISSING_TYPE *periodicFPCKRunner;	// 6721448 = 0x668fa8
    MISSING_TYPE *pendingSetState;	// 0 = 0x0
    MISSING_TYPE *onActivatePendingSetNotification;	// 0 = 0x0
    MISSING_TYPE *pendingSetStateURL;	// 0 = 0x0
    MISSING_TYPE *errorGenerationRecord;	// 0 = 0x0
    MISSING_TYPE *_signaledErrorGenerationDebouncer;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x004000000018ed20
- (id)init;	// IMP=0x001000000018ecc0
- (void)copyDatabaseToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000018e240
- (_Bool)updateRootAfterDomainChangeWithError:(id *)arg1;	// IMP=0x00100000001860f0
@property(nonatomic, readonly) _Bool backgroundActivityIsPaused;
@property(nonatomic, readonly) long long errorGenerationCount;
- (void)temporaryDirectoryURLWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000181f00
@property(nonatomic, readonly) NSFileProviderDomainVersion *domainVersion;
@property(nonatomic, readonly) NSArray *rootURLs;
- (id)initWithDomain:(id)arg1;	// IMP=0x00100000001817a0
@property(nonatomic, copy) NSData *backingStoreIdentity;

@end

