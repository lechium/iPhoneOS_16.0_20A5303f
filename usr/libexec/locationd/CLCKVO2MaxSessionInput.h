//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface CLCKVO2MaxSessionInput : PBCodable
{
    NSMutableArray *_inputs;	// 8 = 0x8
    NSString *_sessionId;	// 16 = 0x10
}

+ (Class)inputsType;	// IMP=0x00200000004ec178
@property(retain, nonatomic) NSMutableArray *inputs; // @synthesize inputs=_inputs;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000004ecaa7
- (unsigned long long)hash;	// IMP=0x00100000004eca5a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000004ec9c6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000004ec80a
- (void)copyTo:(id)arg1;	// IMP=0x00100000004ec74a
- (void)writeTo:(id)arg1;	// IMP=0x00100000004ec624
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000004ec617
- (id)dictionaryRepresentation;	// IMP=0x00100000004ec200
- (id)description;	// IMP=0x00100000004ec189
- (id)inputsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000004ec15b
- (unsigned long long)inputsCount;	// IMP=0x00100000004ec13e
- (void)addInputs:(id)arg1;	// IMP=0x00100000004ec0f1
- (void)clearInputs;	// IMP=0x00100000004ec0d4
@property(readonly, nonatomic) _Bool hasSessionId;
- (void)dealloc;	// IMP=0x00100000004ec068

@end
