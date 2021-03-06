//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FCCKPOperation : PBCodable <NSCopying>
{
    NSString *_operationUUID;	// 8 = 0x8
    int _type;	// 16 = 0x10
    _Bool _last;	// 20 = 0x14
    _Bool _synchronousMode;	// 21 = 0x15
    struct {
        unsigned int type:1;
        unsigned int last:1;
        unsigned int synchronousMode:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002a3d68
- (unsigned long long)hash;	// IMP=0x00000000002a3cc2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a3ba0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a3ad0
- (void)writeTo:(id)arg1;	// IMP=0x00000000002a3a21
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002a3a14
- (id)dictionaryRepresentation;	// IMP=0x00000000002a352b
- (id)description;	// IMP=0x00000000002a347c

@end

