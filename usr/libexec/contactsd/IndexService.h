//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNIndexRequestHandler, CNPublishingSubject;
@protocol CNCancelable, CNInhibitor, CNScheduler;

@interface IndexService : NSObject
{
    _Bool _isSpotlightIndexingEnabled;	// 8 = 0x8
    CNIndexRequestHandler *_mockIndexHandler;	// 16 = 0x10
    CNPublishingSubject *_coalescer;	// 24 = 0x18
    id <CNCancelable> _coalescingToken;	// 32 = 0x20
    id <CNScheduler> _workQueue;	// 40 = 0x28
    id <CNInhibitor> _coalescingInhibitor;	// 48 = 0x30
}

+ (id)makeWorkQueueUsingSchedulerProvider:(id)arg1;	// IMP=0x002000000000b60c
+ (id)sharedInstance;	// IMP=0x001000000000b370
- (void).cxx_destruct;	// IMP=0x002000000000c118
@property(readonly, nonatomic) _Bool isSpotlightIndexingEnabled; // @synthesize isSpotlightIndexingEnabled=_isSpotlightIndexingEnabled;
@property(retain, nonatomic) id <CNInhibitor> coalescingInhibitor; // @synthesize coalescingInhibitor=_coalescingInhibitor;
@property(readonly, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) id <CNCancelable> coalescingToken; // @synthesize coalescingToken=_coalescingToken;
@property(retain, nonatomic) CNPublishingSubject *coalescer; // @synthesize coalescer=_coalescer;
@property(readonly, nonatomic) CNIndexRequestHandler *mockIndexHandler; // @synthesize mockIndexHandler=_mockIndexHandler;
- (id)indexHandler;	// IMP=0x001000000000c00e
- (id)verifyIndexLoggingSummary:(_Bool)arg1 error:(id *)arg2;	// IMP=0x001000000000bc1c
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b933
- (id)interestedNotifications;	// IMP=0x001000000000b926
- (void)handleCoalescedEvent:(id)arg1;	// IMP=0x001000000000b86e
- (void)handleNotificationName:(id)arg1;	// IMP=0x001000000000b66a
- (id)initWithMockIndexRequestHandler:(id)arg1 schedulerProvider:(id)arg2;	// IMP=0x001000000000b451
- (id)init;	// IMP=0x001000000000b3f5

@end

