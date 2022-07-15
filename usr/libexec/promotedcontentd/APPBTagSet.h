//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface APPBTagSet : PBCodable
{
    NSMutableArray *_tags;	// 8 = 0x8
}

+ (Class)tagsType;	// IMP=0x002000000009e5f0
+ (id)options;	// IMP=0x001000000009e4df
- (void).cxx_destruct;	// IMP=0x002000000009ee72
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=_tags;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000009ed18
- (unsigned long long)hash;	// IMP=0x001000000009ecfb
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000009ec61
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009ea9e
- (void)copyTo:(id)arg1;	// IMP=0x001000000009e9d7
- (void)writeTo:(id)arg1;	// IMP=0x001000000009e8a7
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000009e89a
- (id)dictionaryRepresentation;	// IMP=0x001000000009e6b0
- (id)description;	// IMP=0x001000000009e601
- (id)tagsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000009e5d3
- (unsigned long long)tagsCount;	// IMP=0x001000000009e5b6
- (void)addTags:(id)arg1;	// IMP=0x001000000009e54c
- (void)clearTags;	// IMP=0x001000000009e52f

@end
