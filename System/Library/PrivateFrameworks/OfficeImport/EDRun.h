//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDResources, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface EDRun : NSObject
{
    EDResources *mResources;	// 8 = 0x8
    unsigned long long mCharIndex;	// 16 = 0x10
    unsigned long long mFontIndex;	// 24 = 0x18
    NSArray *mEffects;	// 32 = 0x20
}

+ (id)runWithCharIndex:(unsigned long long)arg1 font:(id)arg2 effects:(id)arg3 resources:(id)arg4;	// IMP=0x00100000003ac299
+ (id)runWithCharIndex:(unsigned long long)arg1 font:(id)arg2 resources:(id)arg3;	// IMP=0x0010000000174fe7
+ (id)runWithResources:(id)arg1;	// IMP=0x00100000003ac234
+ (id)runWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 effects:(id)arg3 resources:(id)arg4;	// IMP=0x00100000003ac4b1
+ (id)runWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 resources:(id)arg3;	// IMP=0x001000000013af9a
- (void).cxx_destruct;	// IMP=0x00000000003ac400
@property(readonly, copy) NSString *description;
- (id)effects;	// IMP=0x00000000003ac3b4
- (id)font;	// IMP=0x000000000013f468
- (void)overrideFont:(id)arg1;	// IMP=0x00000000003ac3a1
- (void)setCharIndex:(unsigned long long)arg1;	// IMP=0x00000000003ac397
- (void)adjustIndex:(unsigned long long)arg1;	// IMP=0x00000000003ac38d
- (unsigned long long)charIndex;	// IMP=0x000000000013f45e
- (long long)key;	// IMP=0x000000000013b0d3
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f2300
- (_Bool)isEqualToRun:(id)arg1;	// IMP=0x00000000001f2392
- (id)initWithCharIndex:(unsigned long long)arg1 font:(id)arg2 effects:(id)arg3 resources:(id)arg4;	// IMP=0x00000000003ac1a9
- (id)initWithCharIndex:(unsigned long long)arg1 font:(id)arg2 resources:(id)arg3;	// IMP=0x000000000017508a
- (id)initWithResources:(id)arg1;	// IMP=0x000000000013b042
- (void)setFontIndex:(unsigned long long)arg1;	// IMP=0x00000000003ac55c
- (unsigned long long)fontIndex;	// IMP=0x00000000001e370b
- (id)initWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 effects:(id)arg3 resources:(id)arg4;	// IMP=0x00000000003ac426
- (id)initWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 resources:(id)arg3;	// IMP=0x000000000013b013
- (void)setFont:(id)arg1;	// IMP=0x000000000017513d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

