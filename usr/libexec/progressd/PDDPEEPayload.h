//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSString, PDDPAdminRequestAccount, PDDPAdminRequestDetails, PDDPClass, PDDPClassMember, PDDPEERequestZone, PDDPEEResponseZone, PDDPLocation, PDDPOrganization, PDDPPerson, PDDPRole, PDDPStatus;

@interface PDDPEEPayload : PBCodable
{
    int _action;	// 8 = 0x8
    PDDPAdminRequestDetails *_adminRequest;	// 16 = 0x10
    PDDPAdminRequestAccount *_adminRequestAccount;	// 24 = 0x18
    PDDPClass *_classInfo;	// 32 = 0x20
    PDDPClassMember *_classMember;	// 40 = 0x28
    PDDPLocation *_location;	// 48 = 0x30
    PDDPOrganization *_organization;	// 56 = 0x38
    int _payloadSize;	// 64 = 0x40
    PDDPPerson *_person;	// 72 = 0x48
    PDDPEERequestZone *_requestZone;	// 80 = 0x50
    MISSING_TYPE *_responseZone;	// 88 = 0x58
    PDDPRole *_role;	// 96 = 0x60
    PDDPStatus *_status;	// 104 = 0x68
    NSString *_tempObjectId;	// 112 = 0x70
    NSString *_tempParentObjectId;	// 120 = 0x78
    int _type;	// 128 = 0x80
    struct {
        unsigned int action:1;
        unsigned int payloadSize:1;
        unsigned int type:1;
    } _has;	// 132 = 0x84
}

- (void).cxx_destruct;	// IMP=0x0020000000192bba
@property(retain, nonatomic) PDDPAdminRequestAccount *adminRequestAccount; // @synthesize adminRequestAccount=_adminRequestAccount;
@property(retain, nonatomic) PDDPAdminRequestDetails *adminRequest; // @synthesize adminRequest=_adminRequest;
@property(retain, nonatomic) PDDPOrganization *organization; // @synthesize organization=_organization;
@property(retain, nonatomic) NSString *tempParentObjectId; // @synthesize tempParentObjectId=_tempParentObjectId;
@property(retain, nonatomic) NSString *tempObjectId; // @synthesize tempObjectId=_tempObjectId;
@property(retain, nonatomic) PDDPRole *role; // @synthesize role=_role;
@property(retain, nonatomic) PDDPClassMember *classMember; // @synthesize classMember=_classMember;
@property(retain, nonatomic) PDDPClass *classInfo; // @synthesize classInfo=_classInfo;
@property(retain, nonatomic) PDDPPerson *person; // @synthesize person=_person;
@property(retain, nonatomic) PDDPLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) PDDPEEResponseZone *responseZone; // @synthesize responseZone=_responseZone;
@property(retain, nonatomic) PDDPEERequestZone *requestZone; // @synthesize requestZone=_requestZone;
@property(retain, nonatomic) PDDPStatus *status; // @synthesize status=_status;
@property(nonatomic) int payloadSize; // @synthesize payloadSize=_payloadSize;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000192690
- (unsigned long long)hash;	// IMP=0x00100000001924ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000019211c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000191e59
- (void)copyTo:(id)arg1;	// IMP=0x0010000000191c3e
- (void)writeTo:(id)arg1;	// IMP=0x0010000000191a35
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000191a28
- (id)dictionaryRepresentation;	// IMP=0x0010000000190df8
- (id)description;	// IMP=0x0010000000190d49
@property(readonly, nonatomic) _Bool hasAdminRequestAccount;
@property(readonly, nonatomic) _Bool hasAdminRequest;
@property(readonly, nonatomic) _Bool hasOrganization;
@property(readonly, nonatomic) _Bool hasTempParentObjectId;
@property(readonly, nonatomic) _Bool hasTempObjectId;
@property(readonly, nonatomic) _Bool hasRole;
@property(readonly, nonatomic) _Bool hasClassMember;
@property(readonly, nonatomic) _Bool hasClassInfo;
@property(readonly, nonatomic) _Bool hasPerson;
@property(readonly, nonatomic) _Bool hasLocation;
@property(readonly, nonatomic) _Bool hasResponseZone;
@property(readonly, nonatomic) _Bool hasRequestZone;
@property(readonly, nonatomic) _Bool hasStatus;
- (int)StringAsType:(id)arg1;	// IMP=0x0010000000190a7c
- (id)typeAsString:(int)arg1;	// IMP=0x0010000000190a33
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (int)StringAsAction:(id)arg1;	// IMP=0x001000000019091a
- (id)actionAsString:(int)arg1;	// IMP=0x00100000001908d1
@property(nonatomic) _Bool hasAction;
@property(nonatomic) int action; // @synthesize action=_action;
@property(nonatomic) _Bool hasPayloadSize;

@end
