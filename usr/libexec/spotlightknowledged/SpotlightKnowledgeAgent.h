//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpotlight/CSXPCConnection.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface SpotlightKnowledgeAgent : CSXPCConnection
{
    NSObject<OS_dispatch_queue> *_knowledgedQueue;	// 8 = 0x8
}

+ (id)sharedKnowledgeAgent;	// IMP=0x0040000000001269
+ (void)initialize;	// IMP=0x0010000000001210
- (void).cxx_destruct;	// IMP=0x0020000000002690
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *knowledgedQueue; // @synthesize knowledgedQueue=_knowledgedQueue;
- (void)_runKnowledgeDebugReportWithGroup:(id)arg1 activity:(id)arg2;	// IMP=0x00100000000024cc
- (void)_runKnowledgeDebugResetWithGroup:(id)arg1 activity:(id)arg2;	// IMP=0x00100000000023f7
- (void)_runKnowledgeDebugUpdateWithGroup:(id)arg1 activity:(id)arg2;	// IMP=0x00100000000022ef
- (void)_runKnowledgeUpdateWithGroup:(id)arg1 activity:(id)arg2 deviceUnlocked:(_Bool)arg3;	// IMP=0x00100000000021d6
- (void)didReceiveMemoryPressureNotification:(unsigned long long)arg1;	// IMP=0x0010000000002142
- (void)didReceiveSignal:(unsigned long long)arg1;	// IMP=0x00100000000020a1
- (_Bool)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;	// IMP=0x0010000000001f51
- (_Bool)addClientConnectionIfAllowedForConnection:(id)arg1;	// IMP=0x0010000000001de2
- (void)_setup;	// IMP=0x0010000000001348
- (void)beginActivity:(id)arg1 name:(const char *)arg2 knowledgedQueue:(id)arg3;	// IMP=0x00100000000012a9
- (_Bool)start;	// IMP=0x001000000000127a

@end
