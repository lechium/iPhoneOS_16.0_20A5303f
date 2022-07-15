//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface SPProtoCacheAssets : PBCodable
{
    NSMutableArray *_assets;	// 8 = 0x8
}

+ (Class)assetsType;	// IMP=0x0020000000007f90
- (void).cxx_destruct;	// IMP=0x0020000000008a25
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000088cb
- (unsigned long long)hash;	// IMP=0x00100000000088ae
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000008814
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000008651
- (void)copyTo:(id)arg1;	// IMP=0x001000000000858a
- (void)writeTo:(id)arg1;	// IMP=0x001000000000845a
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000844d
- (id)dictionaryRepresentation;	// IMP=0x0010000000008050
- (id)description;	// IMP=0x0010000000007fa1
- (id)assetsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000007f73
- (unsigned long long)assetsCount;	// IMP=0x0010000000007f56
- (void)addAssets:(id)arg1;	// IMP=0x0010000000007eec
- (void)clearAssets;	// IMP=0x0010000000007ecf

@end
