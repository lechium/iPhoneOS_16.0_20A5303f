//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSObservable, NSString;

__attribute__((visibility("hidden")))
@interface AMSAccountsChangedObservable : NSObject
{
    struct os_unfair_lock_s _notificationsLock;	// 8 = 0x8
    ACAccount *_account;	// 16 = 0x10
    NSString *_accountTypeIdentifier;	// 24 = 0x18
    AMSObservable *_observable;	// 32 = 0x20
}

+ (void)_processChangedAccount:(id)arg1;	// IMP=0x00400000000cbfa8
+ (id)sharedLocalAccountInstance;	// IMP=0x00400000000ca9c9
+ (id)sharedInstance;	// IMP=0x00400000000ca960
+ (id)createdObservablesAccessQueue;	// IMP=0x00400000000ca8b5
+ (id)createdObservables;	// IMP=0x00400000000ca7fc
- (void).cxx_destruct;	// IMP=0x00000000000cc714
@property(readonly, nonatomic) struct os_unfair_lock_s notificationsLock; // @synthesize notificationsLock=_notificationsLock;
@property(retain, nonatomic) AMSObservable *observable; // @synthesize observable=_observable;
@property(readonly, nonatomic) NSString *accountTypeIdentifier; // @synthesize accountTypeIdentifier=_accountTypeIdentifier;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (_Bool)_shouldNotifyObserversForChangedAccount:(id)arg1;	// IMP=0x00000000000cc1f1
- (void)_processChangedAccount:(id)arg1;	// IMP=0x00000000000cbcd3
- (void)_accountStoreDidChange:(id)arg1;	// IMP=0x00000000000cad15
- (void)unsubscribe:(id)arg1;	// IMP=0x00000000000caca3
- (void)subscribe:(id)arg1;	// IMP=0x00000000000cac31
- (void)dealloc;	// IMP=0x00000000000ca787
- (id)_initWithAccount:(id)arg1 accountTypeIdentifier:(id)arg2;	// IMP=0x00000000000ca37b
- (id)initWithAccountTypeIdentifier:(id)arg1;	// IMP=0x00000000000ca364
- (id)initWithAccount:(id)arg1;	// IMP=0x00000000000ca350

@end

