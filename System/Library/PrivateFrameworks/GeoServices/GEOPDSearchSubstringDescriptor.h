//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchSubstringDescriptor : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_spanDatas;	// 16 = 0x10
    int _beginIndex;	// 24 = 0x18
    int _endIndex;	// 28 = 0x1c
    int _stringType;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000062c8ac
- (unsigned long long)hash;	// IMP=0x000000000062c84c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000062c781
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000062c59a
- (void)writeTo:(id)arg1;	// IMP=0x000000000062c3f3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000062c3e4
- (id)jsonRepresentation;	// IMP=0x000000000062becc
- (id)dictionaryRepresentation;	// IMP=0x000000000062bbed
- (id)description;	// IMP=0x000000000062bb3e

@end
