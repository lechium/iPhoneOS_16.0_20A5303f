//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC19appstorecomponentsd19AppOfferStateClient : NSObject
{
    MISSING_TYPE *objectGraph;	// 8 = 0x8
    MISSING_TYPE *appStateController;	// 16 = 0x10
    MISSING_TYPE *arcadeSubscription;	// 56 = 0x38
    MISSING_TYPE *restrictions;	// 72 = 0x48
    MISSING_TYPE *jsStackManager;	// 88 = 0x58
    MISSING_TYPE *localizer;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 0 = 0x0
    MISSING_TYPE *stateLock;	// 0 = 0x0
    MISSING_TYPE *observations;	// 0 = 0x0
    MISSING_TYPE *isUpdatingArcadeSubscription;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x004000000002fa40
- (id)init;	// IMP=0x0010000000034460
- (void)reinstallWatchSystemAppWithBundleID:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000343b0
- (void)reinstallWatchAppWithID:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000033980
- (void)performActionOfOffer:(id)arg1 withActivity:(id)arg2 inContext:(id)arg3 withReplyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000032f30
- (void)stopObservingStateOfOffers:(id)arg1;	// IMP=0x0010000000032690
- (void)startObservingStateOfOffers:(id)arg1;	// IMP=0x0010000000031cc0
- (void)dealloc;	// IMP=0x001000000002fa20

@end
