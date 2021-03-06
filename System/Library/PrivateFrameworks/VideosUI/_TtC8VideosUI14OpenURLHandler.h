//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSURL;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI14OpenURLHandler : NSObject
{
    MISSING_TYPE *deferredOpenURL;	// 9297728 = 0x8ddf40
    MISSING_TYPE *openedByDeeplink;	// 0 = 0x0
    MISSING_TYPE *_isFinished;	// 4282514057 = 0xff41fa89
    MISSING_TYPE *isFinishedLock;	// 548768584 = 0x20b58b48
    MISSING_TYPE *_isLoadingSharedWatchURL;	// 2303252479 = 0x8948d7ff
    MISSING_TYPE *isLoadingSharedWatchURLLock;	// 155028300 = 0x93d8b4c
    MISSING_TYPE *deferredOpenURLCompletion;	// 2232418303 = 0x850fffff
    MISSING_TYPE *amsURLParser;	// 1288044361 = 0x4cc5ff49
    MISSING_TYPE *deferredAMSDynamicURLCompletion;	// 4294920381 = 0xffff48bd
    MISSING_TYPE *offerURLString;	// 11236852 = 0xab75f4
    MISSING_TYPE *contextData;	// 1224736766 = 0x48fffffe
    MISSING_TYPE *purchaseOrLinkingAdamID;	// 1095745 = 0x10b841
    MISSING_TYPE *subscriptionChannelTitle;	// 4282515455 = 0xff41ffff
    MISSING_TYPE *subscriptionChannelLink;	// 4294967088 = 0xffffff30
}

- (void).cxx_destruct;	// IMP=0x0000000000468910
- (void)processEngagementResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000468870
- (void)parseURL:(id)arg1 appContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000467dc0
- (void)processEntityWithContextData:(id)arg1 appContext:(id)arg2;	// IMP=0x0000000000467590
- (void)handleDeferredURLWithAppContext:(id)arg1;	// IMP=0x0000000000466e20
- (void)saveDeferredURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000466ab0
- (void)processNonDeeplinkURL:(id)arg1 contextData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000466880
- (void)processDeeplink:(id)arg1 appContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000466580
- (void)openSharedWatchURL:(id)arg1 appContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000465e60
- (id)queryParameterStringfromURL:(id)arg1 parameter:(id)arg2;	// IMP=0x0000000000465320
- (_Bool)isRedeemURL:(id)arg1;	// IMP=0x0000000000465250
- (id)init;	// IMP=0x0000000000465220
@property(nonatomic) _Bool isLoadingSharedWatchURL;
@property(nonatomic) _Bool isFinished;
@property(nonatomic) _Bool openedByDeeplink; // @synthesize openedByDeeplink;
@property(nonatomic, copy) NSURL *deferredOpenURL;

@end

