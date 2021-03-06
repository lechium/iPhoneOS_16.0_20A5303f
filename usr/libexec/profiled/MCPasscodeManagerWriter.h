//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedConfiguration/MCPasscodeManager.h>

@interface MCPasscodeManagerWriter : MCPasscodeManager
{
}

+ (void)setCurrentEphemeralUserPasscodeTypeFromUnlockScreenType:(int)arg1 simplePasscodeType:(int)arg2;	// IMP=0x0040000000075b05
+ (_Bool)didPasscodePolicyChangeWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2;	// IMP=0x00100000000758ee
+ (id)sharedManager;	// IMP=0x0010000000075871
- (void)resetPasscodeMetadata;	// IMP=0x0040000000075c43
- (_Bool)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id *)arg3;	// IMP=0x00100000000758e6
- (_Bool)changePasscodeFrom:(id)arg1 to:(id)arg2 outError:(id *)arg3;	// IMP=0x00100000000758de
- (void)_sendPasscodeChangedNotification;	// IMP=0x00100000000758be
- (void)_setPrivatePasscodeDict:(id)arg1;	// IMP=0x00100000000758b8

@end

