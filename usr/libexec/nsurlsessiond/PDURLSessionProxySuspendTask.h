//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxySuspendTask : PBCodable
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000004439a
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000044318
- (unsigned long long)hash;	// IMP=0x00100000000442fb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000044261
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000441e9
- (void)copyTo:(id)arg1;	// IMP=0x00100000000441bf
- (void)writeTo:(id)arg1;	// IMP=0x001000000004419b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000043ff4
- (id)dictionaryRepresentation;	// IMP=0x0010000000043f6a
- (id)description;	// IMP=0x0010000000043ebb
@property(readonly, nonatomic) _Bool hasTask;

@end
