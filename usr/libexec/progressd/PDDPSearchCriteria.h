//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PDDPTypedValue;

@interface PDDPSearchCriteria : PBCodable
{
    int _compareOptions;	// 8 = 0x8
    NSString *_fieldName;	// 16 = 0x10
    int _searchOperator;	// 24 = 0x18
    PDDPTypedValue *_value;	// 32 = 0x20
    struct {
        unsigned int compareOptions:1;
        unsigned int searchOperator:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001383aa
@property(retain, nonatomic) PDDPTypedValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000013829f
- (unsigned long long)hash;	// IMP=0x00100000001381f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001380d1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000137ff5
- (void)copyTo:(id)arg1;	// IMP=0x0010000000137f4e
- (void)writeTo:(id)arg1;	// IMP=0x0010000000137ea5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000137e98
- (id)dictionaryRepresentation;	// IMP=0x0010000000137931
- (id)description;	// IMP=0x0010000000137882
- (int)StringAsCompareOptions:(id)arg1;	// IMP=0x0010000000137750
- (id);	// IMP=0x001000000013767f
@property(nonatomic) _Bool hasCompareOptions;
@property(nonatomic) int compareOptions; // @synthesize compareOptions=_compareOptions;
@property(readonly, nonatomic) _Bool hasValue;
- (int)StringAsSearchOperator:(id)arg1;	// IMP=0x00100000001374ce
- (id)searchOperatorAsString:(int)arg1;	// IMP=0x0010000000137485
@property(nonatomic) _Bool hasSearchOperator;
@property(nonatomic) int searchOperator; // @synthesize searchOperator=_searchOperator;
@property(readonly, nonatomic) _Bool hasFieldName;

@end
