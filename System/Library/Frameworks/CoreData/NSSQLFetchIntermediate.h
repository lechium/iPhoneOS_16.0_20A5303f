//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, NSSQLGroupByIntermediate, NSSQLHavingIntermediate, NSSQLOffsetIntermediate, NSSQLSelectIntermediate;

__attribute__((visibility("hidden")))
@interface NSSQLFetchIntermediate
{
    NSSQLSelectIntermediate *_selectClause;	// 64 = 0x40
    NSSQLGroupByIntermediate *_groupByClause;	// 72 = 0x48
    NSSQLHavingIntermediate *_havingClause;	// 80 = 0x50
    NSSQLOffsetIntermediate *_offsetClause;	// 88 = 0x58
    NSMutableArray *_groupByKeypaths;	// 96 = 0x60
    _Bool _isDictionaryCountFetch;	// 104 = 0x68
    NSMutableArray *_joinIntermediates;	// 112 = 0x70
    NSMutableDictionary *_joinKeypaths;	// 120 = 0x78
}

- (id)fetchIntermediateForKeypathExpression:(id)arg1;	// IMP=0x000000000018d39d
- (id)generateSQLStringInContext:(id)arg1;	// IMP=0x000000000018cd67
- (id)selectIntermediate;	// IMP=0x000000000018c45c
- (_Bool)isFunctionScoped;	// IMP=0x000000000018c3ec
- (id)fetchIntermediate;	// IMP=0x000000000018c3e3
- (void)dealloc;	// IMP=0x000000000018c31e
- (id)initWithScope:(id)arg1;	// IMP=0x000000000018c2b4

@end
