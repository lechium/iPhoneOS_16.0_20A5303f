//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface PDURLSessionProxyResponse : PBCodable
{
    NSData *_archiveList;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    CDStruct_f20694ce _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x002000000003b06f
@property(retain, nonatomic) NSData *archiveList; // @synthesize archiveList=_archiveList;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003afd7
- (unsigned long long)hash;	// IMP=0x001000000003af8b
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003aec6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003ae36
- (void)copyTo:(id)arg1;	// IMP=0x001000000003add3
- (void)writeTo:(id)arg1;	// IMP=0x001000000003ad6f
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003ad62
- (id)dictionaryRepresentation;	// IMP=0x001000000003aca4
- (id)description;	// IMP=0x001000000003abf5
@property(readonly, nonatomic) _Bool hasArchiveList;
@property(nonatomic) _Bool hasVersion;
- (id)_actualResponse;	// IMP=0x0010000000036d9e
- (id)_initWithActualResponse:(id)arg1;	// IMP=0x0010000000036cdb

@end

