//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface PDDPAdminRequestRequestor : PBCodable
{
    NSString *_email;	// 8 = 0x8
    NSString *_note;	// 16 = 0x10
    NSMutableArray *_serverRequestHeaders;	// 24 = 0x18
    int _state;	// 32 = 0x20
    NSString *_verificationCode;	// 40 = 0x28
    struct {
        unsigned int state:1;
    } _has;	// 48 = 0x30
}

+ (Class)serverRequestHeadersType;	// IMP=0x00200000000b8748
- (void).cxx_destruct;	// IMP=0x00200000000b981e
@property(retain, nonatomic) NSMutableArray *serverRequestHeaders; // @synthesize serverRequestHeaders=_serverRequestHeaders;
@property(retain, nonatomic) NSString *note; // @synthesize note=_note;
@property(retain, nonatomic) NSString *verificationCode; // @synthesize verificationCode=_verificationCode;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000b9599
- (unsigned long long)hash;	// IMP=0x00100000000b94e1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b937d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b9123
- (void)copyTo:(id)arg1;	// IMP=0x00100000000b8fd9
- (void)writeTo:(id)arg1;	// IMP=0x00100000000b8e2d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000b8e20
- (id)dictionaryRepresentation;	// IMP=0x00100000000b8808
- (id)description;	// IMP=0x00100000000b8759
- (id)serverRequestHeadersAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000b872b
- (unsigned long long)serverRequestHeadersCount;	// IMP=0x00100000000b870e
- (void)addServerRequestHeaders:(id)arg1;	// IMP=0x00100000000b86a4
- (void)clearServerRequestHeaders;	// IMP=0x00100000000b8687
@property(readonly, nonatomic) _Bool hasNote;
@property(readonly, nonatomic) _Bool hasVerificationCode;
@property(readonly, nonatomic) _Bool hasEmail;
- (int)StringAsState:(id)arg1;	// IMP=0x00100000000b857d
- (id)stateAsString:(int)arg1;	// IMP=0x00100000000b8534
@property(nonatomic) _Bool hasState;
@property(nonatomic) int state; // @synthesize state=_state;

@end
