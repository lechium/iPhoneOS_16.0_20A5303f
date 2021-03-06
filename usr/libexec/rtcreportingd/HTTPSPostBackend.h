//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, NSNumber, NSOperationQueue, NSString;

@interface HTTPSPostBackend
{
    NSString *_postURL;	// 256 = 0x100
    _Bool _useDefaultPostURL;	// 264 = 0x108
    NSString *_realtimePostURL;	// 272 = 0x110
    _Bool _useDefaultRealtimePostURL;	// 280 = 0x118
    NSMutableArray *_batchedEvents;	// 288 = 0x120
    NSOperationQueue *_queue;	// 296 = 0x128
    int _eventThreshold;	// 304 = 0x130
    int _extrasOnInternal;	// 308 = 0x134
    NSNumber *_overrideSampling;	// 312 = 0x138
    NSMutableDictionary *_eventMethodCounts;	// 320 = 0x140
    NSString *_uuidCustom;	// 328 = 0x148
    _Bool _forceEventLogging;	// 336 = 0x150
    _Bool _immutable;	// 337 = 0x151
    NSString *_headerClientName;	// 344 = 0x158
    NSString *_headerServiceName;	// 352 = 0x160
}

@property(copy) NSString *postURL; // @synthesize postURL=_postURL;
- (unsigned long long)batchedEventsSize;	// IMP=0x00100000000242ae
- (void)setCorrelatedSessionID:(id)arg1;	// IMP=0x00100000000240e6
- (id)flushMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000239c0
- (id)sendMessage:(id)arg1 timestamp:(const struct timeval *)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5 flag:(int)arg6;	// IMP=0x0010000000023481
- (int)updateState;	// IMP=0x0010000000023445
- (int)updateBackendStateForClientName:(id)arg1 serviceID:(id)arg2 countryCode:(id)arg3 client:(id)arg4;	// IMP=0x0010000000022c14
- (int)updateBackendState;	// IMP=0x00100000000224fc
- (_Bool)isFrameworkEnabledForClient:(id)arg1;	// IMP=0x0010000000022391
- (void)resetBackendStateWithClient:(id)arg1;	// IMP=0x00100000000222c9
- (_Bool)updatePostLink:(id)arg1;	// IMP=0x001000000002213b
- (void)postJSONMessage:(id)arg1 withFlag:(int)arg2 method:(id)arg3 responseCode:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000219f7
- (id)createMessageForPostAndLogging:(id)arg1 prettyJsonString:(id *)arg2;	// IMP=0x001000000002100e
- (void)prepareEventForMessage:(id)arg1 frameworkData:(id)arg2;	// IMP=0x0010000000020f83
- (id)batchEvent:(id)arg1;	// IMP=0x0010000000020c73
- (id)newEventDictfromPayload:(id)arg1 timestamp:(const struct timeval *)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5;	// IMP=0x0010000000020825
- (void)dealloc;	// IMP=0x0010000000020779
- (id)initWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3;	// IMP=0x001000000002043f

@end

