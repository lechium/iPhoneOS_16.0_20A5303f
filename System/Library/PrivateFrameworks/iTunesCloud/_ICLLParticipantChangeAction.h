//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class _ICLLParticipantQuery;

__attribute__((visibility("hidden")))
@interface _ICLLParticipantChangeAction : PBCodable
{
    long long _participantId;	// 8 = 0x8
    _ICLLParticipantQuery *_participantQuery;	// 16 = 0x10
    int _status;	// 24 = 0x18
    struct {
        unsigned int participantId:1;
        unsigned int status:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000000fe920
- (unsigned long long)hash;	// IMP=0x00000000000fe8b9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fe7d2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fe724
- (void)writeTo:(id)arg1;	// IMP=0x00000000000fe695
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000fe688
- (id)dictionaryRepresentation;	// IMP=0x00000000000fe544
- (id)description;	// IMP=0x00000000000fe495

@end
