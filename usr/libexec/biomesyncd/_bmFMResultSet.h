//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, _bmFMDatabase, _bmFMStatement;

@interface _bmFMResultSet : NSObject
{
    NSMutableDictionary *_columnNameToIndexMap;	// 8 = 0x8
    _Bool _shouldAutoClose;	// 16 = 0x10
    _bmFMDatabase *_parentDB;	// 24 = 0x18
    NSString *_query;	// 32 = 0x20
    _bmFMStatement *_statement;	// 40 = 0x28
}

+ (id)resultSetWithStatement:(id)arg1 usingParentDatabase:(id)arg2 shouldAutoClose:(_Bool)arg3;	// IMP=0x0040000000043e99
- (void).cxx_destruct;	// IMP=0x00100000000453c5
@property(nonatomic) _Bool shouldAutoClose; // @synthesize shouldAutoClose=_shouldAutoClose;
@property(retain) _bmFMStatement *statement; // @synthesize statement=_statement;
@property(retain) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) _bmFMDatabase *parentDB; // @synthesize parentDB=_parentDB;
- (_Bool)bindWithDictionary:(id)arg1;	// IMP=0x0010000000045338
- (_Bool)bindWithArray:(id)arg1;	// IMP=0x0010000000045321
- (_Bool)bindWithArray:(id)arg1 orDictionary:(id)arg2 orVAList:(struct __va_list_tag [1])arg3;	// IMP=0x0010000000045286
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0010000000045274
- (id)objectAtIndexedSubscript:(int)arg1;	// IMP=0x0010000000045262
- (id)columnNameForIndex:(int)arg1;	// IMP=0x0010000000045214
- (id)objectForColumn:(id)arg1;	// IMP=0x00100000000451e4
- (id)objectForColumnName:(id)arg1;	// IMP=0x00100000000451d2
- (id)objectForColumnIndex:(int)arg1;	// IMP=0x00100000000450ae
- (const char *)UTF8StringForColumnName:(id)arg1;	// IMP=0x001000000004509c
- (const char *)UTF8StringForColumn:(id)arg1;	// IMP=0x001000000004506c
- (const char *)UTF8StringForColumnIndex:(int)arg1;	// IMP=0x0010000000044fef
- (_Bool)columnIsNull:(id)arg1;	// IMP=0x0010000000044fbf
- (_Bool)columnIndexIsNull:(int)arg1;	// IMP=0x0010000000044f8f
- (id)dataNoCopyForColumnIndex:(int)arg1;	// IMP=0x0010000000044ecc
- (id)dataNoCopyForColumn:(id)arg1;	// IMP=0x0010000000044e9c
- (id)dataForColumnIndex:(int)arg1;	// IMP=0x0010000000044dd4
- (id)dataForColumn:(id)arg1;	// IMP=0x0010000000044da4
- (id)dateForColumnIndex:(int)arg1;	// IMP=0x0010000000044c9b
- (id)dateForColumn:(id)arg1;	// IMP=0x0010000000044c6b
- (id)stringForColumn:(id)arg1;	// IMP=0x0010000000044c3b
- (id)stringForColumnIndex:(int)arg1;	// IMP=0x0010000000044b99
- (double)doubleForColumnIndex:(int)arg1;	// IMP=0x0010000000044b70
- (double)doubleForColumn:(id)arg1;	// IMP=0x0010000000044b40
- (_Bool)boolForColumnIndex:(int)arg1;	// IMP=0x0010000000044b28
- (_Bool)boolForColumn:(id)arg1;	// IMP=0x0010000000044af8
- (unsigned long long)unsignedLongLongIntForColumnIndex:(int)arg1;	// IMP=0x0010000000044ae6
- (unsigned long long)unsignedLongLongIntForColumn:(id)arg1;	// IMP=0x0010000000044ab6
- (long long)longLongIntForColumnIndex:(int)arg1;	// IMP=0x0010000000044a8d
- (long long)longLongIntForColumn:(id)arg1;	// IMP=0x0010000000044a5d
- (long long)longForColumnIndex:(int)arg1;	// IMP=0x0010000000044a34
- (long long)longForColumn:(id)arg1;	// IMP=0x0010000000044a04
- (int)intForColumnIndex:(int)arg1;	// IMP=0x00100000000449db
- (int)intForColumn:(id)arg1;	// IMP=0x00100000000449ab
- (int)columnIndexForName:(id)arg1;	// IMP=0x00100000000448f4
- (_Bool)hasAnotherRow;	// IMP=0x00100000000448cf
- (int)internalStepWithError:(id *)arg1;	// IMP=0x001000000004467c
- (_Bool)stepWithError:(id *)arg1;	// IMP=0x0010000000044663
- (_Bool)step;	// IMP=0x001000000004464f
- (_Bool)nextWithError:(id *)arg1;	// IMP=0x0010000000044636
- (_Bool)next;	// IMP=0x0010000000044622
@property(readonly, nonatomic) NSDictionary *resultDictionary;
- (id)resultDict;	// IMP=0x001000000004434b
- (void)kvcMagic:(id)arg1;	// IMP=0x001000000004421f
@property(readonly) NSMutableDictionary *columnNameToIndexMap;
@property(readonly, nonatomic) int columnCount;
- (void)close;	// IMP=0x0010000000044032
- (void)dealloc;	// IMP=0x0010000000043fcc
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e296

@end
