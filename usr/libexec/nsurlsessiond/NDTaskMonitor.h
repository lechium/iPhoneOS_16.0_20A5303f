//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NDApplication, NSMutableArray, NSString, NSURLSessionTask, UMUserSyncTask, __NSCFURLSessionTaskInfo;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NDTaskMonitor : NSObject
{
    NSURLSessionTask *_task;	// 8 = 0x8
    __NSCFURLSessionTaskInfo *_taskInfo;	// 16 = 0x10
    NSString *_clientBundleIdentifier;	// 24 = 0x18
    NSString *_clientSecondaryIdentifier;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_throughputTimer;	// 48 = 0x30
    NSMutableArray *_progressTimestamps;	// 56 = 0x38
    NSMutableArray *_progressValues;	// 64 = 0x40
    unsigned long long _throughputInterval;	// 72 = 0x48
    NDApplication *_monitoredApplication;	// 80 = 0x50
    double _throughputMonitoringStartTime;	// 88 = 0x58
    _Bool _connectionIsCellular;	// 96 = 0x60
    _Bool _hasTransferredData;	// 97 = 0x61
    _Bool _discretionary;	// 98 = 0x62
    _Bool _explicitlyDiscretionary;	// 99 = 0x63
    _Bool _performsNonDiscretionaryThrougputMonitoring;	// 100 = 0x64
    _Bool _mayBeDemotedToDiscretionary;	// 101 = 0x65
    UMUserSyncTask *_UMSyncTask;	// 104 = 0x68
    int _powerMonitorToken;	// 112 = 0x70
    long long _basePriority;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x002000000005333e
@property long long basePriority; // @synthesize basePriority=_basePriority;
- (void)applicationEndedTransitionalDiscretionaryBackgroundPeriod:(id)arg1;	// IMP=0x00100000000532df
- (void)applicationNoLongerInForeground:(id)arg1;	// IMP=0x0010000000053294
- (void)applicationEnteredForeground:(id)arg1;	// IMP=0x0010000000053249
- (void)backgroundUpdatesDisabledForApplication:(id)arg1;	// IMP=0x00100000000531be
- (void)applicationWasQuitFromAppSwitcher:(id)arg1;	// IMP=0x0010000000053133
- (void)cancel;	// IMP=0x0010000000053082
- (void)taskWillSuspend;	// IMP=0x0010000000053070
- (void)startThroughputMonitoringIfAppropriate;	// IMP=0x0010000000052f3d
- (void)taskWillResume;	// IMP=0x0010000000052ea0
- (void)stopThroughputMonitoring;	// IMP=0x0010000000052e4b
- (void)startThroughputMonitoring;	// IMP=0x0010000000052d93
- (void)taskTransferredData:(long long)arg1 countOfBytesReceived:(long long)arg2;	// IMP=0x0010000000052aec
- (void)setThroughputTimerForCurrentInterval;	// IMP=0x0010000000052a5e
- (void)calculateThroughput;	// IMP=0x00100000000526b7
- (long long)currentIntervalEndDelta;	// IMP=0x0010000000052675
- (double)currentThroughputThreshold;	// IMP=0x0010000000052657
- (id)initWithTask:(id)arg1 taskInfo:(id)arg2 clientBundleIdentifier:(id)arg3 secondaryIdentifier:(id)arg4 monitoredApplication:(id)arg5 priority:(long long)arg6 options:(unsigned long long)arg7 queue:(id)arg8;	// IMP=0x001000000005242b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
