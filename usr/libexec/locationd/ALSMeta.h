//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ALSMeta : PBCodable
{
    NSString *_productId;	// 8 = 0x8
    NSString *_softwareBuild;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *softwareBuild; // @synthesize softwareBuild=_softwareBuild;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000091a92d
- (unsigned long long)hash;	// IMP=0x001000000091a8e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000091a84c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000091a7ab
- (void)copyTo:(id)arg1;	// IMP=0x001000000091a755
- (void)writeTo:(id)arg1;	// IMP=0x001000000091a705
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000091a6f8
- (id)dictionaryRepresentation;	// IMP=0x001000000091a4e4
- (id)description;	// IMP=0x001000000091a46d
@property(readonly, nonatomic) _Bool hasProductId;
@property(readonly, nonatomic) _Bool hasSoftwareBuild;
- (void)dealloc;	// IMP=0x001000000091a3ec

@end
