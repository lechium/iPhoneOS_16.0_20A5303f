//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIIndexBarEntry.h"

__attribute__((visibility("hidden")))
@interface SKUIPlaceholderIndexBarEntry : SKUIIndexBarEntry
{
    struct CGSize _placeholderSize;	// 88 = 0x58
}

@property(readonly, nonatomic) struct CGSize placeholderSize; // @synthesize placeholderSize=_placeholderSize;
- (struct CGSize)_calculatedContentSize;	// IMP=0x00000000000a05a9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a04f7
- (unsigned long long)hash;	// IMP=0x00000000000a0460
- (id)description;	// IMP=0x00000000000a03c1
- (id)initWithPlaceholderSize:(struct CGSize)arg1;	// IMP=0x00000000000a034a

@end

