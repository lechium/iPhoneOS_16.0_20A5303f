//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ACProtobufDate, ACProtobufURL, ACProtobufUUID, ACProtobufVariableValueDictionary, ACProtobufVariableValueList, NSData, NSString;

__attribute__((visibility("hidden")))
@interface ACProtobufVariableValue : PBCodable
{
    double _doubleValue;	// 8 = 0x8
    long long _integerValue;	// 16 = 0x10
    unsigned long long _unsignedIntegerValue;	// 24 = 0x18
    ACProtobufVariableValueList *_arrayValue;	// 32 = 0x20
    NSData *_dataValue;	// 40 = 0x28
    ACProtobufDate *_dateValue;	// 48 = 0x30
    ACProtobufVariableValueDictionary *_dictionaryValue;	// 56 = 0x38
    ACProtobufVariableValueList *_setValue;	// 64 = 0x40
    NSString *_stringValue;	// 72 = 0x48
    ACProtobufURL *_urlValue;	// 80 = 0x50
    ACProtobufUUID *_uuidValue;	// 88 = 0x58
    struct {
        unsigned int doubleValue:1;
        unsigned int integerValue:1;
        unsigned int unsignedIntegerValue:1;
    } _has;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000056a3
@property(retain, nonatomic) ACProtobufVariableValueDictionary *dictionaryValue; // @synthesize dictionaryValue=_dictionaryValue;
@property(retain, nonatomic) ACProtobufVariableValueList *setValue; // @synthesize setValue=_setValue;
@property(retain, nonatomic) ACProtobufVariableValueList *arrayValue; // @synthesize arrayValue=_arrayValue;
@property(retain, nonatomic) ACProtobufURL *urlValue; // @synthesize urlValue=_urlValue;
@property(retain, nonatomic) ACProtobufDate *dateValue; // @synthesize dateValue=_dateValue;
@property(retain, nonatomic) ACProtobufUUID *uuidValue; // @synthesize uuidValue=_uuidValue;
@property(retain, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) unsigned long long unsignedIntegerValue; // @synthesize unsignedIntegerValue=_unsignedIntegerValue;
@property(nonatomic) long long integerValue; // @synthesize integerValue=_integerValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000532a
- (unsigned long long)hash;	// IMP=0x00000000000050eb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004e55
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000004c66
- (void)copyTo:(id)arg1;	// IMP=0x0000000000004ae5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000004969
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000495c
- (id)dictionaryRepresentation;	// IMP=0x00000000000040d8
- (id)description;	// IMP=0x0000000000004029
@property(readonly, nonatomic) _Bool hasDictionaryValue;
@property(readonly, nonatomic) _Bool hasSetValue;
@property(readonly, nonatomic) _Bool hasArrayValue;
@property(readonly, nonatomic) _Bool hasUrlValue;
@property(readonly, nonatomic) _Bool hasDateValue;
@property(readonly, nonatomic) _Bool hasUuidValue;
@property(readonly, nonatomic) _Bool hasDataValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasUnsignedIntegerValue;
@property(nonatomic) _Bool hasIntegerValue;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(retain, nonatomic) id object;
- (_Bool)_setObject:(id)arg1;	// IMP=0x000000000004f9e9
- (id)initWithObjectValue:(id)arg1;	// IMP=0x000000000004f970

@end
