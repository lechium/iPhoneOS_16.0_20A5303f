//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSTrialAssetDownloadMonitor, NSString;

@interface CSSpeakerRecognitionAssetDownloadMonitor
{
    int _notifyToken;	// 8 = 0x8
    unsigned long long _lastUpdatedAssetType;	// 16 = 0x10
    CSTrialAssetDownloadMonitor *_trialAssetMonitor;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0020000000009318
- (void).cxx_destruct;	// IMP=0x0020000000009840
@property(retain, nonatomic) CSTrialAssetDownloadMonitor *trialAssetMonitor; // @synthesize trialAssetMonitor=_trialAssetMonitor;
- (void)trialAssetDownloadMonitorDelegate:(id)arg1 didInstallNewAsset:(_Bool)arg2 assetType:(unsigned long long)arg3;	// IMP=0x0010000000009797
- (void)_notifyObserver:(id)arg1;	// IMP=0x0010000000009732
- (void)_didInstalledNewAsset;	// IMP=0x0010000000009652
- (void)_stopMonitoring;	// IMP=0x00100000000095af
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000000947d
- (const char *)_notificationKey;	// IMP=0x0010000000009470
- (id)init;	// IMP=0x001000000000936d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

