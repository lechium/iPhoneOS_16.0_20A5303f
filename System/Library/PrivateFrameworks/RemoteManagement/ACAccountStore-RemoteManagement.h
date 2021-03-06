//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (RemoteManagement)
+ (id)rm_defaultStore;	// IMP=0x0060000000002022
- (id)rm_remoteManagementAccountForProfileIdentifier:(id)arg1;	// IMP=0x0010000000002c8c
- (id)rm_remoteManagementAccountForEnrollmentURL:(id)arg1;	// IMP=0x0010000000002aa4
- (id)rm_remoteManagementAccountForIdentifier:(id)arg1;	// IMP=0x00100000000028bc
- (id)rm_remoteManagementAccountForDSID:(id)arg1;	// IMP=0x00100000000026d4
- (id)rm_remoteManagementAccountForAltDSID:(id)arg1;	// IMP=0x00100000000024ec
- (id)_rm_AccountAssociatedWithRemoteManagementWithAccountTypeIdentifier:(id)arg1 altDSID:(id)arg2;	// IMP=0x0010000000002279
- (id)_rm_AccountAssociatedWithRemoteManagementWithAccountTypeIdentifier:(id)arg1;	// IMP=0x00100000000021ac
- (id)rm_iTunesAccountForRemoteManagingAccountWithAltDSID:(id)arg1;	// IMP=0x001000000000218d
- (id)rm_iTunesAccountForRemoteManagingAccount;	// IMP=0x0010000000002171
- (id)rm_iCloudAccountForRemoteManagingAccountWithAltDSID:(id)arg1;	// IMP=0x0010000000002152
- (id)rm_iCloudAccountForRemoteManagingAccount;	// IMP=0x0010000000002136
- (id)rm_RemoteManagementAccounts;	// IMP=0x00100000000020d7
- (id)rm_RemoteManagementAccountType;	// IMP=0x00100000000020bb
@end

