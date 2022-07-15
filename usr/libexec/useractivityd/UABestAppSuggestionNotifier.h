//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSString, NSXPCConnection, UADispatchScheduler;

@interface UABestAppSuggestionNotifier
{
    _Bool _wantsBestAppChangedNotifications;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSMutableDictionary *_supressedUntil;	// 24 = 0x18
    UADispatchScheduler *_scheduler;	// 32 = 0x20
    NSMutableDictionary *_possibleItems;	// 40 = 0x28
    NSArray *_lastItemUUIDs;	// 48 = 0x30
    NSArray *_lastItemWhens;	// 56 = 0x38
    NSString *_lastItemStr;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000000d689
@property(copy) NSString *lastItemStr; // @synthesize lastItemStr=_lastItemStr;
@property(copy) NSArray *lastItemWhens; // @synthesize lastItemWhens=_lastItemWhens;
@property(copy) NSArray *lastItemUUIDs; // @synthesize lastItemUUIDs=_lastItemUUIDs;
@property(retain) NSMutableDictionary *possibleItems; // @synthesize possibleItems=_possibleItems;
@property(retain) UADispatchScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(retain) NSMutableDictionary *supressedUntil; // @synthesize supressedUntil=_supressedUntil;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)doQueueFetchOfPayloadForBestAppSuggestion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d1e4
- (void)doUnregisterForBestAppChangeNotification;	// IMP=0x001000000000d068
- (void)doRegisterForBestAppChangeNotification;	// IMP=0x001000000000cf12
- (void)doLaunchFollowUp:(id)arg1 interactionType:(unsigned long long)arg2 cancelled:(_Bool)arg3;	// IMP=0x001000000000c102
- (void)doRemoveBestAppSuggestion:(id)arg1 options:(id)arg2;	// IMP=0x001000000000b865
- (void)doDetermineBestAppSuggestions:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b7df
- (void)fetchAllNearbyAppSuggestions:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b750
- (void)doDetermineBestAppSuggestionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b1bd
- (void)doStartBestAppSuggestion:(double)arg1;	// IMP=0x001000000000b1b7
- (void)doConnected;	// IMP=0x001000000000b077
- (id)statusString;	// IMP=0x001000000000ae04
- (_Bool)terminate;	// IMP=0x001000000000ad78
- (_Bool)resume;	// IMP=0x001000000000acb9
- (_Bool)suspend;	// IMP=0x001000000000abfa
- (_Bool)active;	// IMP=0x001000000000ab99
- (void)update;	// IMP=0x0010000000009cfd
- (void)notifyBestAppsChanged:(id)arg1 atTime:(id)arg2;	// IMP=0x0010000000008e64
- (id)bestCornerItemsFromItems:(id)arg1;	// IMP=0x0010000000007fbd
- (id)userActivityInfoForUUID:(id)arg1;	// IMP=0x0010000000007bc8
- (void)setItems:(id)arg1;	// IMP=0x00100000000077e2
- (id)items;	// IMP=0x001000000000773b
- (_Bool)requiresBoosted;	// IMP=0x0010000000007733
@property _Bool wantsBestAppChangedNotifications; // @synthesize wantsBestAppChangedNotifications=_wantsBestAppChangedNotifications;
- (id)initWithManager:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000006d98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
