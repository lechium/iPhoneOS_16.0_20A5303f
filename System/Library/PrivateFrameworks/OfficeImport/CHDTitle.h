//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHDChart, CHDFormula, EDString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDTitle : NSObject
{
    CHDChart *mChart;	// 8 = 0x8
    _Bool mIsAutoGenerated;	// 16 = 0x10
    _Bool mPositionAutoGenerated;	// 17 = 0x11
    _Bool mSizeAutoGenerated;	// 18 = 0x12
    _Bool mIsOverlay;	// 19 = 0x13
    CHDFormula *mName;	// 24 = 0x18
    EDString *mLastCachedName;	// 32 = 0x20
    OADGraphicProperties *mGraphicProperties;	// 40 = 0x28
    double mRotation;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000394990
- (id)description;	// IMP=0x0000000000394952
- (void)setTitleRotationAngle:(double)arg1;	// IMP=0x000000000017a9a7
- (double)titleRotationAngle;	// IMP=0x0000000000394947
- (void)setIsOverlay:(_Bool)arg1;	// IMP=0x000000000039493e
- (_Bool)isOverlay;	// IMP=0x0000000000394935
- (_Bool)isTitleVisible;	// IMP=0x00000000003947c9
- (_Bool)isCachedTitleEmpty;	// IMP=0x0000000000180346
- (void)setIsSizeAutoGenerated:(_Bool)arg1;	// IMP=0x00000000002298a0
- (_Bool)isAutoSizeAndPosition;	// IMP=0x00000000003947b0
- (_Bool)isSizeAutoGenerated;	// IMP=0x00000000003947a7
- (void)setIsPositionAutoGenerated:(_Bool)arg1;	// IMP=0x000000000017a99e
- (_Bool)isPositionAutoGenerated;	// IMP=0x000000000039479e
- (void)setIsAutoGenerated:(_Bool)arg1;	// IMP=0x000000000017a4be
- (_Bool)isAutoGenerated;	// IMP=0x00000000002298a9
- (void)setGraphicProperties:(id)arg1;	// IMP=0x000000000017a953
- (id)graphicProperties;	// IMP=0x000000000018733a
- (void)setName:(id)arg1;	// IMP=0x000000000017a403
- (id)name;	// IMP=0x0000000000394790
- (void)setLastCachedName:(id)arg1;	// IMP=0x000000000017a908
- (id)lastCachedName;	// IMP=0x000000000018732c
- (id)initWithChart:(id)arg1;	// IMP=0x000000000017a341

@end
