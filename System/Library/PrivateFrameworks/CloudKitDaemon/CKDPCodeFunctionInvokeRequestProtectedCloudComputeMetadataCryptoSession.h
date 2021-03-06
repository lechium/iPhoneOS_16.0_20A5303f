//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadataCryptoSession : PBCodable
{
    NSData *_routingToken;	// 8 = 0x8
    NSData *_wrappedInvocationKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001d3e93
@property(retain, nonatomic) NSData *routingToken; // @synthesize routingToken=_routingToken;
@property(retain, nonatomic) NSData *wrappedInvocationKey; // @synthesize wrappedInvocationKey=_wrappedInvocationKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001d3de6
- (unsigned long long)hash;	// IMP=0x00000000001d3d99
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d3cd1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d3c33
- (void)copyTo:(id)arg1;	// IMP=0x00000000001d3bd0
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d3b73
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d3b66
- (id)dictionaryRepresentation;	// IMP=0x00000000001d3951
- (id)description;	// IMP=0x00000000001d38a2
@property(readonly, nonatomic) _Bool hasRoutingToken;
@property(readonly, nonatomic) _Bool hasWrappedInvocationKey;

@end

