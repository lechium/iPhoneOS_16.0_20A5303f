//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, SSMetricsEventController;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MetricsController : NSObject
{
    long long _backoffRetryCount;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_backoffRetryTimer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    SSMetricsEventController *_eventController;	// 32 = 0x20
    ISOperationQueue *_operationQueue;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x004000000017640b
- (void).cxx_destruct;	// IMP=0x0020000000178314
- (void)_sendUnentitledResponseToMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001780e1
- (void)_scheduleBackoffRetry;	// IMP=0x0010000000177cd6
- (void)_reportEventsIfNeeded;	// IMP=0x00100000001779b3
- (void)_reportEvents;	// IMP=0x00100000001776b7
- (id)_operationQueue;	// IMP=0x00100000001775fb
- (_Bool)_hasEntitlements:(id)arg1;	// IMP=0x00100000001775a0
- (void)_cancelBackoffRetryTimer;	// IMP=0x001000000017756a
- (void)_cancelBackoffRetry;	// IMP=0x0010000000177545
- (void)setInternalSettingsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001773c4
- (void)reportEventsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000176fc8
- (void)recordAnalyticsWithMetricsDialogEventWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000176c3e
- (void)insertEventWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001768ad
- (void)getInternalSettingsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000176799
- (void)configureDuet;	// IMP=0x0010000000176793
- (void)recordAnalyticsWithMetricsDialogEvent:(id)arg1 forTopic:(id)arg2;	// IMP=0x0010000000176522
- (void)observeXPCServer:(id)arg1;	// IMP=0x0010000000176460
- (void);	// IMP=0x0010000000176372
- (id)init;	// IMP=0x001000000017628d

@end
