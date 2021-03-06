//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSEntityDescription, NSString;

__attribute__((visibility("hidden")))
@interface NSEntityStoreMapping
{
    NSEntityDescription *_entity;	// 16 = 0x10
    NSDictionary *_propertyMappings;	// 24 = 0x18
    NSArray *_primaryKeys;	// 32 = 0x20
    _Bool _isSingleTableEntity;	// 40 = 0x28
    NSString *_subentityColumn;	// 48 = 0x30
    unsigned int _subentityID;	// 56 = 0x38
}

- (unsigned int)subentityID;	// IMP=0x000000000009dca8
- (id)subentityColumn;	// IMP=0x000000000009dc97
- (_Bool)isSingleTableEntity;	// IMP=0x000000000009dc87
- (id)primaryKeys;	// IMP=0x000000000009dc76
- (id)propertyMappings;	// IMP=0x000000000009dc65
- (id)entity;	// IMP=0x000000000009dc54
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009da8a
- (id)description;	// IMP=0x000000000009da11
- (void)dealloc;	// IMP=0x000000000009d962
- (id)initWithEntity:(id)arg1;	// IMP=0x000000000009d7c4

@end

