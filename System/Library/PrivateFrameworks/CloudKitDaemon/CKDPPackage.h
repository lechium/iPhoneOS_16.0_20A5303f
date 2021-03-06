//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPAsset, NSMutableArray;

@interface CKDPPackage : PBCodable
{
    CKDPAsset *_manifest;	// 8 = 0x8
    NSMutableArray *_sections;	// 16 = 0x10
}

+ (Class)sectionsType;	// IMP=0x00100000002bfce4
- (void).cxx_destruct;	// IMP=0x00000000002c0927
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) CKDPAsset *manifest; // @synthesize manifest=_manifest;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002c0749
- (unsigned long long)hash;	// IMP=0x00000000002c06fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002c0634
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002c045b
- (void)copyTo:(id)arg1;	// IMP=0x00000000002c0371
- (void)writeTo:(id)arg1;	// IMP=0x00000000002c0225
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002c0218
- (id)dictionaryRepresentation;	// IMP=0x00000000002bfda4
- (id)description;	// IMP=0x00000000002bfcf5
- (id)sectionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002bfcc7
- (unsigned long long)sectionsCount;	// IMP=0x00000000002bfcaa
- (void)addSections:(id)arg1;	// IMP=0x00000000002bfc40
- (void)clearSections;	// IMP=0x00000000002bfc23
@property(readonly, nonatomic) _Bool hasManifest;

@end

