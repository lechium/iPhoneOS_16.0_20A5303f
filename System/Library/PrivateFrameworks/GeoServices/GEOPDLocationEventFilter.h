//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocationEventFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c81a19
- (unsigned long long)hash;	// IMP=0x0000000000c81a11
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c819cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c81971
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c81954
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c81945
- (id)jsonRepresentation;	// IMP=0x0000000000c81833
- (id)dictionaryRepresentation;	// IMP=0x0000000000c816c8
- (id)description;	// IMP=0x0000000000c81619

@end

