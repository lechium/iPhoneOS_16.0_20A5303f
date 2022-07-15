//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface PDDPUploadEventsResponse : PBCodable
{
    NSMutableArray *_eventItems;	// 8 = 0x8
}

+ (Class)eventItemsType;	// IMP=0x0020000000048a20
- (void).cxx_destruct;	// IMP=0x00200000000494ab
@property(retain, nonatomic) NSMutableArray *eventItems; // @synthesize eventItems=_eventItems;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000049351
- (unsigned long long)hash;	// IMP=0x0010000000049334
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004929a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000490d7
- (void)copyTo:(id)arg1;	// IMP=0x0010000000049010
- (void)writeTo:(id)arg1;	// IMP=0x0010000000048ee0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000048d13
- (id)dictionaryRepresentation;	// IMP=0x0010000000048ae0
- (id)description;	// IMP=0x0010000000048a31
- (id)eventItemsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000048a03
- (unsigned long long)eventItemsCount;	// IMP=0x00100000000489e6
- (void)addEventItems:(id)arg1;	// IMP=0x001000000004897c
- (void)clearEventItems;	// IMP=0x001000000004895f

@end
