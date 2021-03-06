//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SOConfigurationHost, SOKerberosSettingsManager;

@interface SODaemonKerberosSettingsManager : NSObject
{
    SOConfigurationHost *_configurationHost;	// 8 = 0x8
    SOKerberosSettingsManager *_settingsManager;	// 16 = 0x10
    _Bool _observingConfigurationChanges;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000001a40
- (void)saveKerberosValuesForPlugins;	// IMP=0x001000000000188c
- (void)configurationChanged:(id)arg1;	// IMP=0x001000000000175d
- (void)dealloc;	// IMP=0x00100000000016e2
- (void)listenForConfigurationChanges;	// IMP=0x0010000000001675
- (id)initWithConfigurationHost:(id)arg1 settingsManager:(id)arg2;	// IMP=0x00100000000015d8

@end

