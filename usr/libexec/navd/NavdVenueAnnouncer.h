//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsBudget, MapsSuggestionsEngineRunner, MapsSuggestionsLocationChangedTrigger, MapsSuggestionsNetworkReachableTrigger, MapsSuggestionsOutsideOfMapItemFenceCondition, NSDictionary, NSString, NavdVenueNavigationSessionTrigger;
@protocol MapsSuggestionsNetworkRequester, OS_dispatch_queue;

@interface NavdVenueAnnouncer : NSObject
{
    MapsSuggestionsEngineRunner *_engineRunner;	// 8 = 0x8
    id <MapsSuggestionsNetworkRequester> _network;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    struct _State _state;	// 32 = 0x20
    NSDictionary *_lastEngineRunnerState;	// 40 = 0x28
    MapsSuggestionsLocationChangedTrigger *_locationChangedTrigger;	// 48 = 0x30
    MapsSuggestionsNetworkReachableTrigger *_networkReachableTrigger;	// 56 = 0x38
    NavdVenueNavigationSessionTrigger *_navSessionTrigger;	// 64 = 0x40
    MapsSuggestionsOutsideOfMapItemFenceCondition *_outsideOfMapItemFenceCondition;	// 72 = 0x48
    MapsSuggestionsBudget *_budget;	// 80 = 0x50
    NSDictionary *_sharedRegister;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000003bd9e
- (void)writeBudgetState:(id)arg1;	// IMP=0x001000000003bd87
- (id)readBudgetState;	// IMP=0x001000000003bd70
@property(readonly, nonatomic) NSString *uniqueName;
- (void)_logStateForStep:(id)arg1 stopReason:(id)arg2;	// IMP=0x001000000003b9cf
- (void)_logStateForStep:(id)arg1;	// IMP=0x001000000003b9bb
- (void)engineRunner:(id)arg1 step:(id)arg2 jsonDict:(id)arg3;	// IMP=0x001000000003b8e9
- (void)engineRunner:(id)arg1 receivedEntries:(id)arg2;	// IMP=0x001000000003b8e3
- (void)engineRunner:(id)arg1 startedBecauseOfTrigger:(id)arg2;	// IMP=0x001000000003b792
- (void)_fireNotificationIfAtEntry:(id)arg1;	// IMP=0x0010000000039e3e
- (BOOL)_terminalMapItemForEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039644
- (BOOL)_airportMapItemForEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038d16
- (void)_treatGateEntry:(id)arg1;	// IMP=0x0010000000038742
- (void)_treatTerminalEntry:(id)arg1;	// IMP=0x00100000000382b0
- (void)_treatAirportEntry:(id)arg1;	// IMP=0x0010000000037e2a
- (void)_processEntries:(id)arg1;	// IMP=0x001000000003751c
- (void)engineRunner:(id)arg1 stoppedWithEntries:(id)arg2;	// IMP=0x00100000000372f3
- (void)_cleanup;	// IMP=0x001000000003726a
- (id)initFromResourceDepot:(id)arg1 sharedRegister:(id)arg2;	// IMP=0x0010000000036725

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
