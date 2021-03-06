//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSVisibility : PBCodable
{
    double _ratio;	// 8 = 0x8
    NSString *_country;	// 16 = 0x10
    NSString *_language;	// 24 = 0x18
    struct {
        unsigned int ratio:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004f32c
@property(nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004f249
- (unsigned long long)hash;	// IMP=0x000000000004f0e6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004efeb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004ef29
- (void)copyTo:(id)arg1;	// IMP=0x000000000004eea2
- (void)writeTo:(id)arg1;	// IMP=0x000000000004ee1f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004ee12
- (id)dictionaryRepresentation;	// IMP=0x000000000004eb32
- (id)description;	// IMP=0x000000000004ea83
@property(nonatomic) _Bool hasRatio;
@property(readonly, nonatomic) _Bool hasCountry;
@property(readonly, nonatomic) _Bool hasLanguage;

@end

