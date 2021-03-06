//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, RTCActivityScheduler, RTCActivitySchedulerOptions, RTCSelfReporter;
@protocol OS_dispatch_queue;

@interface ReportingdAgent : NSObject
{
    NSMutableDictionary *_processActiveSessions;	// 8 = 0x8
    NSMutableArray *_sessionList;	// 16 = 0x10
    NSMutableDictionary *_cachedStorebags;	// 24 = 0x18
    NSMutableDictionary *_correlatedSessions;	// 32 = 0x20
    NSMutableArray *_emphemeralSessions;	// 40 = 0x28
    NSMutableDictionary *_sharedData;	// 48 = 0x30
    NSMutableDictionary *_sharedConnectivityHelpers;	// 56 = 0x38
    unsigned short _OSTransactionReferenceCounter;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_stateQueue;	// 72 = 0x48
    RTCActivitySchedulerOptions *_optionsForNormalScheduling;	// 80 = 0x50
    RTCActivitySchedulerOptions *_optionsForPeriodicRealtimeScheduling;	// 88 = 0x58
    RTCActivitySchedulerOptions *_optionsForAllRealtimeScheduling;	// 96 = 0x60
    RTCActivityScheduler *_normalActivityScheduler;	// 104 = 0x68
    RTCActivityScheduler *_periodicRealtimeActivityScheduler;	// 112 = 0x70
    RTCActivityScheduler *_allRealtimeActivityScheduler;	// 120 = 0x78
    RTCSelfReporter *_selfReporter;	// 128 = 0x80
    unsigned char _activeClients[55];	// 136 = 0x88
    NSDate *_nextAllowedStorebagNetworkFetchRequest;	// 192 = 0xc0
    struct os_unfair_lock_s _lock;	// 200 = 0xc8
    NSMutableDictionary *_overLimitReportedClient;	// 208 = 0xd0
}

- (void)fetchAndCacheStorebag:(int)arg1 forBundleID:(id)arg2 andUserInfo:(id)arg3;	// IMP=0x001000000001c7f4
- (void)networkFetchDidFail;	// IMP=0x001000000001c75a
- (_Bool)canFetchNetworkStorebag;	// IMP=0x001000000001c6b1
- (id)sharedActivitySchedulerForRealtimeBackend:(_Bool)arg1 isBatching:(_Bool)arg2;	// IMP=0x001000000001c68e
- (id)sharedDataForSession:(id)arg1;	// IMP=0x001000000001c659
- (void)removeObjectFromSharedDataForSession:(id)arg1 key:(id)arg2;	// IMP=0x001000000001c605
- (void)updateSharedDataForSession:(id)arg1 sharedData:(id)arg2;	// IMP=0x001000000001c56d
- (_Bool)isActiveClientLimitReachedForSession:(id)arg1 sessionInfo:(id)arg2;	// IMP=0x001000000001c384
- (void)copyReportingAgentState:(id *)arg1 cachedStorebags:(id *)arg2;	// IMP=0x001000000001c283
- (void)saveEphemeralSessions;	// IMP=0x001000000001c271
- (id)getEphemeralSessions;	// IMP=0x001000000001c267
- (id)getSelfReporter;	// IMP=0x001000000001c25a
- (void)updateDownstreamSessions:(id)arg1;	// IMP=0x001000000001bf4d
- (id)getAncestorWithAggregatorForSession:(id)arg1;	// IMP=0x001000000001be8d
- (id)parentSessionForChild:(id)arg1;	// IMP=0x001000000001bd27
- (void)updateCorrelatedSessions:(id)arg1;	// IMP=0x001000000001b9a6
- (id)getFirstSessionWithHierarchy:(unsigned int)arg1 inSessionList:(id)arg2;	// IMP=0x001000000001b882
- (id)parentSessionIDStringForSession:(id)arg1;	// IMP=0x001000000001b5be
- (id)storebagVersionForSession:(id)arg1;	// IMP=0x001000000001b500
- (id)storebagForSession:(id)arg1;	// IMP=0x001000000001b022
- (void)setSelfReporter:(id)arg1;	// IMP=0x001000000001aff3
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000001aaa2
- (void)saveEphermalSessionsToDisk;	// IMP=0x001000000001a8e3
- (void)loadOrCreateEphemeralSessionsLookup;	// IMP=0x001000000001a5cf
- (void)overLimitPID:(int)arg1 processName:(id)arg2;	// IMP=0x001000000001a12e
- (void)perPIDInfo:(int)arg1;	// IMP=0x0010000000019e5e
- (id)bundleIDforXPCConnection:(id)arg1 forProcessName:(id)arg2;	// IMP=0x0010000000019d1d
- (id)processNameForAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x0010000000019c6a
- (void)invalidateSession:(id)arg1;	// IMP=0x0010000000019c58
- (id)createSession;	// IMP=0x0010000000019c41
- (void)run;	// IMP=0x0010000000019bd3
- (void)dealloc;	// IMP=0x0010000000019ae6
- (id)init;	// IMP=0x0010000000019840
- (void)invalidateReportingSession:(id)arg1;	// IMP=0x001000000001953f
- (id)createReportingSessionWithDelegate:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000019455

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

