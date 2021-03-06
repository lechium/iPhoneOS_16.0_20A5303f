//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKDataCollector, HKHealthStore, HKMobilityWalkingSteadinessFeatureStatusManager;
@protocol CLMobilityWalkingBoutServiceProtocol;

@interface CLMobilityHealthKitWriter : NSObject
{
    id <CLMobilityWalkingBoutServiceProtocol> _delegate;	// 8 = 0x8
    HKHealthStore *_healthStore;	// 16 = 0x10
    HKMobilityWalkingSteadinessFeatureStatusManager *_featureStatusManager;	// 24 = 0x18
    HKDataCollector *_dataCollectorWalkingSpeed;	// 32 = 0x20
    HKDataCollector *_dataCollectorWalkingDoubleSupportPercentage;	// 40 = 0x28
    HKDataCollector *_dataCollectorWalkingStepLength;	// 48 = 0x30
    HKDataCollector *_dataCollectorWalkingAsymmetryPercentage;	// 56 = 0x38
}

- (void)dataCollectorDidRequestCollectionThroughDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0020000000ac6d56
- (_Bool)areWalkingSteadinessNotificationsEnabled;	// IMP=0x0010000000ac6c2a
- (_Bool)isWalkingSteadinessAvailable;	// IMP=0x0010000000ac6982
- (void)_writeToHealthKitType:(int)arg1 value:(double)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5;	// IMP=0x0010000000ac6068
- (void)writeToHealthKitType:(int)arg1 value:(double)arg2 startDate:(id)arg3 endDate:(id)arg4;	// IMP=0x0010000000ac6050
- (void)writeToHealthKitType:(int)arg1 value:(double)arg2 startDate:(id)arg3 endDate:(id)arg4 deviceSide:(unsigned char)arg5;	// IMP=0x0010000000ac5fac
- (void)writeSteadinessEvent:(int)arg1 startDate:(id)arg2 endDate:(id)arg3 source:(id)arg4;	// IMP=0x0010000000ac5a59
- (void)writeToHealthKitAppleWalkingSteadiness:(double)arg1 startDate:(id)arg2 endDate:(id)arg3 source:(id)arg4;	// IMP=0x0010000000ac550c
- (void)dealloc;	// IMP=0x0010000000ac54a6
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000ac51f8

@end

