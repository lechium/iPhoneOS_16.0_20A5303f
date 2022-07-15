//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SearchHomeAnalyticsManager : NSObject
{
    struct {
        int action;
        NSString *value;
        NSNumber *collectionId;
        NSArray *publisherIds;
        NSNumber *verticalIndex;
        NSNumber *collectionCurrentlySaved;
        int target;
        NSNumber *horizontalIndex;
    } _curatedCollectionEvent;	// 8 = 0x8
    struct {
        int action;
        int target;
        NSArray *suggestions;
        NSNumber *selectedIndex;
    } _recentEvent;	// 72 = 0x48
    struct {
        int action;
        int target;
    } _browseCategoryEvent;	// 96 = 0x60
    struct {
        NSArray *suggestions;
    } _noTypingACEvent;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000028d925
- (void)logNoTypingACEvent;	// IMP=0x001000000028d8db
- (void)autocompleteSessionsStartedWithVisibleSuggestions:(id)arg1;	// IMP=0x001000000028d87b
- (void)browseCategoryTapped;	// IMP=0x001000000028d856
- (void)logRecentEvent;	// IMP=0x001000000028d7e7
- (void)recentTappedAtIndex:(unsigned long long)arg1 visibleSuggestions:(id)arg2;	// IMP=0x001000000028d744
- (id)curatedCollectionEventDebugDescription;	// IMP=0x0010000000286514
- (void)logCuratedCollectionsEvent;	// IMP=0x00100000002864a3
- (void)cityGuidesMoreButtonTapped;	// IMP=0x001000000028646e
- (void)exploreGuidesButtonTapped;	// IMP=0x0010000000286439
- (void)guideLocationTappedWithMuid:(unsigned long long)arg1 horizontalIndex:(unsigned long long)arg2;	// IMP=0x001000000028637a
- (void)publisherTappedWithMuid:(unsigned long long)arg1 verticalIndex:(unsigned long long)arg2;	// IMP=0x0010000000286286
- (void)showAllCollectionsTapped;	// IMP=0x0010000000286251
- (void)curatedCollectionsTappedWithMuid:(unsigned long long)arg1 horizontalIndex:(unsigned long long)arg2 isCurrentlySaved:(_Bool)arg3;	// IMP=0x0010000000286174
- (void)cleanup;	// IMP=0x00100000002860e7
- (id)init;	// IMP=0x0010000000286090

@end
