//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWScheduler, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWAttentionAwareService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AWScheduler *_unitTestScheduler;	// 16 = 0x10
    NSMutableArray *_schedulers;	// 24 = 0x18
    int _supportedEventsNotify;	// 32 = 0x20
    unsigned long long _supportedEvents;	// 40 = 0x28
    unsigned long long _clientCount;	// 48 = 0x30
}

+ (id)sharedAttentionService;	// IMP=0x001000000000a698
- (void).cxx_destruct;	// IMP=0x0000000000009aa3
@property unsigned long long clientCount; // @synthesize clientCount=_clientCount;
- (void)crashWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009848
- (void)getUnitTestSamplerWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000095b5
- (void)_createUnitTestScheduler;	// IMP=0x000000000000953f
- (void)outputPowerLogWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009487
- (void)setDebugPreference:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000091d1
- (void)getDebugPreferences:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009162
- (void)getSupportedEventsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009108
- (void)setSmartCoverClosed:(_Bool)arg1;	// IMP=0x00000000000090ba
- (void)processHIDEvent:(struct __IOHIDEvent *)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x000000000000902d
- (void)addClient:(id)arg1 clientConfig:(id)arg2 clientIndex:(int)arg3 unitTestMode:(_Bool)arg4 reply:(CDUnknownBlockType)arg5 subscribeForStreamingEvents:(_Bool)arg6;	// IMP=0x0000000000008d31
- (void)clientCountChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 forScheduler:(id)arg3;	// IMP=0x0000000000008b4a
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000089f8
- (void)dealloc;	// IMP=0x00000000000089ba
- (id)init;	// IMP=0x00000000000087bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
