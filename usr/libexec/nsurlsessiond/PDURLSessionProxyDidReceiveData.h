//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveData : PBCodable
{
    NSData *_receivedData;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000336f1
@property(retain, nonatomic) NSData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003362a
- (unsigned long long)hash;	// IMP=0x00100000000335dd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000033515
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000033477
- (void)copyTo:(id)arg1;	// IMP=0x0010000000033414
- (void)writeTo:(id)arg1;	// IMP=0x00100000000333b7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000331d9
- (id)dictionaryRepresentation;	// IMP=0x0010000000033129
- (id)description;	// IMP=0x001000000003307a
@property(readonly, nonatomic) _Bool hasReceivedData;
@property(readonly, nonatomic) _Bool hasTask;

@end
