//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAccessibilityElement.h>

@class NSArray, NSMeasurementFormatter, NSNumber, NSString, NSUnitLength;

@interface DirectionsElevationGraphAccessibilityElement : UIAccessibilityElement
{
    NSMeasurementFormatter *_elevationFormatter;	// 8 = 0x8
    NSMeasurementFormatter *_offsetFormatter;	// 16 = 0x10
    NSArray *_xPoints;	// 24 = 0x18
    NSArray *_yPoints;	// 32 = 0x20
    NSNumber *_minY;	// 40 = 0x28
    NSNumber *_maxY;	// 48 = 0x30
    NSUnitLength *_xUnit;	// 56 = 0x38
    NSUnitLength *_yUnit;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000002a6e71
- (_Bool)_accessibilityDataSeriesSupportsSonification;	// IMP=0x00100000002a6e69
- (_Bool)_accessibilityDataSeriesSupportsSummarization;	// IMP=0x00100000002a6e61
- (id)_accessibilityDataSeriesMaximumValueForAxis:(long long)arg1;	// IMP=0x00100000002a6dc2
- (id)_accessibilityDataSeriesMinimumValueForAxis:(long long)arg1;	// IMP=0x00100000002a6d86
- (id)_accessibilityDataSeriesValueDescriptionForPosition:(double)arg1 axis:(long long)arg2;	// IMP=0x00100000002a6b74
- (id)_accessibilityDataSeriesUnitLabelForAxis:(long long)arg1;	// IMP=0x00100000002a6ad3
- (id)_accessibilityDataSeriesTitleForAxis:(long long)arg1;	// IMP=0x00100000002a6a28
- (long long)_accessibilityDataSeriesType;	// IMP=0x00100000002a6a1d
- (id)_accessibilityDataSeriesValuesForAxis:(long long)arg1;	// IMP=0x00100000002a69df
- (id)_accessibilityDataSeriesName;	// IMP=0x00100000002a69cd
@property(readonly, nonatomic) double maximumY;
@property(readonly, nonatomic) double minimumY;
@property(readonly, nonatomic) NSMeasurementFormatter *elevationFormatter;
@property(readonly, nonatomic) NSMeasurementFormatter *offsetFormatter;
- (id)initWithAccessibilityContainer:(id)arg1;	// IMP=0x00100000002a680a
- (id)initWithAccessibilityContainer:(id)arg1 data:(id)arg2;	// IMP=0x00100000002a61ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

