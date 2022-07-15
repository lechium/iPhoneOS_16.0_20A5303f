//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class AFVoiceInfo, NSString;

@interface _ADPBDeviceOutputVoiceInfo : PBCodable
{
    int _gender;	// 8 = 0x8
    NSString *_languageCode;	// 16 = 0x10
    NSString *_voiceName;	// 24 = 0x18
    struct {
        unsigned int gender:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00100000000f8ed9
@property(retain, nonatomic) NSString *voiceName; // @synthesize voiceName=_voiceName;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000f8e0c
- (unsigned long long)hash;	// IMP=0x00100000000f8d99
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000f8ca4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000f8be3
- (void)copyTo:(id)arg1;	// IMP=0x00100000000f8b60
- (void)writeTo:(id)arg1;	// IMP=0x00100000000f8adf
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000f8ad2
- (id)dictionaryRepresentation;	// IMP=0x00100000000f87ac
- (id)description;	// IMP=0x00100000000f86fd
@property(readonly, nonatomic) _Bool hasVoiceName;
- (int)StringAsGender:(id)arg1;	// IMP=0x00100000000f8639
- (id)genderAsString:(int)arg1;	// IMP=0x00100000000f85f0
@property(nonatomic) _Bool hasGender;
@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(readonly, nonatomic) _Bool hasLanguageCode;
@property(retain, nonatomic, setter=_ad_setVoiceInfo:) AFVoiceInfo *_ad_voiceInfo;

@end
