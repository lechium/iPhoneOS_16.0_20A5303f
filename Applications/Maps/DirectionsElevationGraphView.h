//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CCChartView, DirectionsElevationGraphAccessibilityElement, DirectionsElevationGraphConfiguration, GEOElevationProfile, NSMeasurementFormatter, NSNumber, NSUnitLength;

@interface DirectionsElevationGraphView : UIView
{
    DirectionsElevationGraphConfiguration *_configuration;	// 8 = 0x8
    DirectionsElevationGraphAccessibilityElement *_axElement;	// 16 = 0x10
    NSMeasurementFormatter *_elevationFormatter;	// 24 = 0x18
    NSUnitLength *_elevationUnit;	// 32 = 0x20
    _Bool _metric;	// 40 = 0x28
    UIView *_chartContainerView;	// 48 = 0x30
    CCChartView *_chartView;	// 56 = 0x38
    _Bool _creatingChartView;	// 64 = 0x40
    double _lastChartDrawingWidth;	// 72 = 0x48
    double _lastChartDrawingHeight;	// 80 = 0x50
    unsigned long long _lastNumberOfBars;	// 88 = 0x58
    _Bool _needsUpdateSegmentDescriptions;	// 96 = 0x60
    NSNumber *_startLabelWidth;	// 104 = 0x68
    NSNumber *_progressLabelWidth;	// 112 = 0x70
    NSNumber *_endLabelWidth;	// 120 = 0x78
    _Bool _selected;	// 128 = 0x80
    GEOElevationProfile *_elevationProfile;	// 136 = 0x88
    double _routeLength;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0020000000b452af
@property(nonatomic) double routeLength; // @synthesize routeLength=_routeLength;
@property(copy, nonatomic) GEOElevationProfile *elevationProfile; // @synthesize elevationProfile=_elevationProfile;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (id)_resampledDataFromPoints:(id)arg1 routeLengthInMetres:(double)arg2 targetNumberOfBars:(unsigned long long)arg3 barWidth:(double)arg4 gapWidth:(double)arg5;	// IMP=0x0010000000b44d9f
- (id)_dataFromElevationProfile:(id)arg1;	// IMP=0x0010000000b447cb
- (void)_calculateNavigationStartEndTextSizes;	// IMP=0x0010000000b4461a
- (void)_updateNavigationTextSizes;	// IMP=0x0010000000b4451f
- (_Bool)_shouldShowElevationAxisLabelsWithEstimatedWidth:(double)arg1;	// IMP=0x0010000000b4440c
- (void)_updateElevationAxisVisibility;	// IMP=0x0010000000b442d4
- (id)_stringForAxesWithElevation:(double)arg1;	// IMP=0x0010000000b44231
- (id)_stringForAxesWithOffsetInMeters:(double)arg1;	// IMP=0x0010000000b44073
- (id)_stringForAxesWithOffset:(double)arg1;	// IMP=0x0010000000b4404c
- (void)_registerChartFormatterFunctions;	// IMP=0x0010000000b43d07
- (double)_targetChartDrawingWidth;	// IMP=0x0010000000b43bf1
- (struct CGSize)_estimatedOffsetLabelSizeForString:(id)arg1;	// IMP=0x0010000000b439e8
- (double)_estimatedOffsetAxisHeight;	// IMP=0x0010000000b43986
- (double)_estimatedElevationAxisWidth;	// IMP=0x0010000000b43558
- (unsigned long long)_numberOfBarsForCurrentWidth;	// IMP=0x0010000000b43484
- (void)_unitsDidChange;	// IMP=0x0010000000b43299
- (void)_updateMeasurementUnits;	// IMP=0x0010000000b43125
- (void)_updateChartView;	// IMP=0x0010000000b429bb
- (void)_updateChartSegmentDescriptionsIfNeeded;	// IMP=0x0010000000b422db
- (void)_updateChartElevationDataIfNeeded;	// IMP=0x0010000000b41a3f
- (void)_updateChartDrawingAreaIfNeeded;	// IMP=0x0010000000b41703
- (void)_setSignalWithName:(id)arg1 toValue:(id)arg2;	// IMP=0x0010000000b41679
- (void)_updateBarFillColor;	// IMP=0x0010000000b41610
- (void)setNavigationProgress:(double)arg1;	// IMP=0x0010000000b413c0
- (void)setCollapsedHeight:(double)arg1 expandedHeight:(double)arg2;	// IMP=0x0010000000b411c8
- (void)setElevationProfile:(id)arg1 routeLength:(double)arg2;	// IMP=0x0010000000b40fc1
- (void)setConfiguration:(id)arg1;	// IMP=0x0010000000b40ddd
- (void)layoutSubviews;	// IMP=0x0010000000b40d7a
- (void)setNeedsDisplay;	// IMP=0x0010000000b40d2e
- (void)_prepareForFirstUse;	// IMP=0x0010000000b40a51
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000b40990
- (id)init;	// IMP=0x0010000000b408f7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000b4085e
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0010000000b4078d

@end
