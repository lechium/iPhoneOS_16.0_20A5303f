//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (GameCenter)
- (void)_gkDeleteCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00900000000c47e9
- (void)_gkSaveCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00900000000c3a1e
- (void)_getAltDSIDFromIDMSForCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00900000000c31c2
- (id)_gkAccountForAppleID:(id)arg1;	// IMP=0x00900000000c2edf
- (id)_gkPrimaryCredentialForEnvironment:(long long)arg1;	// IMP=0x00900000000c2c06
- (id)_gkAllCredentialsForEnvironment:(long long)arg1;	// IMP=0x00900000000c2b8c
- (id)_gkAllCredentials;	// IMP=0x00900000000c2b5e
- (void)_gkSetScope:(unsigned int)arg1 forCredential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00900000000c25ac
- (id)_gkCredentialForUsername:(id)arg1 environment:(long long)arg2;	// IMP=0x00900000000c254d
- (id)_gkMapAccountsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00900000000c09d3
@end

