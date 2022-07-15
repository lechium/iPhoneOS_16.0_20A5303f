//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDResources, EDRunsCollection, NSString;

__attribute__((visibility("hidden")))
@interface CHDDefaultTextProperty : NSObject
{
    EDResources *mResources;	// 8 = 0x8
    int mDefaultTextType;	// 16 = 0x10
    unsigned long long mContentFormatId;	// 24 = 0x18
    EDRunsCollection *mRuns;	// 32 = 0x20
    int mLabelPosition;	// 40 = 0x28
    _Bool mShowCategoryLabel;	// 44 = 0x2c
    _Bool mShowValueLabel;	// 45 = 0x2d
    _Bool mShowPercentageLabel;	// 46 = 0x2e
    _Bool mShowSeriesLabel;	// 47 = 0x2f
    _Bool mShowBubbleSizeLabel;	// 48 = 0x30
}

+ (id)defaultTextPropertyWithResources:(id)arg1;	// IMP=0x00100000001737bf
- (void).cxx_destruct;	// IMP=0x0000000000392d09
@property(readonly, copy) NSString *description;
- (void)setIsShowSeriesLabel:(_Bool)arg1;	// IMP=0x0000000000173da5
- (_Bool)isShowSeriesLabel;	// IMP=0x0000000000392cc2
- (void)setIsShowBubbleSizeLabel:(_Bool)arg1;	// IMP=0x0000000000392cb9
- (_Bool)isShowBubbleSizeLabel;	// IMP=0x0000000000392cb0
- (void)setIsShowPercentageLabel:(_Bool)arg1;	// IMP=0x0000000000173d9c
- (_Bool)isShowPercentageLabel;	// IMP=0x0000000000392ca7
- (void)setIsShowValueLabel:(_Bool)arg1;	// IMP=0x0000000000173d93
- (_Bool)isShowValueLabel;	// IMP=0x0000000000392c9e
- (void)setIsShowCategoryLabel:(_Bool)arg1;	// IMP=0x0000000000173d8a
- (_Bool)isShowCategoryLabel;	// IMP=0x0000000000392c95
- (void)setLabelPosition:(int)arg1;	// IMP=0x0000000000173d81
- (int)labelPosition;	// IMP=0x0000000000392c8c
- (long long)key;	// IMP=0x0000000000173dae
- (void)setContentFormat:(id)arg1;	// IMP=0x0000000000392b7a
- (id)contentFormat;	// IMP=0x0000000000392ae1
- (void)setRuns:(id)arg1;	// IMP=0x0000000000173d23
- (id)runs;	// IMP=0x00000000001fad99
- (void)setDefaultTextType:(int)arg1;	// IMP=0x0000000000173d78
- (int)defaultTextType;	// IMP=0x0000000000392ad8
- (id)initWithResources:(id)arg1;	// IMP=0x0000000000173824
- (void)setContentFormatId:(unsigned long long)arg1;	// IMP=0x0000000000173d6e
- (unsigned long long)contentFormatId;	// IMP=0x0000000000392d2f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
