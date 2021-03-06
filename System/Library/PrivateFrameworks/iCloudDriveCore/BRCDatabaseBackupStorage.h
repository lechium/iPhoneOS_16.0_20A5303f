//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSURL, PQLConnection;

__attribute__((visibility("hidden")))
@interface BRCDatabaseBackupStorage : NSObject
{
    PQLConnection *_database;	// 8 = 0x8
    NSURL *_databaseURL;	// 16 = 0x10
    NSArray *_urlPropertiesToFetch;	// 24 = 0x18
    NSURL *_attachedDatabaseURL;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e56c5
@property(retain, nonatomic) NSURL *attachedDatabaseURL; // @synthesize attachedDatabaseURL=_attachedDatabaseURL;
@property(retain, nonatomic) NSArray *urlPropertiesToFetch; // @synthesize urlPropertiesToFetch=_urlPropertiesToFetch;
@property(retain, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
@property(retain, nonatomic) PQLConnection *database; // @synthesize database=_database;
- (_Bool)fixUpClientState:(id)arg1;	// IMP=0x00000000000e53c1
- (_Bool)fixUpBackupDetector:(id)arg1;	// IMP=0x00000000000e506f
- (_Bool)clearStagedIDs:(id)arg1;	// IMP=0x00000000000e4f1c
- (_Bool)updateIDs:(id)arg1;	// IMP=0x00000000000e4bff
- (_Bool)negateIDs:(id)arg1;	// IMP=0x00000000000e4aac
- (_Bool)setForeignKeys:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x00000000000e49d8
- (_Bool)updateAttachedDatabase;	// IMP=0x00000000000e4705
- (id)docIDForURL:(id)arg1;	// IMP=0x00000000000e4605
- (_Bool)attachDatabase:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e4227
- (void)populateNewColumnsInDatabase:(id)arg1 forRecord:(id)arg2 basePath:(id)arg3;	// IMP=0x00000000000e3d67
- (void)populateNewColumnsWithBasePath:(id)arg1;	// IMP=0x00000000000e3a8c
- (id)backupManifestEnumerator:(id)arg1;	// IMP=0x00000000000e39e4
- (void)flushAndClose;	// IMP=0x00000000000e37a8
- (_Bool)addRecord:(id)arg1;	// IMP=0x00000000000e358d
- (_Bool)setUpDatabaseWithError:(id *)arg1;	// IMP=0x00000000000e33c5
- (void)dealloc;	// IMP=0x00000000000e321d
- (id)initWithDatabaseURL:(id)arg1;	// IMP=0x00000000000e3069

@end

