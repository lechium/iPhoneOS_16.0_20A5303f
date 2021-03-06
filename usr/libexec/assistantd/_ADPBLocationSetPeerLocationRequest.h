//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

@interface _ADPBLocationSetPeerLocationRequest : PBRequest
{
    NSData *_codedLocation;	// 8 = 0x8
}

+ (unsigned short)_ADPBLocationRequestType;	// IMP=0x001000000021a8ac
- (void).cxx_destruct;	// IMP=0x00100000001081e0
@property(retain, nonatomic) NSData *codedLocation; // @synthesize codedLocation=_codedLocation;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000108197
- (unsigned long long)hash;	// IMP=0x001000000010817a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001080e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000108068
- (void)copyTo:(id)arg1;	// IMP=0x001000000010803e
- (void)writeTo:(id)arg1;	// IMP=0x001000000010801a
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000010800d
- (id)dictionaryRepresentation;	// IMP=0x0010000000107e3f
- (id)description;	// IMP=0x0010000000107d90
@property(readonly, nonatomic) _Bool hasCodedLocation;
- (void)_ad_performForPeerLocationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f698d
- (void)ad_setLocation:(id)arg1;	// IMP=0x00100000001b15a4
- (id)ad_location;	// IMP=0x00100000001b14f2

@end

