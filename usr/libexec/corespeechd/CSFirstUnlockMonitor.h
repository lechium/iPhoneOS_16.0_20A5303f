//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSFirstUnlockMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _firstUnlocked;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x0040000000089641
- (_Bool)_checkFirstUnlocked;	// IMP=0x002000000008996b
- (_Bool)isFirstUnlocked;	// IMP=0x001000000008995b
- (void)_notifyObserver:(id)arg1 withUnlocked:(_Bool)arg2;	// IMP=0x00100000000898f1
- (void)_didReceiveFirstUnlock:(_Bool)arg1;	// IMP=0x001000000008987f
- (void)_didReceiveFirstUnlockInQueue:(_Bool)arg1;	// IMP=0x001000000008980d
- (void)_stopMonitoring;	// IMP=0x001000000008976a
- (void)_firstUnlockNotified;	// IMP=0x001000000008972f
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000089708
- (id)init;	// IMP=0x00100000000896bb

@end

