//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyError, PDURLSessionProxySessionMessage;

@interface PDURLSessionProxySessionBecameInvalid : PBCodable
{
    PDURLSessionProxyError *_error;	// 8 = 0x8
    PDURLSessionProxySessionMessage *_session;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000006571e
@property(retain, nonatomic) PDURLSessionProxyError *error; // @synthesize error=_error;
@property(retain, nonatomic) PDURLSessionProxySessionMessage *session; // @synthesize session=_session;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006563d
- (unsigned long long)hash;	// IMP=0x00100000000655f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000065528
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006548a
- (void)copyTo:(id)arg1;	// IMP=0x0010000000065427
- (void)writeTo:(id)arg1;	// IMP=0x00100000000653ca
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000651cf
- (id)dictionaryRepresentation;	// IMP=0x00100000000650fa
- (id)description;	// IMP=0x001000000006504b
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool hasSession;

@end

