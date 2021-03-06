//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSNetworkAvailabilityMonitor
{
    int _notifyToken;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000e608a
- (void)_notifyObserver:(id)arg1 withNetworkAvailability:(_Bool)arg2;	// IMP=0x00200000000e64c2
- (void)_didReceivedNetworkAvailabilityChangedNotification:(_Bool)arg1;	// IMP=0x00100000000e6450
- (void)_availabilityChanged;	// IMP=0x00100000000e63b2
- (void)_stopMonitoring;	// IMP=0x00100000000e6309
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000e6199
- (_Bool)isAvailable;	// IMP=0x00100000000e6121
- (id)init;	// IMP=0x00100000000e60df

@end

