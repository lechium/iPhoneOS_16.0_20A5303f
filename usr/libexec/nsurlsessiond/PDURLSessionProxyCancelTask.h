//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyCancelTask : PBCodable
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000051c98
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (MISSING_TYPE *)mergeFrom: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000051c16
- (unsigned long long)hash;	// IMP=0x0010000000051bf9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000051b5f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000051ae7
- (void)copyTo:(id)arg1;	// IMP=0x0010000000051abd
- (void)writeTo:(id)arg1;	// IMP=0x0010000000051a99
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000518f2
- (id)dictionaryRepresentation;	// IMP=0x0010000000051868
- (id)description;	// IMP=0x00100000000517b9
@property(readonly, nonatomic) _Bool hasTask;

@end
