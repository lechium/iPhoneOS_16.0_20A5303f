//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (ConferenceRegistrationAdditions)
+ (_Bool)shouldShowCNFRegistrationServerLogs;	// IMP=0x00500000000054f7
+ (void)setShouldShowCNFRegistrationServerLogs:(_Bool)arg1;	// IMP=0x005000000000549d
+ (id)CNFRegServerURLOverride;	// IMP=0x0050000000005484
+ (void)setCNFRegServerURLOverride:(id)arg1;	// IMP=0x005000000000546b
+ (void)setCNFRegSavedAccountName:(id)arg1;	// IMP=0x0050000000005452
+ (id)CNFRegSavedAccountName;	// IMP=0x0050000000005439
+ (void)setCNFRegEmailValidationTimeout:(unsigned long long)arg1;	// IMP=0x00500000000053df
+ (unsigned long long)CNFRegEmailValidationTimeout;	// IMP=0x0050000000005394
+ (_Bool)shouldShowCNFRegistrationSettingsUI;	// IMP=0x0050000000005349
+ (void)setShouldShowCNFRegistrationSettingsUI:(_Bool)arg1;	// IMP=0x00500000000052ef
+ (id)CNFObjectForKey:(id)arg1;	// IMP=0x00500000000052d6
+ (void)setCNFObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00500000000052bd
@end

