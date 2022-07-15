//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDResources;

__attribute__((visibility("hidden")))
@interface CHDLegendEntry : NSObject
{
    unsigned long long mFontIndex;	// 8 = 0x8
    unsigned int mEntryIndex;	// 16 = 0x10
    EDResources *mResources;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003937c6
- (id)description;	// IMP=0x0000000000393788
- (void)setEntryIndex:(unsigned int)arg1;	// IMP=0x000000000021ccee
- (unsigned int)entryIndex;	// IMP=0x000000000039377f
- (void)setFont:(id)arg1;	// IMP=0x0000000000249504
- (id)font;	// IMP=0x00000000003936e6
- (id)initWithResources:(id)arg1;	// IMP=0x000000000021cc5d
- (void)setFontIndex:(unsigned long long)arg1;	// IMP=0x000000000021cce4
- (unsigned long long)fontIndex;	// IMP=0x00000000003937d4

@end
