//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CSLanguageCodeUpdateMonitorImplDarwin
{
    NSString *_currentLanguageCode;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000d83a2
- (void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2;	// IMP=0x00100000000d8320
- (void)_didReceiveLanguageCodeUpdate:(id)arg1;	// IMP=0x00100000000d813e
- (void)notifySiriLanguageCodeChanged:(id)arg1;	// IMP=0x00100000000d80b5
- (void)_stopMonitoring;	// IMP=0x00100000000d8036
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000d7fb7
- (id)init;	// IMP=0x00100000000d7f0a

@end
