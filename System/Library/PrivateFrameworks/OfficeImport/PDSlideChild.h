//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADColorMap, OADThemeOverrides;

__attribute__((visibility("hidden")))
@interface PDSlideChild
{
    _Bool mShowMasterPlaceholderAnimations;	// 73 = 0x49
    _Bool mShowMasterShapes;	// 74 = 0x4a
    OADThemeOverrides *mThemeOverrides;	// 80 = 0x50
    OADColorMap *mColorMapOverride;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000449293
- (id)description;	// IMP=0x0000000000449255
- (id)drawingTheme;	// IMP=0x00000000004491b7
- (void)doneWithContent;	// IMP=0x0000000000449150
- (id)defaultTextListStyle;	// IMP=0x00000000004490ec
- (id)styleMatrix;	// IMP=0x00000000001ebea2
- (id)colorMap;	// IMP=0x0000000000038ff5
- (id)fontScheme;	// IMP=0x00000000001ce9c9
- (id)colorScheme;	// IMP=0x0000000000038f29
- (void)setColorMapOverride:(id)arg1;	// IMP=0x0000000000166ce9
- (id)colorMapOverride;	// IMP=0x000000000003907a
- (id)themeOverrides;	// IMP=0x0000000000038fe0
- (void)setShowMasterShapes:(_Bool)arg1;	// IMP=0x000000000003cbdd
- (_Bool)showMasterShapes;	// IMP=0x00000000000a285a
- (void)setShowMasterPlaceholderAnimations:(_Bool)arg1;	// IMP=0x00000000001ce5a4
- (_Bool)showMasterPlaceholderAnimations;	// IMP=0x00000000004490dc
- (id)init;	// IMP=0x0000000000038391

@end
