//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol AFAnalyticsService, OS_dispatch_group, OS_dispatch_queue;

@interface AFAnalytics : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
    id <AFAnalyticsService> _service;	// 24 = 0x18
}

+ (id)sharedAnalytics;	// IMP=0x00400000001b3be3
- (void).cxx_destruct;	// IMP=0x00100000001b5671
- (id)_service:(_Bool)arg1;	// IMP=0x00100000001b561b
- (void)_stageEvents:(id)arg1;	// IMP=0x00100000001b559b
- (void)_stageEvent:(id)arg1;	// IMP=0x00100000001b54ca
- (void)barrier:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b542b
- (void)logEvents:(id)arg1;	// IMP=0x00100000001b5383
- (void)logEvent:(id)arg1;	// IMP=0x00100000001b52db
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextResolver:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b511d
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextProvider:(CDUnknownBlockType)arg3 contextProvidingQueue:(id)arg4;	// IMP=0x00100000001b4cea
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 contextNoCopy:(_Bool)arg4;	// IMP=0x00100000001b49e4
- (void)setService:(id)arg1;	// IMP=0x00100000001b4940
- (void)boostQueuedEvents:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b4770
- (void)logInstrumentationOfType:(Class)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;	// IMP=0x00100000001b4657
- (void)logInstrumentationOfType:(Class)arg1 turnIdentifier:(id)arg2;	// IMP=0x00100000001b460a
- (void)endEventsGrouping;	// IMP=0x00100000001b4579
- (void)beginEventsGrouping;	// IMP=0x00100000001b44e8
- (MISSING_TYPE *)logInstrumentation:machAbsoluteTime:turnContext: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001b4141
- (void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;	// IMP=0x00100000001b4089
- (void)logInstrumentation:(id)arg1 turnContext:(id)arg2;	// IMP=0x00100000001b4026
- (void)logEventWithType:(long long)arg1 contextResolver:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b3fb8
- (void)logEventWithType:(long long)arg1 contextProvider:(CDUnknownBlockType)arg2 contextProvidingQueue:(id)arg3;	// IMP=0x00100000001b3f21
- (void)logEventWithType:(long long)arg1 contextProvider:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b3eb0
- (void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(_Bool)arg3;	// IMP=0x00100000001b3e33
- (void)logEventWithType:(long long)arg1 context:(id)arg2;	// IMP=0x00100000001b3dc2
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x00100000001b3d42
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x00100000001b3c89
- (id)init;	// IMP=0x00100000001b3b59
- (void)configureForDaemon;	// IMP=0x00100000000701c6
- (CDUnknownBlockType)_ad_contextLoggerWithEventType:(long long)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d7fe8

@end

