//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class TASKRequest;

@interface TASKControlRequest : PBRequest
{
    TASKRequest *_create;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003f5a5
@property(retain, nonatomic) TASKRequest *create; // @synthesize create=_create;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003f523
- (unsigned long long)hash;	// IMP=0x001000000003f506
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003f46c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003f3f4
- (void)copyTo:(id)arg1;	// IMP=0x001000000003f3ca
- (void)writeTo:(id)arg1;	// IMP=0x001000000003f3a6
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003f399
- (id)dictionaryRepresentation;	// IMP=0x001000000003f14e
- (id)description;	// IMP=0x001000000003f09f
@property(readonly, nonatomic) _Bool hasCreate;

@end

