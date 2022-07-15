//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVRoutePickerView.h"

@class AVButton, AVLayoutItemAttributes, NSString;

__attribute__((visibility("hidden")))
@interface AVPlaybackControlsRoutePickerView : AVRoutePickerView
{
    AVButton *_customButton;	// 8 = 0x8
    _Bool _removed;	// 16 = 0x10
    _Bool _hasAlternateAppearance;	// 17 = 0x11
    _Bool _hasFullScreenAppearance;	// 18 = 0x12
    AVLayoutItemAttributes *_layoutAttributes;	// 24 = 0x18
    NSString *_currentMicaPackageName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000409cc
@property(retain, nonatomic) NSString *currentMicaPackageName; // @synthesize currentMicaPackageName=_currentMicaPackageName;
@property(nonatomic) _Bool hasFullScreenAppearance; // @synthesize hasFullScreenAppearance=_hasFullScreenAppearance;
@property(nonatomic) _Bool hasAlternateAppearance; // @synthesize hasAlternateAppearance=_hasAlternateAppearance;
@property(nonatomic, getter=isRemoved) _Bool removed; // @synthesize removed=_removed;
@property(readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
- (void)_updateLayoutItem;	// IMP=0x0000000000040895
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000407fc
- (void)updateButtonAppearance;	// IMP=0x00000000000403d3
- (void)_updateCustomButtonMicaPackage;	// IMP=0x0000000000040220
- (void)setPrioritizesVideoDevices:(_Bool)arg1;	// IMP=0x00000000000400b0
@property(readonly, nonatomic) AVButton *customButton;
- (void)layoutAttributesDidChange;	// IMP=0x000000000003fe44
@property(nonatomic) struct CGSize extrinsicContentSize;
@property(nonatomic, getter=isCollapsed) _Bool collapsed;
@property(nonatomic, getter=isIncluded) _Bool included;
@property(readonly, nonatomic, getter=isCollapsedOrExcluded) _Bool collapsedOrExcluded;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000003f90c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
