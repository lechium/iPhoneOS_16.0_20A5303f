//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, NSDate, NSURL, UIColor;

@interface AirQualityConditions : NSObject
{
    unsigned long long _airQualityIndex;	// 8 = 0x8
    _Bool _hasNumericalAirQualityIndex;	// 16 = 0x10
    UIColor *_color;	// 24 = 0x18
    NSURL *_learnMoreURL;	// 32 = 0x20
    CLLocation *_location;	// 40 = 0x28
    NSDate *_expirationDate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000057eab1
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSURL *learnMoreURL; // @synthesize learnMoreURL=_learnMoreURL;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) _Bool hasNumericalAirQualityIndex; // @synthesize hasNumericalAirQualityIndex=_hasNumericalAirQualityIndex;
@property(readonly, nonatomic) unsigned long long airQualityIndex; // @synthesize airQualityIndex=_airQualityIndex;
- (id)colorForString:(id)arg1;	// IMP=0x001000000057ea5d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000057e985
- (id)initWithAirQualityIndex:(unsigned long long)arg1 isNumerical:(_Bool)arg2 color:(id)arg3 learnMoreURL:(id)arg4 forLocation:(id)arg5 withExpirationDate:(id)arg6;	// IMP=0x001000000057e856

@end

