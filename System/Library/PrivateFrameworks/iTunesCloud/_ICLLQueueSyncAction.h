//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _ICLLPlaybackControlSettings, _ICLLQueue;

__attribute__((visibility("hidden")))
@interface _ICLLQueueSyncAction : PBCodable
{
    _ICLLPlaybackControlSettings *_controlSettings;	// 8 = 0x8
    _ICLLQueue *_queue;	// 16 = 0x10
    NSString *_queueContext;	// 24 = 0x18
    int _revision;	// 32 = 0x20
    CDStruct_3e022450 _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000013603
- (unsigned long long)hash;	// IMP=0x0000000000013575
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001344c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013362
- (void)writeTo:(id)arg1;	// IMP=0x00000000000132c4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000132b7
- (id)dictionaryRepresentation;	// IMP=0x000000000001315f
- (id)description;	// IMP=0x00000000000130b0

@end

