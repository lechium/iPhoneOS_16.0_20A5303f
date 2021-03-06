//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE;

@interface ALCMCoarseElevation : PBCodable
{
    unsigned int _elevationAscended;	// 8 = 0x8
    MISSING_TYPE *_source;	// 12 = 0xc
    struct {
        unsigned int source:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int elevationAscended; // @synthesize elevationAscended=_elevationAscended;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000003dc273
- (unsigned long long)hash;	// IMP=0x00100000003dc237
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000003dc1c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000003dc15a
- (void)copyTo:(id)arg1;	// IMP=0x00100000003dc129
- (void)writeTo:(id)arg1;	// IMP=0x00100000003dc0d8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000003dc0cb
- (id)dictionaryRepresentation;	// IMP=0x00100000003dbd83
- (id)description;	// IMP=0x00100000003dbd0c
- (int)StringAsSource:(id)arg1;	// IMP=0x00100000003dbcc5
- (id)sourceAsString:(int)arg1;	// IMP=0x00100000003dbc86
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;

@end

