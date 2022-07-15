//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PDMapsBrandAndMerchantUpdaterConfiguration : NSObject
{
    int _resultProviderID;	// 8 = 0x8
    unsigned long long _muid;	// 16 = 0x10
    struct CLLocationCoordinate2D _coordinate;	// 24 = 0x18
}

@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) int resultProviderID; // @synthesize resultProviderID=_resultProviderID;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
- (id)description;	// IMP=0x00100000000076d9
- (unsigned long long)hash;	// IMP=0x00100000000076be
- (_Bool)isEqualToConfiguration:(id)arg1;	// IMP=0x00100000000076a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000763d
- (id)initWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(struct CLLocationCoordinate2D)arg3;	// IMP=0x00100000000075d7

@end
