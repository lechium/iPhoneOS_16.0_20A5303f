//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IAMPresentationPolicy, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface VUIInAppMessagingContextProvider : NSObject
{
    IAMPresentationPolicy *_normalPolicy;	// 8 = 0x8
    IAMPresentationPolicy *_restrictedPolicy;	// 16 = 0x10
    NSMutableSet *_subscriptionProperties;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000126468
@property(retain, nonatomic) NSMutableSet *subscriptionProperties; // @synthesize subscriptionProperties=_subscriptionProperties;
@property(retain, nonatomic) IAMPresentationPolicy *restrictedPolicy; // @synthesize restrictedPolicy=_restrictedPolicy;
@property(retain, nonatomic) IAMPresentationPolicy *normalPolicy; // @synthesize normalPolicy=_normalPolicy;
- (_Bool)_hasDownloads;	// IMP=0x00000000001263f2
- (_Bool)_hasSubscriptionDownloads;	// IMP=0x000000000012637b
- (_Bool)_hasItunesDownloads;	// IMP=0x0000000000126284
- (_Bool)_hasItunesPurchases;	// IMP=0x00000000001261a8
- (id)_locationStatus;	// IMP=0x0000000000126136
- (id)_connectionType;	// IMP=0x00000000001260c9
- (id)_stringValueForKeyPath:(id)arg1 dictionary:(id)arg2;	// IMP=0x0000000000125e73
- (id)_runSubscriptionQuery:(id)arg1;	// IMP=0x0000000000125a4f
- (void)messageCoordinator:(id)arg1 didRequestAction:(id)arg2;	// IMP=0x000000000012585a
- (id)presentationPolicyForPolicyGroup:(long long)arg1;	// IMP=0x00000000001256a5
@property(readonly) _Bool allowsModalMessageDisplay;
- (id)viewControllerForModalPresentation;	// IMP=0x00000000001251b6
- (id)contextPropertyWithName:(id)arg1;	// IMP=0x0000000000124915
- (id)queriedSubscriptionProperties;	// IMP=0x000000000012488d
- (id)init;	// IMP=0x00000000001247b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double lastMessageDisplayTime;
@property(readonly) Class superclass;

@end
