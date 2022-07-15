//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount;
@protocol OS_dispatch_queue;

@interface ActiveAccountObserver : NSObject
{
    ACAccount *_account;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    ACAccount *_activeAccount;	// 24 = 0x18
    ACAccount *_activeSandboxAccount;	// 32 = 0x20
}

+ (_Bool)_shouldNotifyChangeFromExistingAccount:(id)arg1 toCurrentAccount:(id)arg2;	// IMP=0x00200000000927c8
+ (void)_postAccountDidChangeFromOldAccount:(id)arg1 withAccountStore:(id)arg2;	// IMP=0x001000000009252f
+ (id)activeSandboxAccount;	// IMP=0x0010000000091c07
+ (id)activeAccount;	// IMP=0x0010000000091bb0
+ (id)sharedInstance;	// IMP=0x0010000000091940
- (void).cxx_destruct;	// IMP=0x0020000000092a47
@property(readonly) ACAccount *activeSandboxAccount; // @synthesize activeSandboxAccount=_activeSandboxAccount;
@property(readonly) ACAccount *activeAccount; // @synthesize activeAccount=_activeAccount;
- (void)handleAccountStoreDidChangeNotification:(id)arg1;	// IMP=0x0010000000091eb4
- (void)handleSandboxAccountDidChangeNotification:(id)arg1;	// IMP=0x0010000000091c68
- (id)init;	// IMP=0x0010000000091995

@end
