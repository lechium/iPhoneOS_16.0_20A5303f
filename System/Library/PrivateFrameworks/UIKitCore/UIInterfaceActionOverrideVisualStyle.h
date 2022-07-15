//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIInterfaceActionHighlightAttributes, UIInterfaceActionSeparatorAttributes;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionOverrideVisualStyle
{
    _Bool _alignActionSeparatorLeadingEdgeWithContent;	// 8 = 0x8
    double _customSelectionHighlightContinuousCornerRadius;	// 16 = 0x10
    UIInterfaceActionSeparatorAttributes *_customSeparatorAttributes;	// 24 = 0x18
    UIInterfaceActionHighlightAttributes *_customActionHighlightAttributes;	// 32 = 0x20
    CDUnknownBlockType _customTitleLabelFontProviderForViewState;	// 40 = 0x28
}

+ (id)styleOverride;	// IMP=0x006000000002fd65
- (void).cxx_destruct;	// IMP=0x0000000000030313
@property(copy, nonatomic) CDUnknownBlockType customTitleLabelFontProviderForViewState; // @synthesize customTitleLabelFontProviderForViewState=_customTitleLabelFontProviderForViewState;
@property(retain, nonatomic) UIInterfaceActionHighlightAttributes *customActionHighlightAttributes; // @synthesize customActionHighlightAttributes=_customActionHighlightAttributes;
@property(retain, nonatomic) UIInterfaceActionSeparatorAttributes *customSeparatorAttributes; // @synthesize customSeparatorAttributes=_customSeparatorAttributes;
@property(nonatomic) _Bool alignActionSeparatorLeadingEdgeWithContent; // @synthesize alignActionSeparatorLeadingEdgeWithContent=_alignActionSeparatorLeadingEdgeWithContent;
@property double customSelectionHighlightContinuousCornerRadius; // @synthesize customSelectionHighlightContinuousCornerRadius=_customSelectionHighlightContinuousCornerRadius;
- (id)actionTitleLabelFontForViewState:(id)arg1;	// IMP=0x00000000000301d7
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x0000000000030106
- (id)newActionBackgroundViewForViewState:(id)arg1;	// IMP=0x000000000002ffaf
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002fe60
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002fdae

@end
