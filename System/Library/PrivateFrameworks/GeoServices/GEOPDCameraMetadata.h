//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDLensProjection, GEOPDOrientedPosition, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDCameraMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_9f2792e4 _textureIds;	// 16 = 0x10
    GEOPDLensProjection *_lensProjection;	// 40 = 0x28
    GEOPDOrientedPosition *_position;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _cameraNumber;	// 68 = 0x44
    int _imageHeight;	// 72 = 0x48
    int _imageWidth;	// 76 = 0x4c
    struct {
        unsigned int has_cameraNumber:1;
        unsigned int has_imageHeight:1;
        unsigned int has_imageWidth:1;
        unsigned int read_textureIds:1;
        unsigned int read_lensProjection:1;
        unsigned int read_position:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000001175b43
- (unsigned long long)hash;	// IMP=0x0000000001175a6c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011758e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011756ad
- (void)writeTo:(id)arg1;	// IMP=0x000000000117547f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001175470
- (id)jsonRepresentation;	// IMP=0x00000000011738d1
- (id)dictionaryRepresentation;	// IMP=0x00000000011735ce
- (id)description;	// IMP=0x000000000117351f
- (void)dealloc;	// IMP=0x000000000117280f
- (id)initWithData:(id)arg1;	// IMP=0x00000000011727b3
- (id)init;	// IMP=0x0000000001172757

@end
