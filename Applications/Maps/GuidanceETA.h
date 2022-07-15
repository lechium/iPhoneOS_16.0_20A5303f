//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString, NSTimeZone;

@interface GuidanceETA : NSObject
{
    NSTimeZone *_destinationTimeZone;	// 8 = 0x8
    NSString *_etaDateString;	// 16 = 0x10
    NSString *_etaDateStringWithoutAMPM;	// 24 = 0x18
    NSNumber *_arrivalBatteryCharge;	// 32 = 0x20
    _Bool _isEtaToFinalDestination;	// 40 = 0x28
    NSString *_arrivalTimeString;	// 48 = 0x30
    NSString *_distanceValue;	// 56 = 0x38
    NSString *_distanceUnit;	// 64 = 0x40
    NSString *_distanceUnitAccessibility;	// 72 = 0x48
    double _remainingDistance;	// 80 = 0x50
    NSString *_timeValue;	// 88 = 0x58
    NSString *_timeUnit;	// 96 = 0x60
    NSString *_timeUnitAccessibility;	// 104 = 0x68
    unsigned long long _remainingMinutes;	// 112 = 0x70
    NSDate *_etaDate;	// 120 = 0x78
}

+ (id)defaultBatteryOnArrivalString;	// IMP=0x00400000004d292a
+ (id)defaultDistanceUnitAccessibility;	// IMP=0x00100000004d2876
+ (id)defaultDistanceUnit;	// IMP=0x00100000004d27c2
+ (id)defaultTimeUnitAccessibility;	// IMP=0x00100000004d275a
+ (id)defaultTimeUnit;	// IMP=0x00100000004d26f2
+ (id)invalidValueString;	// IMP=0x00100000004d268a
+ (id)defaultArrivalString;	// IMP=0x00100000004d2622
+ (id);	// IMP=0x00100000004d1c5a
+ (id)displayDateForDate:(id)arg1;	// IMP=0x00100000004d18bc
+ (unsigned long long)displayMinutesForTimeInterval:(double)arg1;	// IMP=0x00100000004d188a
+ (id)etaStringFromEtaLegInfo:(id)arg1;	// IMP=0x00100000004d171a
- (void).cxx_destruct;	// IMP=0x00200000004d2fd6
@property(readonly, nonatomic) _Bool isEtaToFinalDestination; // @synthesize isEtaToFinalDestination=_isEtaToFinalDestination;
@property(readonly, nonatomic) NSDate *etaDate; // @synthesize etaDate=_etaDate;
@property(readonly, nonatomic) unsigned long long remainingMinutes; // @synthesize remainingMinutes=_remainingMinutes;
@property(readonly, nonatomic) NSNumber *arrivalBatteryCharge; // @synthesize arrivalBatteryCharge=_arrivalBatteryCharge;
@property(readonly, nonatomic) double remainingDistance; // @synthesize remainingDistance=_remainingDistance;
- (id)arrivalWithBatteryChargeStringWithFont:(id)arg1;	// IMP=0x00100000004d2cf7
- (id)batteryChargeStringWithFont:(id)arg1;	// IMP=0x00100000004d2ae0
- (id)_chargeImageAttachmentWithFont:(id)arg1;	// IMP=0x00100000004d2992
- (void)_computeDistanceProperties;	// IMP=0x00100000004d239b
- (long long)_unitStyleForUnit:(long long)arg1;	// IMP=0x00100000004d2360
- (long long)_lengthUnitFromUnitType:(long long)arg1;	// IMP=0x00100000004d2344
@property(readonly, nonatomic) NSString *distanceUnitAccessibility; // @synthesize distanceUnitAccessibility=_distanceUnitAccessibility;
@property(readonly, nonatomic) NSString *distanceUnit; // @synthesize distanceUnit=_distanceUnit;
@property(readonly, nonatomic) NSString *distanceValue; // @synthesize distanceValue=_distanceValue;
- (void)_computeTimeProperties;	// IMP=0x00100000004d1e38
@property(readonly, nonatomic) NSString *timeUnitAccessibility; // @synthesize timeUnitAccessibility=_timeUnitAccessibility;
@property(readonly, nonatomic) NSString *timeUnit; // @synthesize timeUnit=_timeUnit;
@property(readonly, nonatomic) NSString *timeValue; // @synthesize timeValue=_timeValue;
@property(readonly, nonatomic) NSString *arrivalTimeExpandedString;
@property(readonly, nonatomic) NSString *arrivalTimeBottomString;
@property(readonly, nonatomic) NSString *arrivalTimeString; // @synthesize arrivalTimeString=_arrivalTimeString;
- (id)description;	// IMP=0x00100000004d19bd
@property(readonly, nonatomic) unsigned long long remainingMinutesRoundedIfNeededBasedOnRemainingDistance;
- (id)etaDateStringWithAMPMSymbol:(_Bool)arg1 allowTimeZone:(_Bool)arg2;	// IMP=0x00100000004d1491
- (id)etaDateStringWithAMPMSymbol:(_Bool)arg1;	// IMP=0x00100000004d147a
- (id)initWithDisplayETA:(id)arg1 remainingDistance:(id)arg2 batteryChargeInfo:(id)arg3 destinationTimeZone:(id)arg4;	// IMP=0x00100000004d12bc
- (id)initWithRemainingTime:(double)arg1 remainingDistance:(double)arg2 destinationTimeZone:(id)arg3;	// IMP=0x00100000004d1150

@end
