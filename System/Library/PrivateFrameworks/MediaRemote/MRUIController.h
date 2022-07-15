//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol MRUIServerXPCProtocol;

__attribute__((visibility("hidden")))
@interface MRUIController : NSObject
{
    _Bool _hasLockScreenControlsAssertion;	// 8 = 0x8
    _Bool _hasQuickControlsAssertion;	// 9 = 0x9
    _Bool _hasScreenMirroringQuickControlsAssertion;	// 10 = 0xa
    _Bool _shouldRestoreState;	// 11 = 0xb
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000021d92d
@property(nonatomic) _Bool shouldRestoreState; // @synthesize shouldRestoreState=_shouldRestoreState;
@property(nonatomic) _Bool hasScreenMirroringQuickControlsAssertion; // @synthesize hasScreenMirroringQuickControlsAssertion=_hasScreenMirroringQuickControlsAssertion;
@property(nonatomic) _Bool hasQuickControlsAssertion; // @synthesize hasQuickControlsAssertion=_hasQuickControlsAssertion;
@property(nonatomic) _Bool hasLockScreenControlsAssertion; // @synthesize hasLockScreenControlsAssertion=_hasLockScreenControlsAssertion;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
- (id)contextForSessionIdentifier:(id)arg1;	// IMP=0x000000000021d7ab
- (void)releaseScreenMirroringQuickControlsAssertion;	// IMP=0x000000000021d74f
- (void)acquireScreenMirroringQuickControlsAssertion;	// IMP=0x000000000021d6f0
- (void)releaseQuickControlsAssertion;	// IMP=0x000000000021d694
- (id)acquireQuickControlsAssertion;	// IMP=0x000000000021d545
- (void)releaseLockScreenControlsAssertion;	// IMP=0x000000000021d4e9
- (void)acquireLockScreenControlsAssertion;	// IMP=0x000000000021d48a
@property(readonly, nonatomic) id <MRUIServerXPCProtocol> server;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (_Bool)hasUIAssertions;	// IMP=0x000000000021ce15
- (void)dealloc;	// IMP=0x000000000021cbca
- (void)_restoreState;	// IMP=0x000000000021c8fb
- (id)init;	// IMP=0x000000000021c837

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
