//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UISegmentedControlTVStyleProvider
{
}

+ (id)_tvDefaultTextColorDisabledUserInterfaceStyleDark;	// IMP=0x0080000000d0982c
+ (id)_tvDefaultTextColorNormalUserInterfaceStyleDark;	// IMP=0x0080000000d09803
+ (id)_tvDefaultTextColorDisabledUserInterfaceStyleLight;	// IMP=0x0080000000d097df
+ (id)_tvDefaultTextColorNormalUserInterfaceStyleLight;	// IMP=0x0080000000d097bb
+ (id)_tvDefaultTextColorDisabledSelected;	// IMP=0x0080000000d097a2
+ (id)_tvDefaultTextColorFocused;	// IMP=0x0080000000d09789
+ (id)_tvDefaultTextColorSelected;	// IMP=0x0080000000d09770
- (id)fontColorForSegment:(id)arg1 enabled:(_Bool)arg2 selected:(_Bool)arg3 state:(unsigned long long)arg4;	// IMP=0x0000000000d095f6
- (id)fontForControlSize:(int)arg1 selected:(_Bool)arg2;	// IMP=0x0000000000d095d3
- (double)defaultHeightForControlSize:(int)arg1;	// IMP=0x0000000000d09590
- (double)cornerRadiusForControlSize:(int)arg1;	// IMP=0x0000000000d09582
- (double)dividerWidthForControlSize:(int)arg1;	// IMP=0x0000000000d09579
- (double)selectionIndicatorOverflowForControlSize:(int)arg1;	// IMP=0x0000000000d09570
- (_Bool)useTVStyleFocusSelection;	// IMP=0x0000000000d09568
- (_Bool)useGeneratedImages;	// IMP=0x0000000000d09560

@end
