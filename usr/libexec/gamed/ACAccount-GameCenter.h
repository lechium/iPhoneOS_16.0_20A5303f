//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccount.h>

@interface ACAccount (GameCenter)
- (void)_gkSetProperty:(id)arg1 forKey:(id)arg2 environment:(long long)arg3;	// IMP=0x001000000012c6a3
- (id)_gkPropertyForKey:(id)arg1 environment:(long long)arg2;	// IMP=0x001000000012c635
- (id)_gkModifiedDateForProperty:(id)arg1 environment:(long long)arg2;	// IMP=0x001000000012c5c7
- (id)_gkCredentialForEnvironment:(long long)arg1;	// IMP=0x001000000012c43c
- (id)_gkCredentialsForEnvironment:(long long)arg1;	// IMP=0x001000000012b91d
- (id)_gkCredentials;	// IMP=0x001000000012b909
- (void)_gkSetPlayerInternal:(id)arg1;	// IMP=0x001000000012b5c2
- (id)_gkPlayerInternal;	// IMP=0x001000000012b345
- (id)_gkPerEnvironmentTokens;	// IMP=0x001000000012b25c
- (void)_gkSetToken:(id)arg1 forEnvironment:(long long)arg2;	// IMP=0x001000000012afea
- (id)_gkTokenForEnvironment:(long long)arg1;	// IMP=0x001000000012aeab
- (_Bool)_gkIsPrimaryForEnvironment:(long long)arg1;	// IMP=0x001000000012adf3
@end

