//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ArcadeService : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000203fb6
- (void)showUpsellForItemID:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000203d22
- (void)removeHardwareOfferMetricsforOfferIDs:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000203ab5
- (void)removeHardwareOfferIDs:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000203848
- (void)removeAllHardwareOfferIDsWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000203647
- (void)hardwareOfferCountWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000020344a
- (void)allHardwareOfferMetricsWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000002031b2
- (void)allHardwareOffersIDsWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000202f5e
- (void)addHardwareOfferIDs:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000202cab
- (id)init;	// IMP=0x0010000000202bcf

@end

