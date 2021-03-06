//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RAPAddressLayoutOptions : NSObject
{
    _Bool _showUnit;	// 8 = 0x8
    _Bool _showBuilding;	// 9 = 0x9
    _Bool _showFloor;	// 10 = 0xa
}

+ (id)allFieldsDisabledOptions;	// IMP=0x0020000000440d6a
+ (id)allFieldsEnabledOptions;	// IMP=0x0010000000440d0b
+ (id)clientOverrideOptions;	// IMP=0x0010000000440c7c
@property(nonatomic) _Bool showFloor; // @synthesize showFloor=_showFloor;
@property(nonatomic) _Bool showBuilding; // @synthesize showBuilding=_showBuilding;
@property(nonatomic) _Bool showUnit; // @synthesize showUnit=_showUnit;
@property(readonly, nonatomic) long long numberOfEnabledOptions;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000440e9f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000440dfe
- (id)init;	// IMP=0x0010000000440dc0

@end

