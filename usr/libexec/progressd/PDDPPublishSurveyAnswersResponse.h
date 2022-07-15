//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface PDDPPublishSurveyAnswersResponse : PBCodable
{
    NSMutableArray *_payloads;	// 8 = 0x8
}

+ (Class)payloadType;	// IMP=0x002000000017e29e
- (void).cxx_destruct;	// IMP=0x002000000017ed29
@property(retain, nonatomic) NSMutableArray *payloads; // @synthesize payloads=_payloads;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000017ebcf
- (unsigned long long)hash;	// IMP=0x001000000017ebb2
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000017eb18
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000017e955
- (void)copyTo:(id)arg1;	// IMP=0x001000000017e88e
- (void)writeTo:(id)arg1;	// IMP=0x001000000017e75e
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000017e591
- (id)dictionaryRepresentation;	// IMP=0x001000000017e35e
- (id)description;	// IMP=0x001000000017e2af
- (id)payloadAtIndex:(unsigned long long)arg1;	// IMP=0x001000000017e281
- (unsigned long long)payloadsCount;	// IMP=0x001000000017e264
- (void)addPayload:(id)arg1;	// IMP=0x001000000017e1fa
- (void)clearPayloads;	// IMP=0x001000000017e1dd

@end
