//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSHangUpEnabledMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isEnabled;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x004000000007be9b
- (void).cxx_destruct;	// IMP=0x002000000007c179
- (void)_voiceTriggerDuringCallEnabledDidChange;	// IMP=0x001000000007c0ae
- (_Bool)_checkCanUseVoiceTriggerDuringCallEnabled;	// IMP=0x001000000007c01b
- (_Bool)isEnabled;	// IMP=0x001000000007c00b
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x001000000007bff9
- (void)_didReceiveCanUseVoiceTriggerDuringCallSettingChangedInQueue:(_Bool)arg1;	// IMP=0x001000000007bf87
- (void)_stopMonitoring;	// IMP=0x001000000007bf81
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000007bf5a
- (id)init;	// IMP=0x001000000007bef0

@end
