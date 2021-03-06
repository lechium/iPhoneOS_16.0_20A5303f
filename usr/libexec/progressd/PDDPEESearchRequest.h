//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

@interface PDDPEESearchRequest : PBRequest
{
    NSMutableArray *_searchRequestZones;	// 8 = 0x8
}

+ (Class)searchRequestZonesType;	// IMP=0x002000000019b825
- (void).cxx_destruct;	// IMP=0x002000000019c2cc
@property(retain, nonatomic) NSMutableArray *searchRequestZones; // @synthesize searchRequestZones=_searchRequestZones;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000019c172
- (unsigned long long)hash;	// IMP=0x001000000019c155
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000019c0bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000019bef8
- (void)copyTo:(id)arg1;	// IMP=0x001000000019be31
- (Class)responseClass;	// IMP=0x001000000019be20
- (unsigned int)requestTypeCode;	// IMP=0x001000000019be15
- (void)writeTo:(id)arg1;	// IMP=0x001000000019bce5
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000019bb18
- (id)dictionaryRepresentation;	// IMP=0x001000000019b8e5
- (id)description;	// IMP=0x001000000019b836
- (id)searchRequestZonesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000019b808
- (unsigned long long)searchRequestZonesCount;	// IMP=0x001000000019b7eb
- (void)addSearchRequestZones:(id)arg1;	// IMP=0x001000000019b781
- (void)clearSearchRequestZones;	// IMP=0x001000000019b764

@end

