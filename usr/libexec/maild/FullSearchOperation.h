//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSProgress, NSSet;

@interface FullSearchOperation
{
    NSProgress *_progress;	// 96 = 0x60
    struct os_unfair_lock_s _accountsLock;	// 104 = 0x68
    NSSet *_accounts;	// 112 = 0x70
    struct os_unfair_lock_s _remoteSearchCoordinatorsByAccountIdentifierLock;	// 120 = 0x78
    NSMutableDictionary *_remoteSearchCoordinatorsByAccountIdentifier;	// 128 = 0x80
}

+ (id)fullSearchForManager:(id)arg1 searchContext:(id)arg2 sources:(id)arg3;	// IMP=0x00400000000d5225
- (void).cxx_destruct;	// IMP=0x00200000000d878d
- (id)_orderedMailboxesForAccount:(id)arg1;	// IMP=0x00100000000d8108
- (id)_orderedEnumeratorForSources:(id)arg1 withAccount:(id)arg2;	// IMP=0x00100000000d7a59
- (void)_performRemoteSearchForAccount:(id)arg1 coordinator:(id)arg2;	// IMP=0x00100000000d77c0
- (id)_performRemoteSearchesForAccount:(id)arg1;	// IMP=0x00100000000d6dfe
- (id)_performRemoteSearchesWithSources:(id)arg1 accountID:(id)arg2;	// IMP=0x00100000000d6954
- (void)performRemoteSearches;	// IMP=0x00100000000d6231
- (id)_remoteSearchableSourcesByAccount;	// IMP=0x00100000000d5e67
- (void)accountsChanged:(id)arg1;	// IMP=0x00100000000d5e00
- (void)updateWithAccounts:(id)arg1;	// IMP=0x00100000000d59b5
- (id)accounts;	// IMP=0x00100000000d5971
- (void)main;	// IMP=0x00100000000d56ba
- (void)cancel;	// IMP=0x00100000000d560a
- (id)progress;	// IMP=0x00100000000d55f5
- (id)initWithManager:(id)arg1 sources:(id)arg2 searchContext:(id)arg3;	// IMP=0x00100000000d52d5

@end

