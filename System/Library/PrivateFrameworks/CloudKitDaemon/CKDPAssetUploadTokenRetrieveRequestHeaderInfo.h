//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPAssetUploadTokenRetrieveRequestHeaderInfo : PBCodable
{
    NSString *_headerKey;	// 8 = 0x8
    NSString *_headerValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e6516
@property(retain, nonatomic) NSString *headerValue; // @synthesize headerValue=_headerValue;
@property(retain, nonatomic) NSString *headerKey; // @synthesize headerKey=_headerKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000e6469
- (unsigned long long)hash;	// IMP=0x00000000000e641c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e6354
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e62b6
- (void)copyTo:(id)arg1;	// IMP=0x00000000000e6245
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e61aa
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e619d
- (id)dictionaryRepresentation;	// IMP=0x00000000000e5f88
- (id)description;	// IMP=0x00000000000e5ed9

@end

