//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyCredential, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveChallengeReply : PBCodable
{
    PDURLSessionProxyCredential *_credential;	// 8 = 0x8
    int _disposition;	// 16 = 0x10
    PDURLSessionProxyTaskMessage *_task;	// 24 = 0x18
    CDStruct_cc6d6311 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000003580
@property(retain, nonatomic) PDURLSessionProxyCredential *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000000347f
- (unsigned long long)hash;	// IMP=0x001000000000340c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000003317
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000003256
- (void)copyTo:(id)arg1;	// IMP=0x00100000000031d3
- (void)writeTo:(id)arg1;	// IMP=0x0010000000003152
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000002eba
- (id)dictionaryRepresentation;	// IMP=0x0010000000002d6e
- (id)description;	// IMP=0x0010000000002cbf
@property(readonly, nonatomic) _Bool hasCredential;
- (int)StringAsDisposition:(id)arg1;	// IMP=0x0010000000002bfb
- (id)dispositionAsString:(int)arg1;	// IMP=0x0010000000002bb3
@property(nonatomic) _Bool hasDisposition;
@property(nonatomic) int disposition; // @synthesize disposition=_disposition;
@property(readonly, nonatomic) _Bool hasTask;

@end

