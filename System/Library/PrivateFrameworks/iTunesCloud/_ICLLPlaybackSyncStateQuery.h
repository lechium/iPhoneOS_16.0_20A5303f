//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _ICLLPlaybackSyncStateQuery : PBCodable
{
    NSString *_currentItemId;	// 8 = 0x8
    NSMutableArray *_participantStates;	// 16 = 0x10
    NSMutableArray *_transportControlStates;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000088c46
- (unsigned long long)hash;	// IMP=0x0000000000088bd9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000088ae1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000887f1
- (void)writeTo:(id)arg1;	// IMP=0x00000000000885bb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000885ae
- (id)dictionaryRepresentation;	// IMP=0x0000000000088504
- (id)description;	// IMP=0x0000000000088455

@end

