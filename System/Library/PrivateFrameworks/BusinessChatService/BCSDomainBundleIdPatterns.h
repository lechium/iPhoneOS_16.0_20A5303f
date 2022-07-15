//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BCSDomainBundleIdPatterns : PBCodable
{
    NSMutableArray *_bundleIdPatterns;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
}

+ (Class)bundleIdPatternsType;	// IMP=0x00100000000114a5
- (void).cxx_destruct;	// IMP=0x00000000000120ac
@property(retain, nonatomic) NSMutableArray *bundleIdPatterns; // @synthesize bundleIdPatterns=_bundleIdPatterns;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000011eea
- (unsigned long long)hash;	// IMP=0x0000000000011e9d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000011dd5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011bfc
- (void)copyTo:(id)arg1;	// IMP=0x0000000000011b12
- (void)writeTo:(id)arg1;	// IMP=0x00000000000119c6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000117bb
- (id)dictionaryRepresentation;	// IMP=0x0000000000011565
- (id)description;	// IMP=0x00000000000114b6
- (id)bundleIdPatternsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000011488
- (unsigned long long)bundleIdPatternsCount;	// IMP=0x000000000001146b
- (void)addBundleIdPatterns:(id)arg1;	// IMP=0x0000000000011401
- (void)clearBundleIdPatterns;	// IMP=0x00000000000113e4
@property(readonly, nonatomic) _Bool hasDomain;

@end
