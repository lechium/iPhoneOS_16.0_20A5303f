//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDParagraph, WDParagraphProperties, WMParagraphStyle;

__attribute__((visibility("hidden")))
@interface WMParagraphStyleMapper
{
    WDParagraphProperties *wdParaProperties;	// 40 = 0x28
    WDParagraph *wdParagraph;	// 48 = 0x30
    WMParagraphStyle *mStyle;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000045ef3f
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000000f1345
- (void)mapParagraphProperties;	// IMP=0x000000000045ef14
- (void)mapParagraphStyle;	// IMP=0x000000000045eef7
- (void)mapListStyleAt:(id)arg1 state:(id)arg2;	// IMP=0x00000000000eee2e
- (void)mapListStyleFromParagraphStyleWithState:(id)arg1;	// IMP=0x000000000045ee17
- (_Bool)getListLevel:(char *)arg1 andListIndex:(int *)arg2 fromStyleOnly:(_Bool)arg3;	// IMP=0x000000000045ed24
- (void)getListLevel:(char *)arg1 andListIndex:(int *)arg2 foundListLevel:(_Bool *)arg3 foundListIndex:(_Bool *)arg4 fromStyle:(id)arg5;	// IMP=0x000000000045ebfc
- (void)getListLevel:(char *)arg1 andListIndex:(int *)arg2 foundListLevel:(_Bool *)arg3 foundListIndex:(_Bool *)arg4 fromParagraphProperties:(id)arg5;	// IMP=0x000000000045eb48
- (void)mapBulletFromListId:(int)arg1 listLevel:(unsigned char)arg2 at:(id)arg3 document:(id)arg4 state:(id)arg5;	// IMP=0x000000000045e9bb
- (void)mapStyleFromListId:(int)arg1 listLevel:(unsigned char)arg2 document:(id)arg3 state:(id)arg4;	// IMP=0x000000000045e853
- (void)updateOutlineStateWithListId:(int)arg1 listLevel:(unsigned char)arg2 document:(id)arg3 state:(id)arg4;	// IMP=0x000000000045e6d8
- (void)destyleEmptyParagraph;	// IMP=0x00000000000f11f3
- (_Bool)isListItem;	// IMP=0x00000000000eed8f
- (id)initWithWDParagraph:(id)arg1 parent:(id)arg2 isInTextFrame:(_Bool)arg3;	// IMP=0x00000000000edb56
- (void)mapBulletAt:(id)arg1 forIndex:(int)arg2 inLevelDescription:(id)arg3 listState:(id)arg4;	// IMP=0x000000000045f3fc
- (id)bulletLabelForIndex:(int)arg1 inLevelDescription:(id)arg2 listState:(id)arg3;	// IMP=0x000000000045efb6
- (id)labelStringWithGap:(id)arg1;	// IMP=0x000000000045ef81
- (_Bool)checkListId:(long long)arg1 level:(unsigned char)arg2;	// IMP=0x00000000000f3a13

@end

