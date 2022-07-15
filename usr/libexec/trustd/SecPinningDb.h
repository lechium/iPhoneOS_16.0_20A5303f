//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SecPinningDb : NSObject
{
    struct os_unfair_lock_s _regexCacheLock;	// 8 = 0x8
    struct __OpaqueSecDb *_db;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSURL *_dbPath;	// 32 = 0x20
    NSMutableDictionary *_regexCache;	// 40 = 0x28
    NSMutableArray *_regexCacheList;	// 48 = 0x30
}

+ (id)pinningDbPath;	// IMP=0x004000000002dbc3
- (void).cxx_destruct;	// IMP=0x002000000002b6a4
@property(retain) NSMutableArray *regexCacheList; // @synthesize regexCacheList=_regexCacheList;
@property(retain) NSMutableDictionary *regexCache; // @synthesize regexCache=_regexCache;
@property struct os_unfair_lock_s regexCacheLock; // @synthesize regexCacheLock=_regexCacheLock;
@property(retain) NSURL *dbPath; // @synthesize dbPath=_dbPath;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property struct __OpaqueSecDb *db; // @synthesize db=_db;
- (id)queryForPolicyName:(id)arg1;	// IMP=0x001000000002b084
- (id)queryForDomain:(id)arg1;	// IMP=0x001000000002a804
- (_Bool)isPinningDisabled:(id)arg1;	// IMP=0x001000000002a5cd
- (_Bool)queryCacheForSuffix:(id)arg1 firstLabel:(id)arg2 results:(id *)arg3;	// IMP=0x001000000002a170
- (void)addSuffixToCache:(id)arg1 entry:(id)arg2;	// IMP=0x0010000000029e7d
- (void)clearCache;	// IMP=0x0010000000029dd8
- (void)dealloc;	// IMP=0x0010000000029d91
- (id)init;	// IMP=0x0010000000029ca8
- (void)initializedDb;	// IMP=0x0010000000029c5d
- (struct __OpaqueSecDb *)createAtPath;	// IMP=0x0010000000029b90
- (_Bool)updateDb:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2 pinningList:(id)arg3 updateSchema:(_Bool)arg4 updateContent:(_Bool)arg5;	// IMP=0x0010000000029a50
- (id)copySystemPinningList;	// IMP=0x00100000000298d5
- (_Bool)installDbFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000293d5
- (_Bool)createOrAlterRulesTable:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2;	// IMP=0x001000000002925f
- (_Bool)createOrAlterAdminTable:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2;	// IMP=0x001000000002919e
- (_Bool)removeAllRulesFromDb:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2;	// IMP=0x0010000000029064
- (_Bool)populateDbFromBundle:(id)arg1 dbConnection:(struct __OpaqueSecDbConnection *)arg2 error:(struct __CFError **)arg3;	// IMP=0x0010000000028ee8
- (_Bool)insertRuleWithName:(id)arg1 domainSuffix:(id)arg2 labelRegex:(id)arg3 policies:(id)arg4 transparentConnection:(id)arg5 dbConnection:(struct __OpaqueSecDbConnection *)arg6 error:(struct __CFError **)arg7;	// IMP=0x0010000000028c7d
- (_Bool)shouldUpdateContent:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000028a70
- (_Bool)setContentVersion:(id)arg1 dbConnection:(struct __OpaqueSecDbConnection *)arg2 error:(struct __CFError **)arg3;	// IMP=0x00100000000288e3
- (id)getContentVersion:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2;	// IMP=0x00100000000287da
- (_Bool)setSchemaVersion:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2;	// IMP=0x00100000000286dc
- (id)getSchemaVersion:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2;	// IMP=0x00100000000285d3

@end
