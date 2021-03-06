//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPUserPrivacySettingsBatchLookupResponse : PBCodable
{
    NSMutableArray *_containerPrivacySettings;	// 8 = 0x8
}

+ (Class)containerPrivacySettingsType;	// IMP=0x001000000019a140
- (void).cxx_destruct;	// IMP=0x000000000019abd3
@property(retain, nonatomic) NSMutableArray *containerPrivacySettings; // @synthesize containerPrivacySettings=_containerPrivacySettings;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000019aa79
- (unsigned long long)hash;	// IMP=0x000000000019aa5c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019a9c2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019a7ff
- (void)copyTo:(id)arg1;	// IMP=0x000000000019a738
- (void)writeTo:(id)arg1;	// IMP=0x000000000019a608
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000019a5fb
- (id)dictionaryRepresentation;	// IMP=0x000000000019a200
- (id)description;	// IMP=0x000000000019a151
- (id)containerPrivacySettingsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000019a123
- (unsigned long long)containerPrivacySettingsCount;	// IMP=0x000000000019a106
- (void)addContainerPrivacySettings:(id)arg1;	// IMP=0x000000000019a09c
- (void)clearContainerPrivacySettings;	// IMP=0x000000000019a07f

@end

