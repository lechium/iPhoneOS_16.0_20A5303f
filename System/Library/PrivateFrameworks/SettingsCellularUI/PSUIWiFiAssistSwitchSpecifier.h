//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SettingsCellular/PSAppDataUsagePolicySwitchSpecifier.h>

__attribute__((visibility("hidden")))
@interface PSUIWiFiAssistSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier
{
    struct __CTServerConnection *_serverConnection;	// 184 = 0xb8
}

+ (id)wifiAssistGroupSpecifier;	// IMP=0x006000000005e3bf
+ (_Bool)shouldShowWifiAssist;	// IMP=0x006000000005e3b7
- (id)getLogger;	// IMP=0x000000000005eac8
- (void)setCellularUsagePolicy:(id)arg1;	// IMP=0x000000000005e8ab
- (id)cellularUsagePolicy;	// IMP=0x000000000005e569
- (unsigned long long)dataUsage;	// IMP=0x000000000005e4a6
- (void)dealloc;	// IMP=0x000000000005e371
- (id)initDefault;	// IMP=0x000000000005e220

@end
