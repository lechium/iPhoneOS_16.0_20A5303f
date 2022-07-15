//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADCallObserver, NSString;
@protocol OS_dispatch_queue, SiriAnalyticsSensitiveConditionsObserverDelegate;

@interface ADSiriAnalyticsPhoneCallStateObserver : NSObject
{
    id <SiriAnalyticsSensitiveConditionsObserverDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    ADCallObserver *_callObserver;	// 24 = 0x18
    unsigned long long _lastKnownState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001f8ba4
- (void)pollConditionStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f8aa8
- (void)callObserver:(id)arg1 callStateDidChangeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x00100000001f89b1
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00100000001f88f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
