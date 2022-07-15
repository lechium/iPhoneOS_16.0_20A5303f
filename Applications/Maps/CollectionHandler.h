//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMapTable, NSString, NSURL, UIImage;
@protocol CollectionManagerOperation, MapsSyncCollectionLike;

@interface CollectionHandler : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    _Bool _hasBeenModified;	// 16 = 0x10
    _Bool _hasDefaultImage;	// 17 = 0x11
    NSArray *_content;	// 24 = 0x18
    long long _sortType;	// 32 = 0x20
    NSString *_debugString;	// 40 = 0x28
    id <CollectionManagerOperation> _collectionOperation;	// 48 = 0x30
    id <MapsSyncCollectionLike> _collection;	// 56 = 0x38
    UIImage *_cachedImage;	// 64 = 0x40
    UIImage *_stagedImage;	// 72 = 0x48
    NSArray *_originalContent;	// 80 = 0x50
    NSMapTable *_mapping;	// 88 = 0x58
}

+ (id)collectionAllSavedPlaces;	// IMP=0x002000000080945a
+ (id)mspArrayForCollectionHandlers:(id)arg1;	// IMP=0x0010000000809231
+ (id)collectionWithCollectionHandler:(id)arg1;	// IMP=0x00100000008091cb
+ (id)collectionWithStorage:(id)arg1;	// IMP=0x0010000000809115
+ (id)collectionWithMapsSyncCachedCuratedCollection:(id)arg1;	// IMP=0x0010000000809092
+ (id)collectionWithMapsSyncCollection:(id)arg1;	// IMP=0x0010000000809079
+ (id)collectionWithCollection:(id)arg1;	// IMP=0x0010000000808fc6
+ (id)collection;	// IMP=0x0010000000808f1c
+ (id)addToCollection;	// IMP=0x0010000000808f03
+ (struct CGSize)photoSize;	// IMP=0x0010000000808ef2
- (void).cxx_destruct;	// IMP=0x001000000080b65a
@property(retain, nonatomic) NSMapTable *mapping; // @synthesize mapping=_mapping;
@property(retain, nonatomic) NSArray *originalContent; // @synthesize originalContent=_originalContent;
@property(retain, nonatomic) UIImage *stagedImage; // @synthesize stagedImage=_stagedImage;
@property(retain, nonatomic) UIImage *cachedImage; // @synthesize cachedImage=_cachedImage;
@property(nonatomic) _Bool hasDefaultImage; // @synthesize hasDefaultImage=_hasDefaultImage;
@property(nonatomic) _Bool hasBeenModified; // @synthesize hasBeenModified=_hasBeenModified;
@property(retain, nonatomic) id <MapsSyncCollectionLike> collection; // @synthesize collection=_collection;
@property(nonatomic) __weak id <CollectionManagerOperation> collectionOperation; // @synthesize collectionOperation=_collectionOperation;
@property(retain, nonatomic) NSString *debugString; // @synthesize debugString=_debugString;
@property(nonatomic) long long sortType; // @synthesize sortType=_sortType;
@property(retain, nonatomic) NSArray *content; // @synthesize content=_content;
- (void)notifyObserversContentUpdated;	// IMP=0x001000000080b3a6
- (void)notifyObserversInfoUpdated;	// IMP=0x001000000080b214
@property(readonly, nonatomic) _Bool loadingData;
@property(readonly, nonatomic) _Bool canDeleteContent;
@property(readonly, nonatomic) _Bool canAddContent;
@property(readonly, nonatomic) _Bool canEditTitle;
@property(readonly, nonatomic) _Bool canEditImage;
@property(readonly, nonatomic) _Bool canDelete;
@property(readonly, nonatomic) _Bool canShare;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (_Bool)containsItem:(id)arg1;	// IMP=0x001000000080b158
- (void)rebuildContent:(id)arg1;	// IMP=0x001000000080ab37
- (id)itemForMapItem:(id)arg1;	// IMP=0x001000000080aa8f
- (void)removeObserver:(id)arg1;	// IMP=0x001000000080aa79
- (void)addObserver:(id)arg1;	// IMP=0x001000000080aa63
@property(readonly, nonatomic) UIImage *badgeImage;
@property(readonly, nonatomic) UIImage *glyphImage;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *stagedTitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *identifier;
- (_Bool)updateImage:(id)arg1;	// IMP=0x001000000080a8e2
- (_Bool)updateTitle:(id)arg1;	// IMP=0x001000000080a8c6
- (void)deleteCollection:(CDUnknownBlockType)arg1;	// IMP=0x001000000080a83c
- (void)updateCollection:(CDUnknownBlockType)arg1;	// IMP=0x001000000080a791
- (void)createCollection:(CDUnknownBlockType)arg1;	// IMP=0x001000000080a707
- (void)removeObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000080a701
- (void)addObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000080a6fb
- (void)updateTitle:(id)arg1 forMapItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000080a6f5
@property(readonly, nonatomic) long long handlerType;
@property(readonly, nonatomic) long long contentType;
@property(readonly, nonatomic) unsigned long long bucketedNumberOfItems;
@property(readonly, nonatomic) int showAction;
- (void)loadDefaultImage;	// IMP=0x001000000080a411
- (void)loadImage;	// IMP=0x0010000000809d55
@property(readonly, nonatomic) NSURL *sharingURL;
- (void)updateWithCollection:(id)arg1;	// IMP=0x0010000000809d47
- (void)updateWithMapsSyncCachedCuratedCollection:(id)arg1;	// IMP=0x0010000000809d41
- (void)updateWithMapsSyncCollection:(id)arg1;	// IMP=0x0010000000809d3b
- (void)updateContent;	// IMP=0x0010000000809d29
- (void)initContent;	// IMP=0x0010000000809cfb
- (void)updateSorting;	// IMP=0x00100000008097b6
- (void)_loadSortType;	// IMP=0x00100000008096e2
- (void)_storeSortType;	// IMP=0x001000000080958d
- (void)touch;	// IMP=0x00100000008094e9
@property(readonly, nonatomic) _Bool beingModified;
- (id)init;	// IMP=0x0010000000809473
- (id)initWithCollection:(id)arg1;	// IMP=0x00100000008090ab
@property(readonly, nonatomic) unsigned long long numberOfItems;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *_maps_diffableDataSourceIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
