//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SQLitePredicate;

@interface SQLiteHasAssociatedEntityPredicate
{
    Class _associatedEntityClass;	// 8 = 0x8
    SQLitePredicate *_associatedPredicate;	// 16 = 0x10
}

+ (id)predicateWithAssociatedEntityClass:(Class)arg1;	// IMP=0x0020000000085441
- (void).cxx_destruct;	// IMP=0x00200000000857cb
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x0010000000085470

@end
