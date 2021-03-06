//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface FRFeedSubscriptionModificationSessionManager : NSObject
{
    NSMutableSet *_subscribedTagIDs;	// 8 = 0x8
    NSMutableDictionary *_feedSubscriptionModificationEvents;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004a5c4
@property(retain, nonatomic) NSMutableDictionary *feedSubscriptionModificationEvents; // @synthesize feedSubscriptionModificationEvents=_feedSubscriptionModificationEvents;
@property(retain, nonatomic) NSMutableSet *subscribedTagIDs; // @synthesize subscribedTagIDs=_subscribedTagIDs;
- (void)addFeedSubscriptionModificationEvent:(id)arg1;	// IMP=0x001000000004a4e7
- (void)endSession;	// IMP=0x001000000004a081
- (void)addToInitialSubscribedTagIDs:(id)arg1;	// IMP=0x0010000000049e1b
- (id)init;	// IMP=0x0010000000049da6

@end

