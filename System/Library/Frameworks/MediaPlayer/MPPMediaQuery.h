//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MPPMediaQuery : PBCodable
{
    int _entityOrder;	// 8 = 0x8
    NSMutableArray *_filterPredicates;	// 16 = 0x10
    int _groupingType;	// 24 = 0x18
    NSMutableArray *_staticEntityIdentifiers;	// 32 = 0x20
    int _staticEntityType;	// 40 = 0x28
    _Bool _filteringDisabled;	// 44 = 0x2c
    _Bool _includeNonLibraryEntities;	// 45 = 0x2d
    struct {
        unsigned int entityOrder:1;
        unsigned int groupingType:1;
        unsigned int staticEntityType:1;
        unsigned int filteringDisabled:1;
        unsigned int includeNonLibraryEntities:1;
    } _has;	// 48 = 0x30
}

+ (Class)staticEntityIdentifiersType;	// IMP=0x00100000001a45a9
+ (Class)filterPredicatesType;	// IMP=0x00100000001a4598
- (void).cxx_destruct;	// IMP=0x00000000001a4567
@property(nonatomic) _Bool includeNonLibraryEntities; // @synthesize includeNonLibraryEntities=_includeNonLibraryEntities;
@property(retain, nonatomic) NSMutableArray *staticEntityIdentifiers; // @synthesize staticEntityIdentifiers=_staticEntityIdentifiers;
@property(nonatomic) _Bool filteringDisabled; // @synthesize filteringDisabled=_filteringDisabled;
@property(retain, nonatomic) NSMutableArray *filterPredicates; // @synthesize filterPredicates=_filterPredicates;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001a422a
- (unsigned long long)hash;	// IMP=0x00000000001a4123
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a3f6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a3bbc
- (void)copyTo:(id)arg1;	// IMP=0x00000000001a39c8
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a3700
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a31f4
- (id)dictionaryRepresentation;	// IMP=0x00000000001a2af2
- (id)description;	// IMP=0x00000000001a2a43
@property(nonatomic) _Bool hasIncludeNonLibraryEntities;
- (int)StringAsStaticEntityType:(id)arg1;	// IMP=0x00000000001a2991
- (id)staticEntityTypeAsString:(int)arg1;	// IMP=0x00000000001a293b
@property(nonatomic) _Bool hasStaticEntityType;
@property(nonatomic) int staticEntityType; // @synthesize staticEntityType=_staticEntityType;
- (id)staticEntityIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001a28b1
- (unsigned long long)staticEntityIdentifiersCount;	// IMP=0x00000000001a2894
- (void)addStaticEntityIdentifiers:(id)arg1;	// IMP=0x00000000001a282a
- (void)clearStaticEntityIdentifiers;	// IMP=0x00000000001a280d
- (int)StringAsEntityOrder:(id)arg1;	// IMP=0x00000000001a2770
- (id)entityOrderAsString:(int)arg1;	// IMP=0x00000000001a2725
@property(nonatomic) _Bool hasEntityOrder;
@property(nonatomic) int entityOrder; // @synthesize entityOrder=_entityOrder;
@property(nonatomic) _Bool hasFilteringDisabled;
- (int)StringAsGroupingType:(id)arg1;	// IMP=0x00000000001a2490
- (id)groupingTypeAsString:(int)arg1;	// IMP=0x00000000001a237d
@property(nonatomic) _Bool hasGroupingType;
@property(nonatomic) int groupingType; // @synthesize groupingType=_groupingType;
- (id)filterPredicatesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001a22f5
- (unsigned long long)filterPredicatesCount;	// IMP=0x00000000001a22d8
- (void)addFilterPredicates:(id)arg1;	// IMP=0x00000000001a226e
- (void)clearFilterPredicates;	// IMP=0x00000000001a2251

@end

