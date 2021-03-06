//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface CKDPZoneRetrieveResponse : PBCodable
{
    NSMutableArray *_anonymousZoneInfos;	// 8 = 0x8
    NSData *_continuationMarker;	// 16 = 0x10
    NSMutableArray *_zoneSummarys;	// 24 = 0x18
}

+ (Class)anonymousZoneInfoType;	// IMP=0x0010000000223ebd
+ (Class)zoneSummaryType;	// IMP=0x0010000000223dd6
- (void).cxx_destruct;	// IMP=0x0000000000225129
@property(retain, nonatomic) NSMutableArray *anonymousZoneInfos; // @synthesize anonymousZoneInfos=_anonymousZoneInfos;
@property(retain, nonatomic) NSData *continuationMarker; // @synthesize continuationMarker=_continuationMarker;
@property(retain, nonatomic) NSMutableArray *zoneSummarys; // @synthesize zoneSummarys=_zoneSummarys;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000224e51
- (unsigned long long)hash;	// IMP=0x0000000000224de4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000224cec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002249bd
- (void)copyTo:(id)arg1;	// IMP=0x0000000000224839
- (void)writeTo:(id)arg1;	// IMP=0x0000000000224603
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002245f6
- (id)dictionaryRepresentation;	// IMP=0x0000000000223f7d
- (id)description;	// IMP=0x0000000000223ece
- (id)anonymousZoneInfoAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000223ea0
- (unsigned long long)anonymousZoneInfosCount;	// IMP=0x0000000000223e83
- (void)addAnonymousZoneInfo:(id)arg1;	// IMP=0x0000000000223e19
- (void)clearAnonymousZoneInfos;	// IMP=0x0000000000223dfc
@property(readonly, nonatomic) _Bool hasContinuationMarker;
- (id)zoneSummaryAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000223db9
- (unsigned long long)zoneSummarysCount;	// IMP=0x0000000000223d9c
- (void)addZoneSummary:(id)arg1;	// IMP=0x0000000000223d32
- (void)clearZoneSummarys;	// IMP=0x0000000000223d15

@end

