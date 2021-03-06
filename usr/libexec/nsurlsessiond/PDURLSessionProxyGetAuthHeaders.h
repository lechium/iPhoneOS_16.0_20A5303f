//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyResponse, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyGetAuthHeaders : PBCodable
{
    PDURLSessionProxyResponse *_response;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000d8b0
@property(retain, nonatomic) PDURLSessionProxyResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000000d7cf
- (unsigned long long)hash;	// IMP=0x001000000000d782
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000d6ba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000d61c
- (void)copyTo:(id)arg1;	// IMP=0x001000000000d5b9
- (void)writeTo:(id)arg1;	// IMP=0x001000000000d55c
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000d361
- (id)dictionaryRepresentation;	// IMP=0x001000000000d28c
- (id)description;	// IMP=0x001000000000d1dd
@property(readonly, nonatomic) _Bool hasResponse;
@property(readonly, nonatomic) _Bool hasTask;

@end

