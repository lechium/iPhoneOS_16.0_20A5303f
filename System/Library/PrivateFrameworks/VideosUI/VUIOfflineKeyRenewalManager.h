//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSTimer, TVPStateMachine;

__attribute__((visibility("hidden")))
@interface VUIOfflineKeyRenewalManager : NSObject
{
    _Bool _networkErrorOccurredDuringInvalidation;	// 8 = 0x8
    TVPStateMachine *_stateMachine;	// 16 = 0x10
    NSMutableArray *_keyLoaders;	// 24 = 0x18
    NSTimer *_keyRenewalTimer;	// 32 = 0x20
    NSTimer *_expirationTimer;	// 40 = 0x28
    NSMutableArray *_contentKeySessions;	// 48 = 0x30
    unsigned long long _backgroundTaskIdentifier;	// 56 = 0x38
    NSMutableArray *_downloadsForRepairingKeys;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x001000000027c69f
- (void).cxx_destruct;	// IMP=0x0000000000282ead
@property(retain, nonatomic) NSMutableArray *downloadsForRepairingKeys; // @synthesize downloadsForRepairingKeys=_downloadsForRepairingKeys;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(retain, nonatomic) NSMutableArray *contentKeySessions; // @synthesize contentKeySessions=_contentKeySessions;
@property(retain, nonatomic) NSTimer *expirationTimer; // @synthesize expirationTimer=_expirationTimer;
@property(retain, nonatomic) NSTimer *keyRenewalTimer; // @synthesize keyRenewalTimer=_keyRenewalTimer;
@property(nonatomic) _Bool networkErrorOccurredDuringInvalidation; // @synthesize networkErrorOccurredDuringInvalidation=_networkErrorOccurredDuringInvalidation;
@property(retain, nonatomic) NSMutableArray *keyLoaders; // @synthesize keyLoaders=_keyLoaders;
@property(retain, nonatomic) TVPStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (void)_registerStateMachineHandlers;	// IMP=0x000000000027d922
- (void)_fetchNewKeysForVideosWithBrokenKeys:(id)arg1;	// IMP=0x000000000027d55c
- (void)_sendRenewalRequestForFirstArray:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000027d110
- (void)_expirationTimerDidFire:(id)arg1;	// IMP=0x000000000027d0ba
- (void)_renewalTimerDidFire:(id)arg1;	// IMP=0x000000000027d064
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x000000000027d020
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x000000000027cfdc
- (void)_isPlaybackUIBeingShownDidChange:(id)arg1;	// IMP=0x000000000027ceae
- (void)_networkReachbilityDidChange:(id)arg1;	// IMP=0x000000000027cd80
- (void)download:(id)arg1 didChangeStateTo:(long long)arg2;	// IMP=0x000000000027cc8c
- (void)storeFPSKeyLoader:(id)arg1 didLoadOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3;	// IMP=0x000000000027ca54
- (void)updateKeyRenewalAndExpiration;	// IMP=0x000000000027ca10
- (id)init;	// IMP=0x000000000027c757

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
