//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPictureItemContainer : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_pictureItems;	// 16 = 0x10
    _Bool _allowFullScreenPhoto;	// 24 = 0x18
    struct {
        unsigned int has_allowFullScreenPhoto:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000ca7b51
- (unsigned long long)hash;	// IMP=0x0000000000ca7afe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ca7a2d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ca784f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ca76ca
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ca76bb
- (id)jsonRepresentation;	// IMP=0x0000000000ca75a9
- (id)dictionaryRepresentation;	// IMP=0x0000000000ca7197
- (id)description;	// IMP=0x0000000000ca70e8

@end

