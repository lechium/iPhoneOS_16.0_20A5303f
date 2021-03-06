//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface APPBTagTransformation : PBCodable
{
    NSMutableArray *_requiredTags;	// 8 = 0x8
    NSMutableArray *_resultTags;	// 16 = 0x10
}

+ (Class)resultTagsType;	// IMP=0x0020000000066b01
+ (Class)requiredTagsType;	// IMP=0x0010000000066a2f
+ (id)options;	// IMP=0x001000000006691e
- (void).cxx_destruct;	// IMP=0x0020000000067826
@property(retain, nonatomic) NSMutableArray *resultTags; // @synthesize resultTags=_resultTags;
@property(retain, nonatomic) NSMutableArray *requiredTags; // @synthesize requiredTags=_requiredTags;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006759a
- (unsigned long long)hash;	// IMP=0x001000000006754d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000067485
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000067189
- (void)copyTo:(id)arg1;	// IMP=0x0010000000067029
- (void)writeTo:(id)arg1;	// IMP=0x0010000000066e18
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000066e0b
- (id)dictionaryRepresentation;	// IMP=0x0010000000066bc1
- (id)description;	// IMP=0x0010000000066b12
- (id)resultTagsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000066ae4
- (unsigned long long)resultTagsCount;	// IMP=0x0010000000066ac7
- (void)addResultTags:(id)arg1;	// IMP=0x0010000000066a5d
- (void)clearResultTags;	// IMP=0x0010000000066a40
- (id)requiredTagsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000066a12
- (unsigned long long)requiredTagsCount;	// IMP=0x00100000000669f5
- (void)addRequiredTags:(id)arg1;	// IMP=0x001000000006698b
- (void)clearRequiredTags;	// IMP=0x001000000006696e

@end

