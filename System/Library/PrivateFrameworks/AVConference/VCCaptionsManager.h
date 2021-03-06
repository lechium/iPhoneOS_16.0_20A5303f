//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVConferenceXPCClient, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCCaptionsManager : NSObject
{
    NSMutableDictionary *_streamTokenList;	// 8 = 0x8
    AVConferenceXPCClient *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 24 = 0x18
}

+ (id)defaultManager;	// IMP=0x001000000007cf25
- (void)streamToken:(long long)arg1 didUpdateCaptions:(id)arg2;	// IMP=0x000000000007d895
- (void)streamToken:(long long)arg1 didStopCaptioningWithReason:(unsigned char)arg2;	// IMP=0x000000000007d7f2
- (void)streamToken:(long long)arg1 didStartCaptioningWithReason:(unsigned char)arg2;	// IMP=0x000000000007d74f
- (void)streamToken:(long long)arg1 didDisableCaptions:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000007d641
- (void)streamToken:(long long)arg1 didEnableCaptions:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000007d533
- (void)notifyClientsWithStreamToken:(long long)arg1 service:(char *)arg2 arguments:(id)arg3;	// IMP=0x000000000007d394
- (void)deregisterBlocksForService;	// IMP=0x000000000007d38e
- (void)registerBlocksForService;	// IMP=0x000000000007d388
- (id)captionsSourceFromClientContext:(id)arg1;	// IMP=0x000000000007d2f7
- (void)unregisterCaptionsSourceWithStreamToken:(long long)arg1;	// IMP=0x000000000007d207
- (void)registerCaptionsSource:(id)arg1 streamToken:(long long)arg2;	// IMP=0x000000000007d097
- (void)dealloc;	// IMP=0x000000000007d014
- (id)init;	// IMP=0x000000000007cf74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

