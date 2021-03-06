//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface CPLCKFeatureAvailabilityResponse : PBCodable
{
    NSMutableArray *_features;	// 8 = 0x8
}

+ (Class)featuresType;	// IMP=0x00400000000ab743
- (void).cxx_destruct;	// IMP=0x00100000000ac1d8
@property(retain, nonatomic) NSMutableArray *features; // @synthesize features=_features;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000ac07e
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000abfc7
- (id);	// IMP=0x00100000000abe04
- (void)copyTo:(id)arg1;	// IMP=0x00100000000abd3d
- (void)writeTo:(id)arg1;	// IMP=0x00100000000abc0d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000abc00
- (id)dictionaryRepresentation;	// IMP=0x00100000000ab803
@property(readonly, copy) NSString *description;
- (id)featuresAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000ab726
- (unsigned long long)featuresCount;	// IMP=0x00100000000ab709
- (void)addFeatures:(id)arg1;	// IMP=0x00100000000ab69f
- (void)clearFeatures;	// IMP=0x00100000000ab682
- (void)substituteRecordTransports:(id)arg1;	// IMP=0x00100000000af830
- (id)extractRecordTransports;	// IMP=0x00100000000af823

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

