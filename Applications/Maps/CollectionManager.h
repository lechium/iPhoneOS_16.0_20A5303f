//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoalescingScheduler, CollectionHandler, CollectionOrderStorage, GEOObserverHashTable, IOSBasedChromeViewController, NSArray, NSMutableArray, NSString;
@protocol MapsSyncQueryLike, OS_dispatch_queue;

@interface CollectionManager : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    NSMutableArray *_currentContents;	// 16 = 0x10
    CollectionOrderStorage *_orderStorage;	// 24 = 0x18
    _Bool _needToSendUpdate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_updateContentQueue;	// 40 = 0x28
    _Bool _didRegisterForCollectionsSyncManager;	// 48 = 0x30
    CoalescingScheduler *_fetchScheduler;	// 56 = 0x38
    _Bool _hasInitialCollections;	// 64 = 0x40
    CollectionHandler *_favoritesPlacesCollection;	// 72 = 0x48
    IOSBasedChromeViewController *_chromeViewController;	// 80 = 0x50
    id <MapsSyncQueryLike> _query;	// 88 = 0x58
    NSArray *_queryContents;	// 96 = 0x60
}

+ (id)sharedManager;	// IMP=0x00200000007815ef
- (void).cxx_destruct;	// IMP=0x0020000000784cce
@property(retain, nonatomic) NSArray *queryContents; // @synthesize queryContents=_queryContents;
@property(retain) id <MapsSyncQueryLike> query; // @synthesize query=_query;
@property(readonly, nonatomic) _Bool hasInitialCollections; // @synthesize hasInitialCollections=_hasInitialCollections;
@property(nonatomic) __weak IOSBasedChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
- (void)queryContentsDidChange:(id)arg1 contentsVersion:(unsigned long long)arg2;	// IMP=0x0010000000784b67
- (void)curatedCollectionSyncManagerDidUpdateCachedCollections:(id)arg1;	// IMP=0x0010000000784b55
- (void)curatedCollectionSyncManagerDidUpdateSyncedCollections:(id)arg1;	// IMP=0x0010000000784b4f
- (void)collectionHandlerInfoUpdated:(id)arg1;	// IMP=0x0010000000784b49
- (void)collectionHandlerContentUpdated:(id)arg1;	// IMP=0x0010000000784b43
- (id)collectionsForAddingMapItems;	// IMP=0x001000000078498d
- (id)collectionsNotContainingMapItem:(id)arg1;	// IMP=0x0010000000784780
- (id)collectionsContainingMapItem:(id)arg1;	// IMP=0x0010000000784573
- (void)removeObserver:(id)arg1;	// IMP=0x001000000078455d
- (void)addObserver:(id)arg1;	// IMP=0x0010000000784547
- (id)collectionWithIdentifier:(id)arg1;	// IMP=0x0010000000784372
- (id)collectionForFavoritesType:(long long)arg1;	// IMP=0x0010000000784343
@property(readonly, nonatomic) NSArray *currentCollectionsForToolbarMenu;
@property(readonly, nonatomic) NSArray *currentCollectionsForPicker;
@property(readonly, nonatomic) NSArray *currentCollectionsForCarPlay;
@property(readonly, nonatomic) NSArray *currentCollectionsForWatchHome;
@property(readonly, nonatomic) NSArray *currentCollectionsForiOSHome;
@property(readonly, nonatomic) NSArray *currentCollectionsForMacHome;
@property(readonly, nonatomic) NSArray *currentCollections;
- (void)_updateContent;	// IMP=0x0010000000782f20
- (void)deleteCollections:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000782a04
- (void)deleteCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000782726
- (void)saveCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000078247e
- (void)createCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000007821d6
- (void)touchCollection:(id)arg1;	// IMP=0x00100000007821a0
- (void)_fetchCollectionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000781bb6
- (void)queryContentsDidChangeWithQuery:(id)arg1;	// IMP=0x0010000000781ba0
@property(readonly, nonatomic) CollectionHandler *favoritesPlacesCollection; // @synthesize favoritesPlacesCollection=_favoritesPlacesCollection;
- (id)newTraits;	// IMP=0x00100000007819fb
- (void)dealloc;	// IMP=0x0010000000781980
- (id)init;	// IMP=0x0010000000781644

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

