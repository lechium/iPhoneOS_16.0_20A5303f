//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, NSMutableSet, NSTimer;

__attribute__((visibility("hidden")))
@interface _SFSafariViewControllerPrewarmingRequestThrottler : NSObject
{
    NSHashTable *_requestedTokens;	// 8 = 0x8
    NSHashTable *_prewarmedTokens;	// 16 = 0x10
    NSMutableSet *_prewarmedURLs;	// 24 = 0x18
    NSMutableDictionary *_tokensByID;	// 32 = 0x20
    NSTimer *_requestDelayTimer;	// 40 = 0x28
    _Bool _suspended;	// 48 = 0x30
    CDUnknownBlockType _connectionHandler;	// 56 = 0x38
    double _minimumRequestDelay;	// 64 = 0x40
    unsigned long long _maximumValidConnectionCount;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000a5448
@property(nonatomic) unsigned long long maximumValidConnectionCount; // @synthesize maximumValidConnectionCount=_maximumValidConnectionCount;
@property(nonatomic) double minimumRequestDelay; // @synthesize minimumRequestDelay=_minimumRequestDelay;
@property(copy, nonatomic) CDUnknownBlockType connectionHandler; // @synthesize connectionHandler=_connectionHandler;
- (void)_didPrewarmToken:(id)arg1;	// IMP=0x00000000000a53a1
- (void)_didPartiallyPrewarmToken:(id)arg1;	// IMP=0x00000000000a538b
- (id)_prewarmedURLsWithValidTokens;	// IMP=0x00000000000a5157
- (id)_URLsToPrewarmForToken:(id)arg1;	// IMP=0x00000000000a50f0
- (id)_nextTokenToPrewarm;	// IMP=0x00000000000a4f17
- (void)_prewarmURLs:(id)arg1;	// IMP=0x00000000000a4ed1
- (void)_performNextRequest;	// IMP=0x00000000000a4ce2
- (void)_startRequestTimer;	// IMP=0x00000000000a4b53
- (void)_stopRequestTimer;	// IMP=0x00000000000a4b21
- (void)dealloc;	// IMP=0x00000000000a4adf
- (void)invalidateTokenWithID:(unsigned long long)arg1;	// IMP=0x00000000000a4a3a
- (void)resume;	// IMP=0x00000000000a4a24
- (void)suspend;	// IMP=0x00000000000a4a0e
- (void)requestToken:(id)arg1;	// IMP=0x00000000000a48de
- (id)init;	// IMP=0x00000000000a47e3

@end
