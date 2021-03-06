//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, _ICLLRadioSource;

__attribute__((visibility("hidden")))
@interface _ICLLAddQueueItemsCommand : PBCodable
{
    int _insertPositionType;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
    int _position;	// 24 = 0x18
    NSString *_queueContext;	// 32 = 0x20
    _ICLLRadioSource *_radioSource;	// 40 = 0x28
    int _revision;	// 48 = 0x30
    struct {
        unsigned int insertPositionType:1;
        unsigned int position:1;
        unsigned int revision:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000000448b1
- (unsigned long long)hash;	// IMP=0x00000000000447d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000044647
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000443dd
- (void)writeTo:(id)arg1;	// IMP=0x00000000000441f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000441eb
- (id)dictionaryRepresentation;	// IMP=0x0000000000043e2c
- (id)description;	// IMP=0x0000000000043d7d

@end

