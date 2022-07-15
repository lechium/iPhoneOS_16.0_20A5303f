//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface SYLogErrorInfo : PBCodable
{
    long long _code;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000003e6f
@property(nonatomic) long long code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000003dd6
- (unsigned long long)hash;	// IMP=0x0000000000003d9a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003cf1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003c6a
- (void)copyTo:(id)arg1;	// IMP=0x0000000000003c0f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000003bb2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000003ba5
- (id)dictionaryRepresentation;	// IMP=0x00000000000038e9
- (id)description;	// IMP=0x000000000000383a
@property(readonly, nonatomic) NSError *cocoaError;
- (id)initWithCocoaError:(id)arg1;	// IMP=0x000000000006a8d1

@end
