//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface SYLogEngineState : PBCodable
{
    int _type;	// 8 = 0x8
    _Bool _buffersSessions;	// 12 = 0xc
    _Bool _inSession;	// 13 = 0xd
    _Bool _suspended;	// 14 = 0xe
    struct {
        unsigned int buffersSessions:1;
        unsigned int inSession:1;
        unsigned int suspended:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool buffersSessions; // @synthesize buffersSessions=_buffersSessions;
@property(nonatomic) _Bool inSession; // @synthesize inSession=_inSession;
@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001e3ea
- (unsigned long long)hash;	// IMP=0x000000000001e374
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001e266
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001e1c3
- (void)copyTo:(id)arg1;	// IMP=0x000000000001e143
- (void)writeTo:(id)arg1;	// IMP=0x000000000001e099
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001e08c
- (id)dictionaryRepresentation;	// IMP=0x000000000001db04
- (id)description;	// IMP=0x000000000001da55
@property(nonatomic) _Bool hasBuffersSessions;
@property(nonatomic) _Bool hasInSession;
@property(nonatomic) _Bool hasSuspended;
- (int)StringAsType:(id)arg1;	// IMP=0x000000000001d8df
- (id)typeAsString:(int)arg1;	// IMP=0x000000000001d894

@end

