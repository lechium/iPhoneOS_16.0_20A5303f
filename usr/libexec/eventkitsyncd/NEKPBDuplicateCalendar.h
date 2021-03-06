//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NEKPBDuplicateCalendar : PBCodable
{
    NSString *_externalId;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000005507e
@property(retain, nonatomic) NSString *externalId; // @synthesize externalId=_externalId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000054fd1
- (unsigned long long)hash;	// IMP=0x0010000000054f84
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000054ebc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000054e1e
- (void)copyTo:(id)arg1;	// IMP=0x0010000000054dbb
- (void)writeTo:(id)arg1;	// IMP=0x0010000000054d5e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000054d51
- (id)dictionaryRepresentation;	// IMP=0x0010000000054b3a
- (id)description;	// IMP=0x0010000000054a8b
@property(readonly, nonatomic) _Bool hasExternalId;
@property(readonly, nonatomic) _Bool hasName;

@end

