//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOTileDB, GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface GEOProactiveFailedTileDownloader
{
    GEOTileDB *_diskCache;	// 144 = 0x90
    GEOTileKeyList *_keysRemaining;	// 152 = 0x98
    unsigned long long _numberOfTilesOriginallyConsidered;	// 160 = 0xa0
    unsigned long long _batchSize;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000011de6fd
- (void)_addMoreKeysToListIfNeeded:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000011de438
- (void)determineNextBatchWithQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000011de1f8
- (unsigned long long)numberOfTilesConsidered;	// IMP=0x00000000011de1e7
- (_Bool)cancelKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000011de09e
- (void)_determineKeysToUpdate;	// IMP=0x00000000011ddf88
- (id)initWithDiskCache:(id)arg1 tileRequesterCreationBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000011dde29
- (unsigned char)reason;	// IMP=0x00000000011dde1e

@end

