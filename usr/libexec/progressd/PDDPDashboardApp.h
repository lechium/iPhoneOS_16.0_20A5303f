//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PDDPDashboardApp : PBCodable
{
    NSString *_appIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001991bd
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000199174
- (unsigned long long)hash;	// IMP=0x0010000000199157
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001990bd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000199045
- (void)copyTo:(id)arg1;	// IMP=0x001000000019901b
- (void)writeTo:(id)arg1;	// IMP=0x0010000000198ff7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000198fea
- (id)dictionaryRepresentation;	// IMP=0x0010000000198e1e
- (id)description;	// IMP=0x0010000000198d6f
@property(readonly, nonatomic) _Bool hasAppIdentifier;

@end

