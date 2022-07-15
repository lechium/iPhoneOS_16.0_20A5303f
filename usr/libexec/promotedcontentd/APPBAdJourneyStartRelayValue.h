//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface APPBAdJourneyStartRelayValue : PBCodable
{
    double _valueDouble;	// 8 = 0x8
    long long _valueInt;	// 16 = 0x10
    NSString *_key;	// 24 = 0x18
    int _value;	// 32 = 0x20
    NSString *_valueString;	// 40 = 0x28
    _Bool _valueBool;	// 48 = 0x30
    struct {
        unsigned int valueDouble:1;
        unsigned int valueInt:1;
        unsigned int value:1;
        unsigned int valueBool:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00200000000350e6
@property(retain, nonatomic) NSString *valueString; // @synthesize valueString=_valueString;
@property(nonatomic) double valueDouble; // @synthesize valueDouble=_valueDouble;
@property(nonatomic) long long valueInt; // @synthesize valueInt=_valueInt;
@property(nonatomic) _Bool valueBool; // @synthesize valueBool=_valueBool;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000034f9a
- (unsigned long long)hash;	// IMP=0x0010000000034dd6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000034c4f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000034b36
- (void)copyTo:(id)arg1;	// IMP=0x0010000000034a53
- (void)writeTo:(id)arg1;	// IMP=0x0010000000034985
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000034978
- (id)dictionaryRepresentation;	// IMP=0x00100000000342f6
- (id)description;	// IMP=0x0010000000034247
- (void)clearOneofValuesForValue;	// IMP=0x00100000000341e2
- (int)StringAsValue:(id)arg1;	// IMP=0x0010000000034117
- (id)valueAsString:(int)arg1;	// IMP=0x00100000000340ce
@property(nonatomic) _Bool hasValue;
@property(nonatomic) int value; // @synthesize value=_value;
@property(readonly, nonatomic) _Bool hasValueString;
@property(nonatomic) _Bool hasValueDouble;
@property(nonatomic) _Bool hasValueInt;
@property(nonatomic) _Bool hasValueBool;
@property(readonly, nonatomic) _Bool hasKey;

@end
