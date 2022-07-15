//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray, NSString;

@interface CPLCKFeatureAvailabilityRequest : PBRequest
{
    NSMutableArray *_features;	// 8 = 0x8
}

+ (Class)featuresType;	// IMP=0x00400000000b4fd4
- (void).cxx_destruct;	// IMP=0x00100000000b5a69
@property(retain, nonatomic) NSMutableArray *features; // @synthesize features=_features;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000b590f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b5858
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b5695
- (void)copyTo:(id)arg1;	// IMP=0x00100000000b55ce
- (void)writeTo:(id)arg1;	// IMP=0x00100000000b549e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000b5491
- (id)dictionaryRepresentation;	// IMP=0x00100000000b5094
@property(readonly, copy) NSString *description;
- (id)featuresAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000b4fb7
- (unsigned long long)featuresCount;	// IMP=0x00100000000b4f9a
- (void)addFeatures:(id)arg1;	// IMP=0x00100000000b4f30
- (void)clearFeatures;	// IMP=0x00100000000b4f13
- (void)substituteRecordTransports:(id)arg1;	// IMP=0x00100000000af81d
- (id)extractRecordTransports;	// IMP=0x00100000000af810

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
