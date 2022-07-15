//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, SQLiteStatement;

@interface SQLiteCursor : NSObject
{
    int _columnCount;	// 8 = 0x8
    unsigned char *_columnDeclaredTypes;	// 16 = 0x10
    NSDictionary *_columnIndexByName;	// 24 = 0x18
    id _columnKeySet;	// 32 = 0x20
    NSMutableArray *_columnNames;	// 40 = 0x28
    struct sqlite3_stmt *_statement;	// 48 = 0x30
    SQLiteStatement *_statementWrapper;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000024bdb5
- (unsigned char)_declaredTypeForColumnIndex:(int)arg1;	// IMP=0x001000000024bd96
- (int)_columnTypeForColumnIndex:(int)arg1;	// IMP=0x001000000024bd86
- (int)columnIndexForColumnName:(id)arg1;	// IMP=0x001000000024bd70
- (id)dictionaryWithValuesForColumnNames:(id)arg1;	// IMP=0x001000000024ba4f
- (id)dictionaryWithValuesForColumns;	// IMP=0x001000000024ba3b
- (id)URLForColumnName:(id)arg1;	// IMP=0x001000000024b9f5
- (id)URLForColumnIndex:(int)arg1;	// IMP=0x001000000024b995
- (id)UUIDForColumnName:(id)arg1;	// IMP=0x001000000024b94f
- (id)UUIDForColumnIndex:(int)arg1;	// IMP=0x001000000024b8eb
- (id)stringForColumnName:(id)arg1;	// IMP=0x001000000024b8a5
- (id)stringForColumnIndex:(int)arg1;	// IMP=0x001000000024b848
@property(readonly, nonatomic) long long numberOfColumns;
- (id)numberForColumnName:(id)arg1;	// IMP=0x001000000024b7f1
- (id)numberForColumnIndex:(int)arg1;	// IMP=0x001000000024b75b
- (id)JSONObjectForColumnIndex:(int)arg1;	// IMP=0x001000000024b5fb
- (long long)int64ForColumnName:(id)arg1;	// IMP=0x001000000024b5c7
- (long long)int64ForColumnIndex:(int)arg1;	// IMP=0x001000000024b5b7
- (int)intForColumnName:(id)arg1;	// IMP=0x001000000024b583
- (int)intForColumnIndex:(int)arg1;	// IMP=0x001000000024b573
- (double)doubleForColumnName:(id)arg1;	// IMP=0x001000000024b53e
- (double)doubleForColumnIndex:(int)arg1;	// IMP=0x001000000024b52e
- (id)dateForColumnName:(id)arg1;	// IMP=0x001000000024b4e8
- (id)dateForColumnIndex:(int)arg1;	// IMP=0x001000000024b468
- (id)dataForColumnName:(id)arg1;	// IMP=0x001000000024b422
- (id)dataForColumnIndex:(int)arg1;	// IMP=0x001000000024b3af
- (void)dealloc;	// IMP=0x001000000024b375
- (id)initWithStatement:(id)arg1;	// IMP=0x001000000024b180

@end
