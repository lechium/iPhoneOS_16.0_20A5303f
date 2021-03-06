//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDMCAnalysisManager, HKCalendarCache, HKMCSettingsManager, NSString;

__attribute__((visibility("hidden")))
@interface HDMCAnalysisScheduler : NSObject
{
    HDMCAnalysisManager *_analysisManager;	// 8 = 0x8
    HKMCSettingsManager *_settingsManager;	// 16 = 0x10
    HKCalendarCache *_calendarCache;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000013b50
- (void)daemonReady:(id)arg1;	// IMP=0x0000000000013a75
- (void)_runAnalysis;	// IMP=0x00000000000137dd
- (double)_delayUntilNextAnalysisSchedulingWindowStartDateAfterDate:(id)arg1;	// IMP=0x0000000000013631
- (void)_handleActivity:(id)arg1 forceRescheduleOnCheckIn:(_Bool)arg2;	// IMP=0x00000000000131ee
- (void)_registerActivityAfterCompletion:(_Bool)arg1;	// IMP=0x00000000000130dc
- (void)dealloc;	// IMP=0x000000000001309f
- (id)initWithDaemon:(id)arg1 analysisManager:(id)arg2 settingsManager:(id)arg3 calendarCache:(id)arg4;	// IMP=0x0000000000012fc3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

