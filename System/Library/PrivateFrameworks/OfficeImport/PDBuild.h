//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface PDBuild : NSObject
{
    _Bool mIsAnimateBackground;	// 8 = 0x8
    OADDrawable *mDrawable;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004430f6
- (id)description;	// IMP=0x00000000004430b8
- (unsigned long long)hash;	// IMP=0x0000000000443069
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000442f96
- (void)setDrawable:(id)arg1;	// IMP=0x0000000000442f85
- (id)drawable;	// IMP=0x0000000000442f77
- (void)setIsAnimateBackground:(_Bool)arg1;	// IMP=0x00000000001e0b33
- (_Bool)isAnimateBackground;	// IMP=0x0000000000442f6e
- (id)init;	// IMP=0x00000000001e0ae9

@end
