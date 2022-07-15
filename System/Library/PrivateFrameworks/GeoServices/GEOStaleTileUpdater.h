//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOResourceManifestManager, GEOTileDB, GEOTileKeyList, GEOTileKeyMap;

__attribute__((visibility("hidden")))
@interface GEOStaleTileUpdater
{
    GEOTileDB *_diskCache;	// 144 = 0x90
    GEOResourceManifestManager *_manifestManager;	// 152 = 0x98
    GEOTileKeyList *_keysRemaining;	// 160 = 0xa0
    unsigned long long _numberOfTilesOriginallyConsidered;	// 168 = 0xa8
    GEOTileKeyMap *_cacheMissType;	// 176 = 0xb0
    unsigned long long _batchSize;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000000013aaf99
- (void)downloadDidFailForTile:(struct _GEOTileKey *)arg1 error:(id)arg2;	// IMP=0x00000000013aaed9
- (void)downloadDidSucceedForTile:(struct _GEOTileKey *)arg1 downloadSize:(unsigned long long)arg2 httpStatus:(unsigned int)arg3;	// IMP=0x00000000013aae28
- (void)_addMoreKeysToListIfNeeded:(id)arg1 staleCachedETags:(id)arg2 staleCachedData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000013aa8f9
- (void)determineNextBatchWithQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000013aa67c
- (unsigned long long)numberOfTilesConsidered;	// IMP=0x00000000013aa66b
- (_Bool)cancelKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000013aa522
- (void)_determineStaleKeysToUpdate;	// IMP=0x00000000013aa02e
- (id)initWithDiskCache:(id)arg1 manifestManager:(id)arg2 tileRequesterCreationBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000013a9e6a
- (unsigned char)reason;	// IMP=0x00000000013a9e5f

@end
