//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSTimerMonitor
{
    long long _timerFiringState;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000031225
- (void).cxx_destruct;	// IMP=0x002000000003152b
- (long long)timerState;	// IMP=0x0010000000031477
- (void)_stopMonitoring;	// IMP=0x00100000000313c0
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000312ee
- (void)initializeTimerState;	// IMP=0x00100000000312e8
- (id)init;	// IMP=0x001000000003127a

@end

