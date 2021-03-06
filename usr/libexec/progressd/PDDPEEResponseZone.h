//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, PDDPAdminRequestRequestor, PDDPStatus;

@interface PDDPEEResponseZone : PBCodable
{
    NSData *_cursor;	// 8 = 0x8
    PDDPAdminRequestRequestor *_requestor;	// 16 = 0x10
    PDDPStatus *_status;	// 24 = 0x18
    int _totalFound;	// 32 = 0x20
    NSString *_zoneName;	// 40 = 0x28
    struct {
        unsigned int totalFound:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000ec346
@property(retain, nonatomic) PDDPAdminRequestRequestor *requestor; // @synthesize requestor=_requestor;
@property(nonatomic) int totalFound; // @synthesize totalFound=_totalFound;
@property(retain, nonatomic) NSData *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) PDDPStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000ec1ab
- (unsigned long long)hash;	// IMP=0x00100000000ec0fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ebfa1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ebe93
- (void)copyTo:(id)arg1;	// IMP=0x00100000000ebdd0
- (void)writeTo:(id)arg1;	// IMP=0x00100000000ebd15
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000ebd08
- (id)dictionaryRepresentation;	// IMP=0x00100000000eb868
- (id)description;	// IMP=0x00100000000eb7b9
@property(readonly, nonatomic) _Bool hasRequestor;
@property(nonatomic) _Bool hasTotalFound;
@property(readonly, nonatomic) _Bool hasCursor;
@property(readonly, nonatomic) _Bool hasStatus;
@property(readonly, nonatomic) _Bool hasZoneName;

@end

