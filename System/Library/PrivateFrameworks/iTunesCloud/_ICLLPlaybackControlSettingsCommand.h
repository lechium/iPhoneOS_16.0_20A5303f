//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class _ICLLPlaybackControlSettings;

__attribute__((visibility("hidden")))
@interface _ICLLPlaybackControlSettingsCommand : PBCodable
{
    _ICLLPlaybackControlSettings *_settings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000144be
- (unsigned long long)hash;	// IMP=0x00000000000144a1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000014407
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001438f
- (void)writeTo:(id)arg1;	// IMP=0x000000000001436b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001435e
- (id)dictionaryRepresentation;	// IMP=0x00000000000142d4
- (id)description;	// IMP=0x0000000000014225

@end

