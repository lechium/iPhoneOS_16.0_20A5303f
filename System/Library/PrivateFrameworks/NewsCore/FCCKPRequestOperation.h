//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCCKPOperation, FCCKPQueryRetrieveRequest, FCCKPRecordRetrieveRequest, FCCKPRequestOperationHeader;

__attribute__((visibility("hidden")))
@interface FCCKPRequestOperation : PBCodable <NSCopying>
{
    FCCKPRequestOperationHeader *_header;	// 8 = 0x8
    FCCKPQueryRetrieveRequest *_queryRetrieveRequest;	// 16 = 0x10
    FCCKPRecordRetrieveRequest *_recordRetrieveRequest;	// 24 = 0x18
    FCCKPOperation *_request;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002b6289
- (unsigned long long)hash;	// IMP=0x00000000002b6145
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b6019
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002b5f2f
- (void)writeTo:(id)arg1;	// IMP=0x00000000002b5e98
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002b5bc2
- (id)dictionaryRepresentation;	// IMP=0x00000000002b5a55
- (id)description;	// IMP=0x00000000002b59a6

@end

