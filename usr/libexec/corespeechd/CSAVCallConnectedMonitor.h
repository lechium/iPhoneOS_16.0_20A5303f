//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSAVCallConnectedMonitor
{
    _Bool _hasConnectedAVCall;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000dcfa2
- (void)_startObservingSystemControllerLifecycle;	// IMP=0x00200000000dd177
- (void)_systemControllerDied:(id)arg1;	// IMP=0x00100000000dd0a0
- (void)_startObservingAVCallActiveChange;	// IMP=0x00100000000dd09a
- (_Bool)hasConnectedAVCall;	// IMP=0x00100000000dd08a
- (void)_stopMonitoring;	// IMP=0x00100000000dd084
- (void)_handleCallActiveDidChangeNotification:(id)arg1;	// IMP=0x00100000000dd073
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000dd036
- (id)init;	// IMP=0x00100000000dcff7

@end
