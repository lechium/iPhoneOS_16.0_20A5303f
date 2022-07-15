//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSSQLForeignKey, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLForeignEntityKey
{
    NSString *_name;	// 48 = 0x30
    NSSQLForeignKey *_foreignKey;	// 56 = 0x38
    NSNumber *_columnValue;	// 64 = 0x40
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;	// IMP=0x000000000018d78a
- (void)dealloc;	// IMP=0x000000000018d723
- (id)name;	// IMP=0x000000000018d712
- (id)foreignKey;	// IMP=0x000000000018d701
- (id)toOneRelationship;	// IMP=0x000000000018d6d6
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;	// IMP=0x000000000018d5de
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;	// IMP=0x000000000018d583
- (id)initWithEntity:(id)arg1 foreignKey:(id)arg2;	// IMP=0x000000000018d3e2

@end
