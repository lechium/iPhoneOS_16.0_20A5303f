//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EBReaderSheetState, OADColorScheme;
@protocol CHAutoStyling;

__attribute__((visibility("hidden")))
@interface CHBReaderState
{
    EBReaderSheetState *mEBReaderSheetState;	// 40 = 0x28
    void *mXlReader;	// 48 = 0x30
    id <CHAutoStyling> mAutoStyling;	// 56 = 0x38
    int mAxisGroup;	// 64 = 0x40
    void *mXlCurrentPlot;	// 72 = 0x48
    int mXlCurrentPlotIndex;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000038ee17
@property(readonly, nonatomic) OADColorScheme *colorScheme;
- (const struct XlChartSeriesFormat *)defaultFormatForXlSeries:(const void *)arg1;	// IMP=0x000000000017e390
- (const struct XlChartSeriesFormat *)xlCurrentDefaultSeriesFormat;	// IMP=0x000000000017e352
- (void)setXlCurrentPlot:(void *)arg1;	// IMP=0x000000000017bb28
- (void *)xlCurrentPlot;	// IMP=0x000000000017c0c4
- (void)setXlCurrentPlotIndex:(int)arg1;	// IMP=0x000000000017bb18
- (int)xlCurrentPlotIndex;	// IMP=0x000000000017c6cc
- (int)xlPlotCount;	// IMP=0x000000000017aad0
- (void)readAndCacheXlChartDataSeries;	// IMP=0x0000000000170699
- (void)setAxisGroup:(int)arg1;	// IMP=0x0000000000176c84
- (int)axisGroup;	// IMP=0x00000000001777f3
- (id)autoStyling;	// IMP=0x000000000038ee02
- (void)setChart:(id)arg1;	// IMP=0x000000000038ed6c
- (void *)xlReader;	// IMP=0x000000000016e5e7
- (id)resources;	// IMP=0x00000000001737a2
- (id)workbook;	// IMP=0x000000000017a3cf
- (id)ebReaderSheetState;	// IMP=0x000000000016e5f8
- (id)initWithEBReaderSheetState:(id)arg1;	// IMP=0x000000000016ded4

@end
