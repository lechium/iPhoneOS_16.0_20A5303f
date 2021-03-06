//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDPeriodicActivity, HDProfile, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HDAudioAnalyticsManager : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
    double _calculationPeriod;	// 16 = 0x10
    double _retryPeriod;	// 24 = 0x18
    HDPeriodicActivity *_periodicActivity;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000018203
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) HDPeriodicActivity *periodicActivity; // @synthesize periodicActivity=_periodicActivity;
@property(readonly, nonatomic) double retryPeriod; // @synthesize retryPeriod=_retryPeriod;
@property(readonly, nonatomic) double calculationPeriod; // @synthesize calculationPeriod=_calculationPeriod;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (_Bool)_dayComponents:(id)arg1 lessThan:(id)arg2;	// IMP=0x00000000000180d3
- (id)_dayForDate:(id)arg1;	// IMP=0x0000000000018047
- (_Bool)_recordedDataForToday;	// IMP=0x0000000000017f64
- (id)capturePhoneAnalytics;	// IMP=0x0000000000016e07
- (id)lastSuccessfulCalculation;	// IMP=0x0000000000016db7
- (_Bool)periodicActivityRequiresProtectedData:(id)arg1;	// IMP=0x0000000000016daf
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016c9b
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;	// IMP=0x0000000000016c95
- (void)daemonReady:(id)arg1;	// IMP=0x0000000000016c07
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000000016af5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

