//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GEONavdCacheDBReader
{
    struct sqlite3_stmt *_sqlReadAllEntries;	// 80 = 0x50
    struct sqlite3_stmt *_sqlReadEntriesForHash;	// 88 = 0x58
    struct sqlite3_stmt *_sqlReadKeysForHash;	// 96 = 0x60
    struct sqlite3_stmt *_sqlReadNextTimerTimeStamp;	// 104 = 0x68
    struct sqlite3_stmt *_sqlReadEntriesBeforeTimeStamp;	// 112 = 0x70
    struct sqlite3_stmt *_sqlReadRowIdsOfEntriesBeforeTimeStamp;	// 120 = 0x78
    struct sqlite3_stmt *_sqlReadEntryWithRowId;	// 128 = 0x80
    struct sqlite3_stmt *_sqlCountEntries;	// 136 = 0x88
}

- (long long)_numberOfEntries;	// IMP=0x0000000000a3b190
- (void)_cacheKeysForHash:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a3afe4
- (void)_cacheEntriesForHash:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a3ae38
- (void)_allCacheEntriesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a3acd1
- (void)_cacheEntryWithRowId:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a3ab34
- (void)_cacheRowIdsOfEntriesBeforeTimeStamp:(double)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a3a98b
- (void)_cacheEntriesBeforeTimeStamp:(double)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a3a7e2
- (void)_cacheEntryForNextRefreshWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a3a68a
- (void)_openDBIfNotAlreadyOpen;	// IMP=0x0000000000a3a620
- (void)_closeDB;	// IMP=0x0000000000a3a503
- (void)_openDB;	// IMP=0x0000000000a39e55
- (void)dealloc;	// IMP=0x0000000000a39dd4

@end

