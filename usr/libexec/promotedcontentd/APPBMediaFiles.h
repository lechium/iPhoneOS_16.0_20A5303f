//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface APPBMediaFiles : PBCodable
{
    double _duration;	// 8 = 0x8
    NSMutableArray *_mediaAssets;	// 16 = 0x10
    struct {
        unsigned int duration:1;
    } _has;	// 24 = 0x18
}

+ (Class)mediaAssetsType;	// IMP=0x0020000000042c59
+ (id)options;	// IMP=0x0010000000042b01
- (void).cxx_destruct;	// IMP=0x00200000000439d5
@property(retain, nonatomic) NSMutableArray *mediaAssets; // @synthesize mediaAssets=_mediaAssets;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000043827
- (unsigned long long)hash;	// IMP=0x00100000000436ef
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000043624
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000043433
- (void)copyTo:(id)arg1;	// IMP=0x001000000004334a
- (void)writeTo:(id)arg1;	// IMP=0x00100000000431f3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000431e6
- (id)dictionaryRepresentation;	// IMP=0x0010000000042d19
- (id)description;	// IMP=0x0010000000042c6a
- (id)mediaAssetsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000042c3c
- (unsigned long long)mediaAssetsCount;	// IMP=0x0010000000042c1f
- (void)addMediaAssets:(id)arg1;	// IMP=0x0010000000042bb5
- (void)clearMediaAssets;	// IMP=0x0010000000042b98
@property(nonatomic) _Bool hasDuration;

@end

