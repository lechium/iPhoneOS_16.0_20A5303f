//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSMutableArray, NSMutableDictionary, NSString, NSURL, VSJSApp, VSStateMachine;
@protocol OS_dispatch_source, VSUserAccountUpdateManagerDelegate;

__attribute__((visibility("hidden")))
@interface VSUserAccountUpdateManager : NSObject
{
    id <VSUserAccountUpdateManagerDelegate> _delegate;	// 8 = 0x8
    NSArray *_userAccounts;	// 16 = 0x10
    NSMutableArray *_updatedUserAccounts;	// 24 = 0x18
    NSMutableDictionary *_accountsByUpdateURL;	// 32 = 0x20
    VSStateMachine *_stateMachine;	// 40 = 0x28
    VSJSApp *_currentApp;	// 48 = 0x30
    NSURL *_currentAppURL;	// 56 = 0x38
    NSMutableArray *_currentAccountsBeingUpdated;	// 64 = 0x40
    NSArray *_currentUpdatedAccounts;	// 72 = 0x48
    NSError *_currentUpdateError;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_watchdog;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000036755
@property(retain, nonatomic) NSObject<OS_dispatch_source> *watchdog; // @synthesize watchdog=_watchdog;
@property(retain, nonatomic) NSError *currentUpdateError; // @synthesize currentUpdateError=_currentUpdateError;
@property(retain, nonatomic) NSArray *currentUpdatedAccounts; // @synthesize currentUpdatedAccounts=_currentUpdatedAccounts;
@property(retain, nonatomic) NSMutableArray *currentAccountsBeingUpdated; // @synthesize currentAccountsBeingUpdated=_currentAccountsBeingUpdated;
@property(retain, nonatomic) NSURL *currentAppURL; // @synthesize currentAppURL=_currentAppURL;
@property(retain, nonatomic) VSJSApp *currentApp; // @synthesize currentApp=_currentApp;
@property(retain, nonatomic) VSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSMutableDictionary *accountsByUpdateURL; // @synthesize accountsByUpdateURL=_accountsByUpdateURL;
@property(retain, nonatomic) NSMutableArray *updatedUserAccounts; // @synthesize updatedUserAccounts=_updatedUserAccounts;
@property(copy, nonatomic) NSArray *userAccounts; // @synthesize userAccounts=_userAccounts;
@property(nonatomic) __weak id <VSUserAccountUpdateManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)appDidStop:(id)arg1;	// IMP=0x00000000000365de
- (void)appDidStart:(id)arg1;	// IMP=0x000000000003659a
- (void)app:(id)arg1 didFailToStartWithError:(id)arg2;	// IMP=0x0000000000036543
- (void)app:(id)arg1 prewarmWithContext:(id)arg2;	// IMP=0x00000000000364ce
- (void)transitionToNotifyingFinishState;	// IMP=0x0000000000036421
- (void)transitionToNotifyingForUserAccountSetState;	// IMP=0x00000000000362d9
- (void)transitionToStoppingAppState;	// IMP=0x0000000000036259
- (void)transitionToInvokingOnRequestCallbackState;	// IMP=0x0000000000035db6
- (void)transitionToBootingAppState;	// IMP=0x0000000000035d23
- (void)transitionToEnqueuingNextUserAccountSetState;	// IMP=0x0000000000035b91
- (void)_configureWatchdogWithSeconds:(unsigned long long)arg1;	// IMP=0x000000000003589b
- (id)_accountsByUrlWithAccounts:(id)arg1;	// IMP=0x0000000000035607
- (id)_requestOptionsWithUserAccounts:(id)arg1 callback:(id)arg2;	// IMP=0x00000000000354f3
- (void)updateUserAccounts;	// IMP=0x0000000000035459
- (id)initWithUserAccounts:(id)arg1;	// IMP=0x000000000003515b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

