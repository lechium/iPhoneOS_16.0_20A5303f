//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICSQLiteConnection, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ICSQLiteStatement : NSObject
{
    ICSQLiteConnection *_connection;	// 8 = 0x8
    struct sqlite3_stmt *_statement;	// 16 = 0x10
    ICSQLiteStatement *_strongSelf;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000233ee
@property(readonly, nonatomic) struct sqlite3_stmt *sqlite3_stmt; // @synthesize sqlite3_stmt=_statement;
@property(readonly, nonatomic) ICSQLiteConnection *connection; // @synthesize connection=_connection;
- (int)clearBindings;	// IMP=0x0000000000023399
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x0000000000023325
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000002321c
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000002312f
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x00000000000230f2
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x00000000000230b5
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x0000000000023078
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x0000000000023037
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x0000000000022ffa
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x0000000000022f49
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x0000000000022e9c
- (int)step;	// IMP=0x0000000000022e5b
@property(readonly, copy, nonatomic) NSString *SQL;
- (int)reset;	// IMP=0x0000000000022db0
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly;
- (int)finalizeStatement;	// IMP=0x0000000000022d07
@property(readonly, copy, nonatomic) NSDictionary *columnIndexByName;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1 connection:(id)arg2;	// IMP=0x0000000000022b38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
