//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHDTrendlineLabel, EDString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDTrendline : NSObject
{
    _Bool mDisplayEquation;	// 8 = 0x8
    _Bool mDisplayRSquaredValue;	// 9 = 0x9
    double mBackward;	// 16 = 0x10
    double mForward;	// 24 = 0x18
    double mInterceptYAxis;	// 32 = 0x20
    int mPolynomialOrder;	// 40 = 0x28
    long long mMovingAveragePeriod;	// 48 = 0x30
    int mType;	// 56 = 0x38
    OADGraphicProperties *mGraphicProperties;	// 64 = 0x40
    CHDTrendlineLabel *mLabel;	// 72 = 0x48
    EDString *mName;	// 80 = 0x50
}

+ (id)trendline;	// IMP=0x0060000000244810
- (void).cxx_destruct;	// IMP=0x0000000000394c72
- (id)description;	// IMP=0x0000000000394c34
- (id)defaultNameWithSeriesName:(id)arg1;	// IMP=0x0000000000394a95
- (void)setName:(id)arg1;	// IMP=0x0000000000394a4a
- (id)name;	// IMP=0x0000000000394a3c
- (void)setGraphicProperties:(id)arg1;	// IMP=0x000000000021dfa1
- (id)graphicProperties;	// IMP=0x0000000000244e6b
- (void)setLabel:(id)arg1;	// IMP=0x000000000021dd6c
- (id)label;	// IMP=0x0000000000394a2e
- (void)setType:(int)arg1;	// IMP=0x000000000021d969
- (int)type;	// IMP=0x0000000000394a24
- (void)setMovingAveragePeriod:(long long)arg1;	// IMP=0x0000000000249f86
- (long long)movingAveragePeriod;	// IMP=0x0000000000394a18
- (void)setPolynomialOrder:(int)arg1;	// IMP=0x00000000002458cb
- (int)polynomialOrder;	// IMP=0x0000000000394a0e
- (void)setInterceptYAxis:(double)arg1;	// IMP=0x000000000021ddeb
- (double)interceptYAxis;	// IMP=0x0000000000394a00
- (void)setForward:(double)arg1;	// IMP=0x000000000021dddd
- (double)forward;	// IMP=0x00000000003949f2
- (void)setBackward:(double)arg1;	// IMP=0x000000000021ddcf
- (double)backward;	// IMP=0x00000000003949e4
- (void)setDisplayRSquaredValue:(_Bool)arg1;	// IMP=0x000000000021ddc3
- (_Bool)isDisplayRSquaredValue;	// IMP=0x00000000003949da
- (void)setDisplayEquation:(_Bool)arg1;	// IMP=0x000000000021ddb9
- (_Bool)isDisplayEquation;	// IMP=0x00000000003949d0
- (id)init;	// IMP=0x000000000021d8d6

@end

