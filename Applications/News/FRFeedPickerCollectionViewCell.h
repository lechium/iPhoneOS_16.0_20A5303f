//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCFeedDescriptor, FCSubscriptionController, NSString;
@protocol FRFeldsparContext, FRSubscriptionMonitorDelegate;

@interface FRFeedPickerCollectionViewCell
{
    FCFeedDescriptor *_populatedFeed;	// 8 = 0x8
    id <FRSubscriptionMonitorDelegate> _subscriptionMonitorDelegate;	// 16 = 0x10
    long long _subscribeLocation;	// 24 = 0x18
    id <FRFeldsparContext> _feldsparContext;	// 32 = 0x20
    FCSubscriptionController *_subscriptionController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000b5f8b
@property(readonly, nonatomic) __weak FCSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property(readonly, nonatomic) __weak id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(readonly, nonatomic) long long subscribeLocation; // @synthesize subscribeLocation=_subscribeLocation;
@property(nonatomic) __weak id <FRSubscriptionMonitorDelegate> subscriptionMonitorDelegate; // @synthesize subscriptionMonitorDelegate=_subscriptionMonitorDelegate;
@property(readonly, nonatomic) FCFeedDescriptor *populatedFeed; // @synthesize populatedFeed=_populatedFeed;
- (void)_attemptSubscriptionToPopulatedFeed;	// IMP=0x00100000000b5ce0
- (void)_unsubscribeToPopulatedFeed;	// IMP=0x00100000000b5c6f
- (void)_animateUnsubscribeToPopulatedFeed;	// IMP=0x00100000000b5c38
- (void)_actionButtonTapped:(id)arg1;	// IMP=0x00100000000b5bad
- (void)_updateActionButtonPosition;	// IMP=0x00100000000b5a43
- (void)setMode:(unsigned long long)arg1;	// IMP=0x00100000000b59df
- (id)accessibilityPublisherOrTopicName;	// IMP=0x00100000000b598f
- (id)accessibilityHint;	// IMP=0x00100000000b5838
- (id)_accessibilityUserTestingChildren;	// IMP=0x00100000000b576e
- (_Bool)_accessibilityPerformUnsubscribeAction;	// IMP=0x00100000000b5609
- (_Bool)_accessibilityPerformSubscribeAction;	// IMP=0x00100000000b5568
- (id)accessibilityCustomActions;	// IMP=0x00100000000b52da
- (id)accessibilityCollectionViewFocusRestoreIdentifier;	// IMP=0x00100000000b52c8
- (_Bool)hasNotificationsEnabled;	// IMP=0x00100000000b522d
- (_Bool)isRemovable;	// IMP=0x00100000000b521b
- (_Bool)isSubscribedTo;	// IMP=0x00100000000b5180
- (_Bool)isAddable;	// IMP=0x00100000000b513c
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00100000000b50fb
- (void)setSelected:(_Bool)arg1;	// IMP=0x00100000000b50cc
- (void)_updateHighlightedState;	// IMP=0x00100000000b4ff0
- (void)populateWithFeed:(id)arg1 context:(id)arg2 subscribeLocation:(long long)arg3;	// IMP=0x00100000000b4ef7
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00100000000b4eb6
- (void)prepareForReuse;	// IMP=0x00100000000b4e1a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000b4dda

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

