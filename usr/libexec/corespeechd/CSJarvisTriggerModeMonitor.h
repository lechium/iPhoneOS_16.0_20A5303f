//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSJarvisTriggerModeMonitor
{
}

+ (id)triggerModeStringDescription:(long long)arg1;	// IMP=0x0040000000060054
+ (id)sharedInstance;	// IMP=0x001000000005fff3
- (long long)getTriggerMode;	// IMP=0x0040000000060047
- (void)setTriggerMode:(long long)arg1;	// IMP=0x0010000000060041
- (void)_stopMonitoring;	// IMP=0x001000000006003b
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000060035
- (id)init;	// IMP=0x001000000005fffb

@end
