//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, StoreKitAppLaunchObserver, StoreKitMessagesDatabaseStore;
@protocol OS_dispatch_queue;

@interface StoreKitMessagesManager : NSObject
{
    StoreKitMessagesDatabaseStore *_databaseStore;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_showMessageQueue;	// 24 = 0x18
    NSOperationQueue *_checkMessagesQueue;	// 32 = 0x20
    StoreKitAppLaunchObserver *_observer;	// 40 = 0x28
}

+ (id)sharedManager;	// IMP=0x0020000000266d66
- (void).cxx_destruct;	// IMP=0x002000000026bba7
- (void)_presentEngagementTaskWithURL:(id)arg1 account:(id)arg2 clientInfo:(id)arg3 bag:(id)arg4;	// IMP=0x001000000026b77e
- (void)handleAppUninstallWithBundleIDs:(id)arg1;	// IMP=0x001000000026b768
- (void)handleAppInstallWithBundleIDs:(id)arg1;	// IMP=0x001000000026b69d
- (void)_accountDidChange:(id)arg1;	// IMP=0x001000000026b66b
- (void)appDidLaunchWithBundleID:(id)arg1;	// IMP=0x001000000026b59c
- (void)_handleObservationsForCurrentAccount;	// IMP=0x001000000026b4f4
- (void)_displayMessageForProdAccount:(id)arg1 bundleID:(id)arg2;	// IMP=0x001000000026b285
- (id)_storeKitConnectionForBundleID:(id)arg1;	// IMP=0x001000000026b06a
- (id)_bundleIDsWithMessagesInBundleIDs:(id)arg1 account:(id)arg2;	// IMP=0x001000000026ae59
- (_Bool)_accountHasMessagesForBundleID:(id)arg1 bundleID:(id)arg2;	// IMP=0x001000000026ac8e
- (id)_bundleIDsWithMessagesForAccount:(id)arg1;	// IMP=0x001000000026aaaa
- (void)addMessageForBundleID:(id)arg1 accountDSID:(id)arg2 status:(long long)arg3 allowDeveloperControl:(_Bool)arg4 type:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000026a998
- (void)addMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000026a5b7
- (void)_removeRevocationsForAccountID:(id)arg1 inApp:(id)arg2;	// IMP=0x001000000026a4db
- (void)_getRevocationsForAccountID:(id)arg1 inApp:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000026a145
- (void)addRevocationsForProductIdentifiers:(id)arg1 forBundleID:(id)arg2 forAccountID:(id)arg3;	// IMP=0x0010000000269d3e
- (void)checkServerForMessagesForAccount:(id)arg1 bag:(id)arg2 bundleID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000269c84
- (void)_checkServerForMessagesForAccount:(id)arg1 bag:(id)arg2 messageInfo:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000269b85
- (void)fetchRevocationsForOctaneWithBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000269afe
- (void)fetchRevocationsForAccount:(id)arg1 inApp:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000002699bd
- (void)_showMessageForOctaneWithURL:(id)arg1 inApp:(id)arg2 messageType:(long long)arg3;	// IMP=0x00100000002696ed
- (void)_showMessage:(id)arg1 forAccount:(id)arg2 inApp:(id)arg3 messageType:(long long)arg4 useItmsUI:(_Bool)arg5 clientInfo:(id)arg6 bag:(id)arg7;	// IMP=0x001000000026911b
- (void)messageURLForAccount:(id)arg1 bag:(id)arg2 messageInfo:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000269109
- (id)messageInfoForAccount:(id)arg1 inApp:(id)arg2 messageType:(id)arg3 isOctane:(_Bool)arg4;	// IMP=0x0010000000268e2a
- (void)displayMessageWithType:(id)arg1 forClient:(id)arg2 processInfo:(id)arg3;	// IMP=0x00100000002685f0
- (void)askToShowMessageForClient:(id)arg1 message:(id)arg2 pendingURL:(id)arg3 processInfo:(id)arg4 remoteObjectProxy:(id)arg5;	// IMP=0x0010000000267ed3
- (void)checkForMessagesForClient:(id)arg1 processInfo:(id)arg2 remoteObjectProxy:(id)arg3;	// IMP=0x0010000000267919
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x0010000000267012
- (id)init;	// IMP=0x0010000000266deb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

