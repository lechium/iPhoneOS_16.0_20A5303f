//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface C2MPGenericEvent : PBCodable
{
    unsigned long long _timestampEnd;	// 8 = 0x8
    unsigned long long _timestampStart;	// 16 = 0x10
    NSMutableArray *_metrics;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    int _type;	// 40 = 0x28
    struct {
        unsigned int timestampEnd:1;
        unsigned int timestampStart:1;
        unsigned int type:1;
    } _has;	// 44 = 0x2c
}

+ (Class)metricType;	// IMP=0x00100000000154bd
- (void).cxx_destruct;	// IMP=0x00000000000166c3
@property(retain, nonatomic) NSMutableArray *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) unsigned long long timestampEnd; // @synthesize timestampEnd=_timestampEnd;
@property(nonatomic) unsigned long long timestampStart; // @synthesize timestampStart=_timestampStart;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000016466
- (unsigned long long)hash;	// IMP=0x00000000000163ad
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001625c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016020
- (void)copyTo:(id)arg1;	// IMP=0x0000000000015edd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000015d2b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000015d1e
- (id)dictionaryRepresentation;	// IMP=0x000000000001557d
- (id)description;	// IMP=0x00000000000154ce
- (id)metricAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000154a0
- (unsigned long long)metricsCount;	// IMP=0x0000000000015483
- (void)addMetric:(id)arg1;	// IMP=0x0000000000015419
- (void)clearMetrics;	// IMP=0x00000000000153fc
@property(nonatomic) _Bool hasTimestampEnd;
@property(nonatomic) _Bool hasTimestampStart;
@property(readonly, nonatomic) _Bool hasName;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000000152a2
- (id)typeAsString:(int)arg1;	// IMP=0x000000000001521d
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

