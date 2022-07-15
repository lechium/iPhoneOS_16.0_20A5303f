//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMeasurement, NSString;

@interface DirectionsElevationNormalisedPoint : NSObject
{
    NSMeasurement *_elevationMeasurement;	// 8 = 0x8
    NSMeasurement *_offsetMeasurement;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000b45bf1
@property(retain, nonatomic) NSMeasurement *offsetMeasurement; // @synthesize offsetMeasurement=_offsetMeasurement;
@property(retain, nonatomic) NSMeasurement *elevationMeasurement; // @synthesize elevationMeasurement=_elevationMeasurement;
- (id)chartViewDataRowID;	// IMP=0x0010000000b45b4e
- (id)chartViewDataValueForColumn:(id)arg1;	// IMP=0x0010000000b45a78
- (id)columnsInChartView;	// IMP=0x0010000000b45a6b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
