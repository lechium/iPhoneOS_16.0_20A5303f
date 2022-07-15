//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class _ICLLParticipantQuery, _ICLLPlaybackControlSettingsQuery, _ICLLPlaybackSyncStateQuery, _ICLLQueueQuery;

__attribute__((visibility("hidden")))
@interface _ICLLQueryMessage : PBCodable
{
    _ICLLParticipantQuery *_participant;	// 8 = 0x8
    _ICLLPlaybackControlSettingsQuery *_playbackControlSettings;	// 16 = 0x10
    _ICLLPlaybackSyncStateQuery *_playbackSyncState;	// 24 = 0x18
    int _query;	// 32 = 0x20
    _ICLLQueueQuery *_queue;	// 40 = 0x28
    struct {
        unsigned int query:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000fc308
- (unsigned long long)hash;	// IMP=0x00000000000fc250
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fc0ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fbfdf
- (void)writeTo:(id)arg1;	// IMP=0x00000000000fbf48
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000fbf3b
- (id)dictionaryRepresentation;	// IMP=0x00000000000fbd72
- (id)description;	// IMP=0x00000000000fbcc3

@end
