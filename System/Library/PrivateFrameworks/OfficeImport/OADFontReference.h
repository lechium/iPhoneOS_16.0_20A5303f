//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADFontReference : NSObject
{
    int mIndex;	// 8 = 0x8
    OADColor *mColor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000316120
- (id)description;	// IMP=0x00000000003160e2
- (void)applyToParagraphProperties:(id)arg1;	// IMP=0x0000000000198fc5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000316031
- (unsigned long long)hash;	// IMP=0x000000000031600c
- (void)setColor:(id)arg1;	// IMP=0x0000000000195226
- (id)color;	// IMP=0x0000000000315ffe
- (void)setIndex:(int)arg1;	// IMP=0x000000000019521d
- (int)index;	// IMP=0x0000000000315ff5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001eb7f6

@end

