//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PassCredentialShare
{
}

+ (id)_propertySettersForPassCredentialShare;	// IMP=0x00400000000bea81
+ (id)_propertyValuesForPassCredentialShare:(id)arg1;	// IMP=0x00100000000be944
+ (id)_predicateForTransportIdentifier:(id)arg1;	// IMP=0x00100000000be921
+ (id)_predicateForCredentialShareIdentifier:(id)arg1;	// IMP=0x00100000000be8fe
+ (id)_predicateForSharePIDs:(id)arg1;	// IMP=0x00100000000be8db
+ (id)_predicateForSharePID:(long long)arg1;	// IMP=0x00100000000be868
+ (id)_passCredentialSharesWithQuery:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000be4cd
+ (_Bool)deletePassCredentialShareForIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000be42f
+ (void)deletePassCredentialShareForSharePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000be396
+ (id)passCredentialShareForIdentifier:(id)arg1 sharePIDs:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000be212
+ (id)dbPassCredentialShareForCredentialShareIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000be103
+ (id)passCredentialShareForTransportIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000be059
+ (id)passCredentialShareForCredentialShareIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000be009
+ (id)passCredentialSharesForSharePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000bdf5c
+ (void)mergeInCredentialShares:(id)arg1 sharePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000bdbdd
+ (void)insertOrUpdatePassCredentialShares:(id)arg1 sharePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000bd705
+ (id)databaseTable;	// IMP=0x00100000000bd4d9
- (void)setStatus:(unsigned long long)arg1;	// IMP=0x00400000000be824
- (void)setIdentifier:(id)arg1;	// IMP=0x00100000000be80b
- (id)passCredentialShare;	// IMP=0x00100000000be69e
- (void)updateWithPassCredentialShare:(id)arg1 mergingInCredentialShare:(id)arg2;	// IMP=0x00100000000bd641
- (void)updateWithPassCredentialShare:(id)arg1;	// IMP=0x00100000000bd5c7
- (id)initWithPassCredentialShare:(id)arg1 sharePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000bd4e6

@end

