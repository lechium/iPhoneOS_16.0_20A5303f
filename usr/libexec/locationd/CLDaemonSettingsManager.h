//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLSettingsManagerInternal.h>

@interface CLDaemonSettingsManager : CLSettingsManagerInternal
{
    int _fDaemonPreferencesChangedNotificationToken;	// 8 = 0x8
    int _fMCProfileListChangedForDaemonSettingsNotificationToken;	// 12 = 0xc
}

- (void)flush;	// IMP=0x00200000001b4f9d
- (id)syncgetSetValue:(id)arg1 forKey:(id)arg2 withoutNotifying:(byref id)arg3;	// IMP=0x00100000001b4ed8
- (void)refresh;	// IMP=0x00100000001b4e0e
- (void)endService;	// IMP=0x00100000001b4da7
- (void)beginService;	// IMP=0x00100000001b4c16
- (id)init;	// IMP=0x00100000001b4bd9

@end
