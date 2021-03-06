//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore;
@protocol CloudBookmarkDatabaseCoordinating;

@interface CloudBookmarkAccountPropertiesStore : NSObject
{
    ACAccountStore *_accountStore;	// 8 = 0x8
    _Bool _dataclassEnabled;	// 16 = 0x10
    _Bool _needsDataclassEnabledCheck;	// 17 = 0x11
    _Bool _needsAccountHashCheck;	// 18 = 0x12
    id <CloudBookmarkDatabaseCoordinating> _databaseCoordinator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002ddd7
@property(readonly, nonatomic) id <CloudBookmarkDatabaseCoordinating> databaseCoordinator; // @synthesize databaseCoordinator=_databaseCoordinator;
- (void)_accountPropertiesDidChange:(id)arg1;	// IMP=0x001000000002ddbb
- (void)_accountIdentityDidChange:(id)arg1;	// IMP=0x001000000002dda9
- (void)_setNeedsAccountHashCheck;	// IMP=0x001000000002dd4f
- (void)setNeedsDataclassEnabledCheck;	// IMP=0x001000000002dcf5
- (_Bool)updateAccountHashIfNeeded;	// IMP=0x001000000002db1e
- (void)setAccountHash:(id)arg1;	// IMP=0x001000000002da98
- (id)accountHash;	// IMP=0x001000000002da2f
- (_Bool)isDatabaseOpen;	// IMP=0x001000000002d9f0
@property(readonly, nonatomic, getter=isDataclassEnabled) _Bool dataclassEnabled;
@property(readonly, nonatomic) ACAccount *account;
- (id)initWithAccountStore:(id)arg1;	// IMP=0x001000000002d846
- (id)initWithAccountStore:(id)arg1 databaseCoordinator:(id)arg2;	// IMP=0x001000000002d7d4

@end

