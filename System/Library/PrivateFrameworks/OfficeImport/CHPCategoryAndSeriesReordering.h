//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CHPCategoryAndSeriesReordering
{
}

- (void)reorderCategoryAndSeries:(id)arg1 sheet:(id)arg2 clearAxisReversedFlag:(_Bool)arg3;	// IMP=0x0000000000181c36
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;	// IMP=0x0000000000181c1d
- (_Bool)isObjectSupported:(id)arg1;	// IMP=0x000000000017f607
- (void)reorderDataFormula:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(_Bool)arg3;	// IMP=0x0000000000230d26
- (long long)reorderDataValues:(id)arg1 dataPointCount:(unsigned long long)arg2;	// IMP=0x0000000000230c57
- (void)reorderData:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(_Bool)arg3;	// IMP=0x0000000000230b52
- (void)reorderValueProperties:(id)arg1 dataPointCount:(unsigned long long)arg2;	// IMP=0x0000000000231339
- (void)reorderSeriesCategory:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(_Bool)arg3;	// IMP=0x0000000000230a56
- (void)applyCategoryReorderingPreprocessor:(id)arg1;	// IMP=0x0000000000230850
- (void)applySeriesReorderingPreprocessor:(id)arg1;	// IMP=0x000000000039545f
- (_Bool)isObjectSupportedForSeriesReorderingPreprocessor:(id)arg1 isCategoryOrderReversed:(_Bool)arg2;	// IMP=0x0000000000181f47

@end

