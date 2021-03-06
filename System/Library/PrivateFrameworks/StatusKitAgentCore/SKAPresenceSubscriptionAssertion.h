//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_activity;

__attribute__((visibility("hidden")))
@interface SKAPresenceSubscriptionAssertion : NSObject
{
    NSString *_subscriptionIdentifier;	// 8 = 0x8
    NSObject<OS_os_activity> *_osActivity;	// 16 = 0x10
}

+ (id)logger;	// IMP=0x006000000000d73c
- (void).cxx_destruct;	// IMP=0x000000000000d7ac
@property(readonly, nonatomic) NSObject<OS_os_activity> *osActivity; // @synthesize osActivity=_osActivity;
@property(readonly, copy, nonatomic) NSString *subscriptionIdentifier; // @synthesize subscriptionIdentifier=_subscriptionIdentifier;
- (void)dealloc;	// IMP=0x000000000000d6c1
- (unsigned long long)hash;	// IMP=0x000000000000d67d
- (_Bool)isEqualToPresenceSubscription:(id)arg1;	// IMP=0x000000000000d5cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000d56e
- (id)description;	// IMP=0x000000000000d4e6
- (id)initWithSubscriptionIdentifier:(id)arg1;	// IMP=0x000000000000d3fd

@end

