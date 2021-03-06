//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCCKPQuery, FCCKPRecordZoneIdentifier, FCCKPRequestedFields, NSData;

__attribute__((visibility("hidden")))
@interface FCCKPQueryRetrieveRequest : PBRequest <NSCopying>
{
    NSData *_continuationMarker;	// 8 = 0x8
    unsigned int _limit;	// 16 = 0x10
    FCCKPQuery *_query;	// 24 = 0x18
    FCCKPRequestedFields *_requestedFields;	// 32 = 0x20
    FCCKPRecordZoneIdentifier *_zoneIdentifier;	// 40 = 0x28
    struct {
        unsigned int limit:1;
    } _has;	// 48 = 0x30
}

+ (id)options;	// IMP=0x00100000001b5a5c
- (void).cxx_destruct;	// IMP=0x00000000001b64b3
- (unsigned long long)hash;	// IMP=0x00000000001b63a1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b6244
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b6130
- (Class)responseClass;	// IMP=0x00000000001b611f
- (unsigned int)requestTypeCode;	// IMP=0x00000000001b6114
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b6059
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b604c
- (id)dictionaryRepresentation;	// IMP=0x00000000001b5b5b
- (id)description;	// IMP=0x00000000001b5aac

@end

