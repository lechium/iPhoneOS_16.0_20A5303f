//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, OADBulletColor, OADBulletFont, OADBulletProperties, OADBulletSize, OADTextSpacing;

__attribute__((visibility("hidden")))
@interface OADParagraphProperties
{
    int mLevel;	// 160 = 0xa0
    OADBulletSize *mBulletSize;	// 168 = 0xa8
    OADBulletColor *mBulletColor;	// 176 = 0xb0
    OADBulletFont *mBulletFont;	// 184 = 0xb8
    OADBulletProperties *mBulletProperties;	// 192 = 0xc0
    OADTextSpacing *mLineSpacing;	// 200 = 0xc8
    OADTextSpacing *mBeforeSpacing;	// 208 = 0xd0
    OADTextSpacing *mAfterSpacing;	// 216 = 0xd8
    NSArray *mTabStops;	// 224 = 0xe0
    float mLeftMargin;	// 232 = 0xe8
    float mRightMargin;	// 236 = 0xec
    float mIndent;	// 240 = 0xf0
    float mDefaultTab;	// 244 = 0xf4
    int mBulletCharSet;	// 248 = 0xf8
    unsigned char mAlign;	// 252 = 0xfc
    unsigned char mWrap;	// 253 = 0xfd
    unsigned char mFontAlign;	// 254 = 0xfe
    unsigned int mIsLatinLineBreak:1;	// 255 = 0xff
    unsigned int mIsHangingPunctuation:1;	// 255 = 0xff
    unsigned int mHasLevel:1;	// 255 = 0xff
    unsigned int mHasLeftMargin:1;	// 255 = 0xff
    unsigned int mHasRightMargin:1;	// 255 = 0xff
    unsigned int mHasIndent:1;	// 255 = 0xff
    unsigned int mHasDefaultTab:1;	// 255 = 0xff
    unsigned int mHasBulletCharSet:1;	// 255 = 0xff
    unsigned int mHasAlign:1;	// 256 = 0x100
    unsigned int mHasWrap:1;	// 256 = 0x100
    unsigned int mHasFontAlign:1;	// 256 = 0x100
    unsigned int mHasIsLatinLineBreak:1;	// 256 = 0x100
    unsigned int mHasIsHangingPunctuation:1;	// 256 = 0x100
}

+ (id)defaultProperties;	// IMP=0x000000000001e4fe
- (void).cxx_destruct;	// IMP=0x000000000031cbe3
- (id)description;	// IMP=0x000000000031cba5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000020945b
- (unsigned long long)hash;	// IMP=0x000000000020a105
- (void)removeUnnecessaryOverrides;	// IMP=0x00000000000302eb
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;	// IMP=0x000000000031bacf
- (_Bool)isAnythingOverridden;	// IMP=0x000000000031b8e1
- (void)overrideWithProperties:(id)arg1;	// IMP=0x0000000000023264
- (void)setBulletCharSet:(int)arg1;	// IMP=0x000000000000b18c
- (int)bulletCharSet;	// IMP=0x0000000000152daa
- (_Bool)hasBulletCharSet;	// IMP=0x0000000000023e29
- (void)setBulletProperties:(id)arg1;	// IMP=0x000000000000b1e3
- (id)bulletProperties;	// IMP=0x0000000000023ddf
- (_Bool)hasBulletProperties;	// IMP=0x0000000000023db8
- (void)setBulletFont:(id)arg1;	// IMP=0x000000000000b1cf
- (id)bulletFont;	// IMP=0x0000000000023d6e
- (_Bool)hasBulletFont;	// IMP=0x0000000000023d47
- (void)setBulletColor:(id)arg1;	// IMP=0x000000000000b1bb
- (id)bulletColor;	// IMP=0x0000000000023cfd
- (_Bool)hasBulletColor;	// IMP=0x0000000000023cd6
- (void)setBulletSize:(id)arg1;	// IMP=0x000000000000b1a7
- (id)bulletSize;	// IMP=0x0000000000023c8c
- (_Bool)hasBulletSize;	// IMP=0x0000000000023c65
- (void)setIsHangingPunctuation:(_Bool)arg1;	// IMP=0x000000000000b167
- (_Bool)isHangingPunctuation;	// IMP=0x000000000031b869
- (_Bool)hasIsHangingPunctuation;	// IMP=0x0000000000023c3f
- (void)setIsLatinLineBreak:(_Bool)arg1;	// IMP=0x000000000000b144
- (_Bool)isLatinLineBreak;	// IMP=0x000000000031b828
- (_Bool)hasIsLatinLineBreak;	// IMP=0x0000000000023c19
- (void)setFontAlign:(unsigned char)arg1;	// IMP=0x000000000000b129
- (unsigned char)fontAlign;	// IMP=0x000000000031b7e9
- (_Bool)hasFontAlign;	// IMP=0x0000000000023bf3
- (void)setWrap:(unsigned char)arg1;	// IMP=0x000000000000b10e
- (unsigned char)wrap;	// IMP=0x000000000031b7aa
- (_Bool)hasWrap;	// IMP=0x0000000000023bcd
- (void)setDefaultTab:(float)arg1;	// IMP=0x000000000000b0f1
- (float)defaultTab;	// IMP=0x0000000000023b84
- (_Bool)hasDefaultTab;	// IMP=0x0000000000023b5e
- (void)setAlign:(unsigned char)arg1;	// IMP=0x000000000000b0d6
- (unsigned char)align;	// IMP=0x0000000000023b1f
- (_Bool)hasAlign;	// IMP=0x0000000000023af9
- (void)setIndent:(float)arg1;	// IMP=0x000000000000b0b9
- (float)indent;	// IMP=0x0000000000023ab0
- (_Bool)hasIndent;	// IMP=0x0000000000023a8a
- (void)setLevel:(int)arg1;	// IMP=0x000000000000b09e
- (int)level;	// IMP=0x0000000000023a4c
- (_Bool)hasLevel;	// IMP=0x0000000000023a26
- (void)setRightMargin:(float)arg1;	// IMP=0x000000000000b081
- (float)rightMargin;	// IMP=0x0000000000103bee
- (_Bool)hasRightMargin;	// IMP=0x00000000000239bd
- (double)nonOveridenLeftMargin;	// IMP=0x00000000000ac2be
- (void)setLeftMargin:(float)arg1;	// IMP=0x000000000000b064
- (float)leftMargin;	// IMP=0x00000000000231de
- (_Bool)hasLeftMargin;	// IMP=0x000000000002323e
- (void)setTabStops:(id)arg1;	// IMP=0x000000000031b796
- (id)tabStops;	// IMP=0x0000000000152eb1
- (_Bool)hasTabStops;	// IMP=0x0000000000023996
- (void)setAfterSpacing:(id)arg1;	// IMP=0x000000000000b050
- (id)afterSpacing;	// IMP=0x000000000002394c
- (_Bool)hasAfterSpacing;	// IMP=0x0000000000023925
- (void)setBeforeSpacing:(id)arg1;	// IMP=0x000000000000b03c
- (id)beforeSpacing;	// IMP=0x00000000000238db
- (_Bool)hasBeforeSpacing;	// IMP=0x00000000000238b4
- (void)setLineSpacing:(id)arg1;	// IMP=0x000000000000afe6
- (id)lineSpacing;	// IMP=0x000000000002386a
- (_Bool)hasLineSpacing;	// IMP=0x0000000000023843
- (id)initWithDefaults;	// IMP=0x000000000000a1bb
- (id)init;	// IMP=0x000000000001e4cf

@end
