//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface PDDiscoveryAnalytics : NSObject
{
}

- (id)archivedTokenForDiscoveryAnalyticsSubject;	// IMP=0x002000000032912b
- (void)setArchivedTokenForDiscoveryAnalyticsSubject:(id)arg1;	// IMP=0x00100000003290ae
- (void)clearVisitorIDAndRelatedData;	// IMP=0x0010000000328fc7
- (id)_initalizeCountForDictionaryWithKey:(id)arg1 forItemIdentifier:(id)arg2;	// IMP=0x0010000000328e0d
- (id)_countForDictionaryWithKey:(id)arg1 forItemIdentifier:(id)arg2;	// IMP=0x0010000000328d1f
- (void)_incrementCountForCountsDictionaryWithKey:(id)arg1 forItemIdentifier:(id)arg2;	// IMP=0x0010000000328ba6
- (id)_rotateVisitorIDIfNecessaryWithVisitorIDCreationInterval:(double)arg1;	// IMP=0x0010000000328a05
- (id)_createOrRotateVisitorIDIfNecessary;	// IMP=0x00100000003288e9
- (id)_createVisitorID;	// IMP=0x0010000000328804
@property(readonly, nonatomic) NSSet *identifiersOfCompletedDiscoveryItems;
@property(readonly, nonatomic) NSSet *identifiersOfTappedDiscoveryItems;
@property(readonly, nonatomic) NSSet *identifiersOfDismissedDiscoveryItems;
@property(readonly, nonatomic) NSSet *identifiersOfExpandedDiscoveryItems;
- (void)endReporingDiscoveryAnalytics;	// IMP=0x00100000003284ff
- (void)beginReporingDiscoveryAnalytics;	// IMP=0x001000000032849d
- (void)discoveryItemWithIdentifier:(id)arg1 callToAction:(long long)arg2 wasScrolledToTheBottom:(_Bool)arg3;	// IMP=0x001000000032837b
- (void)discoveryItemWithIdentifier:(id)arg1 callToAction:(long long)arg2 isScrollable:(_Bool)arg3;	// IMP=0x0010000000328259
- (void)discoveryItemWithIdentifier:(id)arg1 launchedWithReferralSource:(unsigned long long)arg2 cardCount:(unsigned long long)arg3;	// IMP=0x0010000000328021
- (void)removedAllDiscoveryItems;	// IMP=0x001000000032800f
- (void)completedDiscoveryItemCTA;	// IMP=0x0010000000327c5a
- (void)tappedDiscoveryItemCTA:(long long)arg1 itemIdentifier:(id)arg2 cardSize:(long long)arg3;	// IMP=0x00100000003278d2
- (void)dismissedDiscoveryItemWithIdentifier:(id)arg1 callToAction:(long long)arg2 cardSize:(long long)arg3;	// IMP=0x00100000003275b1
- (void)expandedDiscoveryItemWithIdentifier:(id)arg1 callToAction:(long long)arg2 afterSwipingToCard:(_Bool)arg3 multipleStoryCardsAvailable:(_Bool)arg4 cardSize:(long long)arg5;	// IMP=0x0010000000327224
- (void)displayedDiscoveryItemWithIdentifier:(id)arg1 isWelcomeCard:(_Bool)arg2 afterSwipingToCard:(_Bool)arg3 multipleStoryCardsAvailable:(_Bool)arg4 callToAction:(long long)arg5 cardSize:(long long)arg6;	// IMP=0x0010000000326f41
- (void)displayedEngagementMessage:(id)arg1;	// IMP=0x0010000000326e4a
- (void)performedAction:(long long)arg1 onDiscoveryItem:(id)arg2;	// IMP=0x0010000000326e01
- (void)performedAction:(long long)arg1 onEngagementMessage:(id)arg2;	// IMP=0x0010000000326ca1

@end

