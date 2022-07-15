//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCCacheCoordinator, MISSING_TYPE, NSString;

@interface NDContentArchiveStore : NSObject
{
    NSString *_rootContainerPath;	// 8 = 0x8
    FCCacheCoordinator *_cacheCoordinator;	// 16 = 0x10
}

+ (void)_prepareRootContainerAtPath:(id)arg1;	// IMP=0x002000000000badc
- (void).cxx_destruct;	// IMP=0x002000000000bd1a
@property(readonly, copy, nonatomic) FCCacheCoordinator *cacheCoordinator; // @synthesize cacheCoordinator=_cacheCoordinator;
@property(readonly, copy, nonatomic) NSString *rootContainerPath; // @synthesize rootContainerPath=_rootContainerPath;
- (void)_pruneArchivesFromContainer:(id)arg1 forContentID:(id)arg2;	// IMP=0x001000000000b5e4
- (id)_tokenPathForContentID:(id)arg1;	// IMP=0x001000000000b58d
- (id)_newUniqueArchivePathForContentID:(id)arg1;	// IMP=0x001000000000b4bf
- (id)_manifestPathForContentID:(id)arg1;	// IMP=0x001000000000b468
- (id)_containerPathForContentID:(id)arg1;	// IMP=0x001000000000b3e5
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;	// IMP=0x001000000000b104
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;	// IMP=0x001000000000b0fc
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;	// IMP=0x001000000000b07c
- (id)archivesForContentID:(id)arg1;	// IMP=0x001000000000ace7
- (id)manifestForContentID:(id)arg1;	// IMP=0x001000000000aa82
- (id)interestTokenForContentID:(id)arg1;	// IMP=0x001000000000a9ff
- (id)interestTokenForContentIDs:(id)arg1;	// IMP=0x001000000000a97c
- (_Bool)isContentIDComplete:(id)arg1;	// IMP=0x001000000000a796
- (void)didCompleteContentID:(id)arg1;	// IMP=0x001000000000a57b
- (void)addManifest:(id)arg1 forContentID:(id)arg2;	// IMP=0x001000000000a195
- (void)addArchive:(id)arg1 forContentID:(id)arg2;	// IMP=0x0010000000009dbd
- (void)pruneArchivesForContentID:(id)arg1;	// IMP=0x0010000000009ca9
- (void)prepareForContentID:(id)arg1;	// IMP=0x00100000000099dd
- (MISSING_TYPE *)initWithCacheDirectory: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000009616

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
