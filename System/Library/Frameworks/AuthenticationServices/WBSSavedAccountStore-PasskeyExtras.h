//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariCore/WBSSavedAccountStore.h>

@class NSArray;

@interface WBSSavedAccountStore (PasskeyExtras)
+ (id)importPasskeyCredential:(id)arg1;	// IMP=0x00100000000307d5
+ (id)exportPasskeyCredentialWithID:(id)arg1;	// IMP=0x00100000000305e1
+ (void)updateUserVisibleName:(id)arg1 forPasskeyWithIdentifier:(id)arg2;	// IMP=0x0010000000030526
+ (void)deletePasskeyWithIdentifier:(id)arg1;	// IMP=0x0010000000030489
@property(readonly, copy, nonatomic) NSArray *allPasskeysData;
@end

