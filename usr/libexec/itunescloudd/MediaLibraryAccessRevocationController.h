//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSNumber, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MediaLibraryAccessRevocationController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSNumber *_activeAccountDSID;	// 16 = 0x10
    NSDictionary *_cookieHeadersForRevokingMusicUserTokens;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_notificationCoalescingTimer;	// 32 = 0x20
    _Bool _isObservingNotificationsForDataNeededUponSignOut;	// 40 = 0x28
    NSDictionary *_identifiersOfApplicationsWithGrantedAccessToMediaLibraryIncludingTCCAcceptanceDates;	// 48 = 0x30
    int _tccAccessChangedNotificationToken;	// 56 = 0x38
    _Bool _isObservingTCCAccessChangedNotification;	// 60 = 0x3c
    NSXPCListener *_listener;	// 64 = 0x40
    NSMutableDictionary *_replyBlocksForPID;	// 72 = 0x48
}

+ (id)_identifiersOfApplicationsWithGrantedAccessToMediaLibrary;	// IMP=0x00200000000af0e2
+ (id)sharedController;	// IMP=0x00100000000af0b2
- (void).cxx_destruct;	// IMP=0x00200000000ad9c8
- (id)_storeRequestContextWithIdentity:(id)arg1 clientInfo:(id)arg2;	// IMP=0x00100000000ad8f8
- (void)_updateDataNeededUponSignOut;	// IMP=0x00100000000ad564
- (void)_stopObservingRevocations;	// IMP=0x00100000000ad480
- (void)_startObservingRevocations;	// IMP=0x00100000000ad285
- (void)_notificationCoalescingTimerDidExpire;	// IMP=0x00100000000ad23a
- (void)_scheduleUpdateOfDataNeededUponSignOut;	// IMP=0x00100000000ad1ef
- (void)_registerFailureToRevokeMusicUserTokensForApplicationsWithIdentifiers:(id)arg1 error:(id)arg2;	// IMP=0x00100000000ad119
- (void)_revokeMusicUserTokensForApplicationWithIdentifier:(id)arg1 revokeMusicUserTokenURL:(id)arg2 identity:(id)arg3 explicitDSID:(id)arg4 explicitCookieHeaders:(id)arg5;	// IMP=0x00100000000acca9
- (void)_revokeMusicUserTokensForApplicationsWithIdentifiers:(id)arg1;	// IMP=0x00100000000acb85
- (void)_displayNotificationForBuilder:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000aca57
- (void)_checkForRecentRevocations;	// IMP=0x00100000000ac671
- (id)_identifiersOfApplicationsWithExpiredAccessToMediaLibrary;	// IMP=0x00100000000ac395
- (void)validateExpirationForBundleIdentifier:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000abb5d
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000ab98f
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x00100000000ab97d
- (void)stopObservingRevocations;	// IMP=0x00100000000ab932
- (void)startObservingRevocations;	// IMP=0x00100000000ab8e7
- (void)dealloc;	// IMP=0x00100000000ab87c
- (id)_init;	// IMP=0x00100000000ab79a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

