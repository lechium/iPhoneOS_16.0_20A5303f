//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class ICPBDGSFinishDelegationRequest, ICPBDGSStartDelegationRequest;

__attribute__((visibility("hidden")))
@interface ICPBDGSRequest : PBRequest
{
    ICPBDGSFinishDelegationRequest *_finishDelegationRequest;	// 8 = 0x8
    ICPBDGSStartDelegationRequest *_startDelegationRequest;	// 16 = 0x10
    unsigned int _uniqueID;	// 24 = 0x18
    struct {
        unsigned int uniqueID:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000001682b4
- (unsigned long long)hash;	// IMP=0x0000000000168234
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016813f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016807e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000167ffd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000167ff0
- (id)dictionaryRepresentation;	// IMP=0x0000000000167ec1
- (id)description;	// IMP=0x0000000000167e12

@end
