//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSCallToAction : PBCodable
{
    NSString *_body;	// 8 = 0x8
    NSString *_language;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    _Bool _isDefault;	// 40 = 0x28
    CDStruct_d3bb80d3 _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000000000350f
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000033a8
- (unsigned long long)hash;	// IMP=0x00000000000032fa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003196
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003088
- (void)copyTo:(id)arg1;	// IMP=0x0000000000002fc5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000002f09
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000002efc
- (id)dictionaryRepresentation;	// IMP=0x0000000000002b48
- (id)description;	// IMP=0x0000000000002a99
@property(readonly, nonatomic) _Bool hasBody;
@property(nonatomic) _Bool hasIsDefault;
@property(readonly, nonatomic) _Bool hasSubtitle;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasLanguage;

@end

