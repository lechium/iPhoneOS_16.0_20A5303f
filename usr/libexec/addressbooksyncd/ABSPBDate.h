//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE;

@interface ABSPBDate : PBCodable
{
    int _calendar;	// 8 = 0x8
    int _day;	// 12 = 0xc
    int _era;	// 16 = 0x10
    int _month;	// 20 = 0x14
    int _year;	// 24 = 0x18
    _Bool _isLeapMonth;	// 28 = 0x1c
    MISSING_TYPE *_has;	// 32 = 0x20
}

@property(nonatomic) int day; // @synthesize day=_day;
@property(nonatomic) int month; // @synthesize month=_month;
@property(nonatomic) int year; // @synthesize year=_year;
@property(nonatomic) int era; // @synthesize era=_era;
@property(nonatomic) _Bool isLeapMonth; // @synthesize isLeapMonth=_isLeapMonth;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000002f86c
- (unsigned long long)hash;	// IMP=0x001000000002f7b5
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002f65a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002f579
- (void)copyTo:(id)arg1;	// IMP=0x001000000002f4bb
- (void)writeTo:(id)arg1;	// IMP=0x001000000002f3cd
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000002f3c0
- (id)dictionaryRepresentation;	// IMP=0x001000000002ec70
- (id)description;	// IMP=0x001000000002ebc1
@property(nonatomic) _Bool hasDay;
@property(nonatomic) _Bool hasMonth;
@property(nonatomic) _Bool hasYear;
@property(nonatomic) _Bool hasEra;
@property(nonatomic) _Bool hasIsLeapMonth;
- (int)StringAsCalendar:(id)arg1;	// IMP=0x001000000002e806
- (id)calendarAsString:(int)arg1;	// IMP=0x001000000002e7bb
@property(nonatomic) _Bool hasCalendar;
@property(nonatomic) int calendar; // @synthesize calendar=_calendar;

@end
