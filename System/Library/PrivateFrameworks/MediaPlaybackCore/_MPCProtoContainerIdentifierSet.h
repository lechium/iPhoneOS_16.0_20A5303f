//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCProtoContainerIdentifierSet : PBCodable
{
    long long _cloudID;	// 8 = 0x8
    long long _delegateInfoID;	// 16 = 0x10
    long long _storeAdamID;	// 24 = 0x18
    NSString *_cloudCollectionID;	// 32 = 0x20
    NSString *_cloudUniversalLibraryID;	// 40 = 0x28
    NSString *_playbackAuthorizationToken;	// 48 = 0x30
    NSString *_radioStationID;	// 56 = 0x38
    NSString *_storePlaylistGlobalID;	// 64 = 0x40
    NSString *_storePlaylistVersionHash;	// 72 = 0x48
    struct {
        unsigned int cloudID:1;
        unsigned int delegateInfoID:1;
        unsigned int storeAdamID:1;
    } _has;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000eb125
- (unsigned long long)hash;	// IMP=0x00000000000eaff0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000eadc6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000eac1c
- (void)writeTo:(id)arg1;	// IMP=0x00000000000eaadc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000eaacf
- (id)dictionaryRepresentation;	// IMP=0x00000000000ea897
- (id)description;	// IMP=0x00000000000ea7e8

@end

