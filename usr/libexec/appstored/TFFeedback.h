//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface TFFeedback : PBCodable
{
    NSString *_comment;	// 8 = 0x8
    NSString *_email;	// 16 = 0x10
    NSString *_incidentId;	// 24 = 0x18
    NSMutableArray *_screenshots;	// 32 = 0x20
}

+ (Class)screenshotsType;	// IMP=0x002000000009366a
- (void).cxx_destruct;	// IMP=0x0020000000094571
@property(retain, nonatomic) NSString *incidentId; // @synthesize incidentId=_incidentId;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSMutableArray *screenshots; // @synthesize screenshots=_screenshots;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000094322
- (unsigned long long)hash;	// IMP=0x001000000009429e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000094172
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000093f2f
- (void)copyTo:(id)arg1;	// IMP=0x0010000000093e02
- (void)writeTo:(id)arg1;	// IMP=0x0010000000093c69
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000093c5c
- (id)dictionaryRepresentation;	// IMP=0x0010000000093754
- (id)description;	// IMP=0x00100000000936a5
@property(readonly, nonatomic) _Bool hasIncidentId;
@property(readonly, nonatomic) _Bool hasComment;
- (id)screenshotsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000009364d
- (unsigned long long)screenshotsCount;	// IMP=0x0010000000093630
- (void)addScreenshots:(id)arg1;	// IMP=0x00100000000935c6
- (void)clearScreenshots;	// IMP=0x00100000000935a9
@property(readonly, nonatomic) _Bool hasEmail;

@end
