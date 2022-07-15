//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface CSAutomaticVolumeEnabledMonitor
{
    _Bool _isAutomaticVolumeEnabled;	// 8 = 0x8
    NSUserDefaults *_defaults;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x004000000007c36b
- (void).cxx_destruct;	// IMP=0x002000000007c7dd
- (void)_stopMonitoring;	// IMP=0x001000000007c7bc
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000007c67f
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x001000000007c615
- (void)_didReceiveAutomaticVolumeToggled:(_Bool)arg1;	// IMP=0x001000000007c5a3
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000007c3ef
- (id)init;	// IMP=0x001000000007c3c0

@end
