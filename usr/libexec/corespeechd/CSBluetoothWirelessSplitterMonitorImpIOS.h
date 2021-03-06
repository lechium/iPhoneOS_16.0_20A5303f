//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSBluetoothWirelessSplitterMonitorImpIOS
{
    int _notifyToken;	// 8 = 0x8
    unsigned long long _splitterState;	// 16 = 0x10
}

- (void)_notifyObserver:(id)arg1 splitterState:(unsigned long long)arg2 shouldDisableSpeakerVerificationInSplitterMode:(_Bool)arg3;	// IMP=0x00200000000a81fe
- (void)_didReceiveWirelessSplitterStateChange;	// IMP=0x00100000000a8124
- (void)_stopMonitoring;	// IMP=0x00100000000a8081
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000a7eaa
- (void)splitterState:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a7cf4
- (unsigned long long)splitterState;	// IMP=0x00100000000a7ce3
- (void)updateSplitterState:(unsigned long long)arg1 shouldDisableSpeakerVerificationInSplitterMode:(_Bool)arg2;	// IMP=0x00100000000a7cc0
- (id)init;	// IMP=0x00100000000a7c31

@end

