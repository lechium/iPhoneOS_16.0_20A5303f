//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDGuidesLocationEntry, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildActionGuides : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDGuidesLocationEntry *_guidesLocationEntry;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000ba631a
- (unsigned long long)hash;	// IMP=0x0000000000ba5c72
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ba5bd8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ba5b4d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ba5a4f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ba5a40
- (id)jsonRepresentation;	// IMP=0x0000000000ba519a
- (id)dictionaryRepresentation;	// IMP=0x0000000000ba4f9a
- (id)description;	// IMP=0x0000000000ba4eeb

@end

