//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKPiggybackRequestingController, NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface AKPiggybackController : NSObject
{
    NSMutableDictionary *_acceptingControllers;	// 8 = 0x8
    NSMutableDictionary *_pendingReplies;	// 16 = 0x10
    AKPiggybackRequestingController *_requestingController;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_piggybackingRequestQueue;	// 32 = 0x20
    NSOperationQueue *_circleRequestProcessingQueue;	// 40 = 0x28
    _Bool _requiresHSA2Repair;	// 48 = 0x30
}

+ (void)tearDown;	// IMP=0x0020000000092e84
+ (id)sharedController;	// IMP=0x0010000000092d10
- (void).cxx_destruct;	// IMP=0x0020000000095cfa
- (double)_processingTimeOut;	// IMP=0x0010000000095cec
- (id)performCircleRequestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000093e82
- (id)serviceControllerForContext:(id)arg1;	// IMP=0x0010000000093e00
- (void)startRequestSessionWithController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000093cdc
- (void)_removeAcceptingControllerForTransaction:(id)arg1;	// IMP=0x0010000000093c2f
- (id)_acceptingControllerForTransactionId:(id)arg1;	// IMP=0x0010000000093a1f
- (_Bool)_processPendingCompletionsForPayload:(id)arg1;	// IMP=0x00100000000937aa
- (_Bool)_hasPrimaryiCloudAccountForPayload:(id)arg1;	// IMP=0x0010000000093710
- (void)_processPiggybackPayload:(id)arg1;	// IMP=0x0010000000093317
- (void)processPushMessage:(id)arg1;	// IMP=0x00100000000931dd
- (_Bool)shouldSuppressPushMessage:(id)arg1;	// IMP=0x0010000000092f39

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
