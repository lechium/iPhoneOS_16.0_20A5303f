//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface ChannelActivityUpdate : PBCodable
{
    unsigned long long _currentVersion;	// 8 = 0x8
    unsigned long long _prevVersion;	// 16 = 0x10
    NSData *_encryptedUpdatePayload;	// 24 = 0x18
    struct {
        unsigned int currentVersion:1;
        unsigned int prevVersion:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000048660
@property(retain, nonatomic) NSData *encryptedUpdatePayload; // @synthesize encryptedUpdatePayload=_encryptedUpdatePayload;
@property(nonatomic) unsigned long long prevVersion; // @synthesize prevVersion=_prevVersion;
@property(nonatomic) unsigned long long currentVersion; // @synthesize currentVersion=_currentVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000048597
- (unsigned long long)hash;	// IMP=0x0000000000048530
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000048449
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004839a
- (void)copyTo:(id)arg1;	// IMP=0x0000000000048318
- (void)writeTo:(id)arg1;	// IMP=0x0000000000048288
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004827b
- (id)dictionaryRepresentation;	// IMP=0x0000000000047eab
- (id)description;	// IMP=0x0000000000047dfc
@property(readonly, nonatomic) _Bool hasEncryptedUpdatePayload;
@property(nonatomic) _Bool hasPrevVersion;
@property(nonatomic) _Bool hasCurrentVersion;

@end

