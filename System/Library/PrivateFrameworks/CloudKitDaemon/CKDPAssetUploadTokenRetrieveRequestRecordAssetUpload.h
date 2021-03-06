//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecordIdentifier, CKDPRecordType, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveRequestRecordAssetUpload : PBCodable
{
    NSMutableArray *_assetFields;	// 8 = 0x8
    CKDPRecordIdentifier *_recordId;	// 16 = 0x10
    CKDPRecordType *_type;	// 24 = 0x18
}

+ (Class)assetFieldsType;	// IMP=0x001000000012d9b9
- (void).cxx_destruct;	// IMP=0x000000000012e7f2
@property(retain, nonatomic) NSMutableArray *assetFields; // @synthesize assetFields=_assetFields;
@property(retain, nonatomic) CKDPRecordType *type; // @synthesize type=_type;
@property(retain, nonatomic) CKDPRecordIdentifier *recordId; // @synthesize recordId=_recordId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000012e59d
- (unsigned long long)hash;	// IMP=0x000000000012e530
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012e438
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012e232
- (void)copyTo:(id)arg1;	// IMP=0x000000000012e128
- (void)writeTo:(id)arg1;	// IMP=0x000000000012dfbf
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000012dfb2
- (id)dictionaryRepresentation;	// IMP=0x000000000012da79
- (id)description;	// IMP=0x000000000012d9ca
- (id)assetFieldsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000012d99c
- (unsigned long long)assetFieldsCount;	// IMP=0x000000000012d97f
- (void)addAssetFields:(id)arg1;	// IMP=0x000000000012d915
- (void)clearAssetFields;	// IMP=0x000000000012d8f8
@property(readonly, nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasRecordId;

@end

