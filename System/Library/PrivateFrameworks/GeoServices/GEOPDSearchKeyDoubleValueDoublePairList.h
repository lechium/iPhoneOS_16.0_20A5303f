//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyDoubleValueDoublePairList : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000401881
- (unsigned long long)hash;	// IMP=0x0000000000401864
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004017ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000040162d
- (void)writeTo:(id)arg1;	// IMP=0x00000000004014fd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004012ee
- (id)jsonRepresentation;	// IMP=0x00000000004012df
- (id)dictionaryRepresentation;	// IMP=0x0000000000401070
- (id)description;	// IMP=0x0000000000400fc1

@end

