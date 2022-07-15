//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDStyle;

__attribute__((visibility("hidden")))
@interface WMParagraphStyle
{
    WDStyle *_baseStyle;	// 24 = 0x18
    _Bool _isInTextFrame;	// 32 = 0x20
}

+ (_Bool)isShadingNull:(id)arg1;	// IMP=0x006000000015d11b
- (void).cxx_destruct;	// IMP=0x000000000045e6c5
- (void)addParagraphProperties:(id)arg1;	// IMP=0x00000000000ede9e
- (id)trailingMarginPropertyNameWithOverridesFromProperties:(id)arg1;	// IMP=0x000000000045e697
- (id)leadingMarginPropertyNameWithOverridesFromProperties:(id)arg1;	// IMP=0x000000000045e669
- (_Bool)isRTLWithOverridesFromProperties:(id)arg1;	// IMP=0x000000000045e539
- (void)addParagraphStyleCharacterProperties:(id)arg1;	// IMP=0x00000000000f3db5
- (void)addParagraphPropertiesFromStyle;	// IMP=0x000000000045e51c
- (void)addParagraphPropertiesFromStyle:(id)arg1;	// IMP=0x000000000045e443
- (id)initWithWDStyle:(id)arg1 isInTextFrame:(_Bool)arg2;	// IMP=0x00000000000ede0a
- (void)mapBorders:(id)arg1;	// IMP=0x00000000000eea28

@end
