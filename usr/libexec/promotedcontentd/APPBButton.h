//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class APPBButtonStyle, NSString;

@interface APPBButton : PBCodable
{
    NSString *_accessText;	// 8 = 0x8
    APPBButtonStyle *_buttonStyle;	// 16 = 0x10
    int _predefined;	// 24 = 0x18
    NSString *_text;	// 32 = 0x20
    struct {
        unsigned int predefined:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000b9a90
@property(retain, nonatomic) APPBButtonStyle *buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(retain, nonatomic) NSString *accessText; // @synthesize accessText=_accessText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000b9964
- (unsigned long long)hash;	// IMP=0x00100000000b98cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b979d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b96b6
- (void)copyTo:(id)arg1;	// IMP=0x00100000000b9613
- (void)writeTo:(id)arg1;	// IMP=0x00100000000b9575
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000b9568
- (id)dictionaryRepresentation;	// IMP=0x00100000000b9138
- (id)description;	// IMP=0x00100000000b9089
@property(readonly, nonatomic) _Bool hasButtonStyle;
@property(readonly, nonatomic) _Bool hasAccessText;
@property(readonly, nonatomic) _Bool hasText;
- (int)StringAsPredefined:(id)arg1;	// IMP=0x00100000000b8f51
- (id)predefinedAsString:(int)arg1;	// IMP=0x00100000000b8f03
@property(nonatomic) _Bool hasPredefined;
@property(nonatomic) int predefined; // @synthesize predefined=_predefined;

@end

