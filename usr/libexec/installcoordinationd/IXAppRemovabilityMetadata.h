//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IXAppRemovabilityMetadata : NSObject
{
    unsigned long long _removability;	// 8 = 0x8
    unsigned long long _client;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned long long client; // @synthesize client=_client;
@property(readonly, nonatomic) unsigned long long removability; // @synthesize removability=_removability;
- (unsigned long long)hash;	// IMP=0x001000000002f137
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002f05f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002eff5
- (id)description;	// IMP=0x001000000002ef52
- (id)dictionaryRepresentation;	// IMP=0x001000000002ee3d
- (id)initWithMetadataDictionary:(id)arg1;	// IMP=0x001000000002eca0
- (id)initWithRemovability:(unsigned long long)arg1 client:(unsigned long long)arg2;	// IMP=0x001000000002ec58

@end

