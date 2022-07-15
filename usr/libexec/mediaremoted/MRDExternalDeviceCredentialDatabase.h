//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface MRDExternalDeviceCredentialDatabase : NSObject
{
    struct sqlite3 *_dbHandle;	// 8 = 0x8
    NSMutableArray *_tokenRecords;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000003e245
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (id)_loadTokenRecords;	// IMP=0x001000000003df1d
- (void)_initializeDatabaseSchema;	// IMP=0x001000000003de8a
- (void)_validateDatabase;	// IMP=0x001000000003dc62
- (void)_openDatabase;	// IMP=0x001000000003daba
- (_Bool)clearExpiredTokenRecords;	// IMP=0x001000000003d8a1
- (_Bool)saveTokenRecord:(id)arg1;	// IMP=0x001000000003d442
@property(readonly, nonatomic) NSArray *tokenRecords;
- (void)dealloc;	// IMP=0x001000000003d38b
- (id)init;	// IMP=0x001000000003d377
- (id)initWithPath:(id)arg1;	// IMP=0x001000000003d2be

@end
