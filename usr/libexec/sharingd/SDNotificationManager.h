//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface SDNotificationManager : NSObject
{
    _Bool _activated;	// 8 = 0x8
    NSMutableDictionary *_autoFillRequests;	// 16 = 0x10
    UNUserNotificationCenter *_homePodNotifCenter;	// 24 = 0x18
    UNUserNotificationCenter *_homePodMiniNotificationCenter;	// 32 = 0x20
    _Bool _homePodNotifGranted;	// 40 = 0x28
    NSMutableDictionary *_homePodRequests;	// 48 = 0x30
    _Bool _invalidated;	// 56 = 0x38
    NSMutableDictionary *_tvKeyboardRequests;	// 64 = 0x40
    UNUserNotificationCenter *_tvNotifCenter;	// 72 = 0x48
    _Bool _tvNotifGranted;	// 80 = 0x50
    NSMutableDictionary *_watchKeyboardRequests;	// 88 = 0x58
    UNUserNotificationCenter *_watchNotifCenter;	// 96 = 0x60
    _Bool _watchNotifGranted;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 112 = 0x70
}

+ (id)sharedManager;	// IMP=0x0020000000170228
- (void).cxx_destruct;	// IMP=0x00200000001784a9
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)testWatchKeyboardAutoFill;	// IMP=0x00100000001783b0
- (void)testWatchKeyboard;	// IMP=0x00100000001782e4
- (void)testKeyboardUpdate;	// IMP=0x0010000000178217
- (void)testKeyboardRemove;	// IMP=0x001000000017814b
- (void)testKeyboardPostAutoFill;	// IMP=0x001000000017806b
- (void)testKeyboardPost;	// IMP=0x0010000000177f9d
- (void)testHandoffPost;	// IMP=0x0010000000177e0c
- (void)testAutoFillRemove;	// IMP=0x0010000000177d40
- (void)testAutofillPost;	// IMP=0x0010000000177c74
- (void)testPostBasic;	// IMP=0x0010000000177b3d
- (void)testPost:(id)arg1;	// IMP=0x0010000000177969
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001773f1
- (void)_homePodHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000176eef
- (void)_homePodHandoffUpdateIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x00100000001769ea
- (void)homePodHandoffUpdateIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x0010000000176912
- (void)_homePodHandoffRemoveAll;	// IMP=0x0010000000176862
- (void)homePodHandoffRemoveAll;	// IMP=0x0010000000176801
- (void)_homePodHandoffRemove:(id)arg1 reason:(long long)arg2;	// IMP=0x0010000000176592
- (void)homePodHandoffRemove:(id)arg1 reason:(long long)arg2;	// IMP=0x00100000001764da
- (void)_homePodHandoffPostIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x0010000000176303
- (void)homePodHandoffPostIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x001000000017622b
- (id)homePodHandoffContentForDevice:(id)arg1 info:(id)arg2;	// IMP=0x0010000000175d2f
- (void)_watchHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000175c94
- (void)_watchKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x0010000000175618
- (void)watchKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x0010000000175540
- (void)_watchKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x00100000001750c5
- (void)watchKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x0010000000174fed
- (void)_watchKeyboardRemoveAll;	// IMP=0x0010000000174f69
- (void)watchKeyboardRemoveAll;	// IMP=0x0010000000174f08
- (void)_watchKeyboardRemove:(id)arg1;	// IMP=0x0010000000174d82
- (void)watchKeyboardRemove:(id)arg1;	// IMP=0x0010000000174cda
- (void)_watchKeyboardPostIfNeeded:(id)arg1;	// IMP=0x0010000000174b5b
- (void)watchKeyboardPostIfNeeded:(id)arg1;	// IMP=0x0010000000174ab3
- (id)watchKeyboardContentForDevice:(id)arg1;	// IMP=0x0010000000174782
- (void)_tvAutoFillRemoveAll;	// IMP=0x00100000001746f2
- (void)tvAutoFillRemoveAll;	// IMP=0x0010000000174691
- (void)_tvAutoFillRemove:(id)arg1;	// IMP=0x001000000017450b
- (void)tvAutoFillRemove:(id)arg1;	// IMP=0x0010000000174463
- (void)_tvAutoFillPostIfNeeded:(id)arg1;	// IMP=0x0010000000174118
- (void)tvAutoFillPostIfNeeded:(id)arg1;	// IMP=0x0010000000174070
@property(readonly, copy, nonatomic) NSSet *activeTVAutoFillPrompts;
- (void)_riServerUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x001000000017397a
- (void)riServerUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x00100000001738a2
- (void)_riServerUpdate:(id)arg1 info:(id)arg2;	// IMP=0x0010000000173427
- (void)riServerUpdate:(id)arg1 info:(id)arg2;	// IMP=0x001000000017334f
- (void)_riServerRemoveAll;	// IMP=0x00100000001732cb
- (void)riServerRemoveAll;	// IMP=0x001000000017326a
- (void)_riServerRemove:(id)arg1;	// IMP=0x00100000001730e4
- (void)riServerRemove:(id)arg1;	// IMP=0x001000000017303c
- (void)_riServerPostIfNeeded:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x0010000000172e95
- (void)riServerPostIfNeeded:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x0010000000172ddd
- (id)riServerContentForDevice:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x0010000000172af0
- (void)_tvHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000017248a
- (id)attachmentFromURL:(id)arg1;	// IMP=0x0010000000172287
- (void)_addRequestWithID:(id)arg1 content:(id)arg2 type:(unsigned int)arg3 isHomePodMini:(_Bool)arg4;	// IMP=0x0010000000171993
- (void)_addRequestWithID:(id)arg1 content:(id)arg2 type:(unsigned int)arg3;	// IMP=0x001000000017197e
- (void)_homePodEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000171211
- (void)_watchEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000170e62
- (void)_riServerEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000170aa6
- (void)_update;	// IMP=0x0010000000170a48
- (void)prefsChanged;	// IMP=0x0010000000170a36
- (void)_invalidate;	// IMP=0x00100000001709e9
- (void)invalidate;	// IMP=0x0010000000170988
- (void)_activate;	// IMP=0x0010000000170907
- (void)activate;	// IMP=0x00100000001708a4
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x001000000017027d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

