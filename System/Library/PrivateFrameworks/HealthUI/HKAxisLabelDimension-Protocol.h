//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@protocol HKAxisLabelDimension
- (NSString *)stringForLocation:(NSNumber *)arg1;
- (NSNumber *)endingLabelsFactorOverride;
- (void)setStepSizeForLabels:(double)arg1;
- (double)ticksPerStepSize:(double)arg1;
- (double)niceStepSizeLargerThan:(double)arg1;
@end

