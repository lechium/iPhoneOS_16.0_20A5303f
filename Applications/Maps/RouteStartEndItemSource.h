//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject, NSSet, RouteStartEndItem, SearchResult;
@protocol OS_dispatch_queue;

@interface RouteStartEndItemSource
{
    RouteStartEndItem *_startItem;	// 8 = 0x8
    NSArray *_endItems;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_lockQueue;	// 24 = 0x18
    _Bool _shouldBeHiddenFromMap;	// 32 = 0x20
    SearchResult *_startLocation;	// 40 = 0x28
    NSArray *_endLocations;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000001c7f09
@property(nonatomic) _Bool shouldBeHiddenFromMap; // @synthesize shouldBeHiddenFromMap=_shouldBeHiddenFromMap;
@property(readonly, nonatomic) NSArray *endLocations; // @synthesize endLocations=_endLocations;
@property(readonly, nonatomic) SearchResult *startLocation; // @synthesize startLocation=_startLocation;
- (id)itemMatchingLocation:(id)arg1;	// IMP=0x00100000001c7ce3
@property(readonly, nonatomic) NSArray *allKeysetsForEndLocations;
@property(readonly, nonatomic) NSSet *keysForStartLocation;
- (id)allItems;	// IMP=0x00100000001c77cb
- (void)setStartLocation:(id)arg1 endLocations:(id)arg2;	// IMP=0x00100000001c73ce
- (void)setStartLocation:(id)arg1 endLocation:(id)arg2;	// IMP=0x00100000001c72c9
- (void)_updateItemVisibility;	// IMP=0x00100000001c7108
- (void)clearStartAndEndLocations;	// IMP=0x00100000001c6fd2
- (id)init;	// IMP=0x00100000001c6f49

@end
