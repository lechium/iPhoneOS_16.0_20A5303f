//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDCollection, EDResources, NSArray, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDLegend : NSObject
{
    int mLegendPosition;	// 8 = 0x8
    OADGraphicProperties *mGraphicProperties;	// 16 = 0x10
    unsigned long long mFontIndex;	// 24 = 0x18
    EDCollection *mLegendEntries;	// 32 = 0x20
    EDResources *mResources;	// 40 = 0x28
    _Bool mIsVertical;	// 48 = 0x30
    _Bool mIsOverlay;	// 49 = 0x31
    NSArray *mLabelEffects;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003936a0
- (id)description;	// IMP=0x0000000000393662
- (_Bool)isAutoSizeAndPosition;	// IMP=0x0000000000393649
- (void)setLabelEffects:(id)arg1;	// IMP=0x00000000003935fe
- (id)labelEffects;	// IMP=0x00000000003935f0
- (void)setIsOverlay:(_Bool)arg1;	// IMP=0x00000000003935e7
- (_Bool)isOverlay;	// IMP=0x00000000003935de
- (void)setIsSingleColumnLegend:(_Bool)arg1;	// IMP=0x00000000001e386e
- (_Bool)isSingleColumnLegend;	// IMP=0x00000000003935d5
- (id)legendEntries;	// IMP=0x00000000001e3c65
- (void)setFont:(id)arg1;	// IMP=0x000000000022c09f
- (id)font;	// IMP=0x00000000001e3cb7
- (void)setGraphicProperties:(id)arg1;	// IMP=0x00000000001e37fd
- (id)graphicProperties;	// IMP=0x00000000003935c7
- (void)setLegendPosition:(int)arg1;	// IMP=0x00000000001e3865
- (int)legendPosition;	// IMP=0x00000000001e3cae
- (id)initWithResources:(id)arg1;	// IMP=0x00000000001e34cb
- (void)setFontIndex:(unsigned long long)arg1;	// IMP=0x00000000001e3715
- (unsigned long long)fontIndex;	// IMP=0x00000000003936dc

@end

