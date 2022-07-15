//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHFetchResult.h>

@class NSString;
@protocol PXDisplayAsset;

@interface PHFetchResult (PXDisplayAssetAdoption)
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;	// IMP=0x002000000061ad1e
- (void)px_safelyPrefetchObjectAtIndex:(long long)arg1;	// IMP=0x00200000009a4f5d
- (id)px_fetchedObjectIDsSortedByLocalIdentifiers:(id)arg1;	// IMP=0x00200000009a4cd1
- (id)px_fetchAssetSortDatesWithDateRangeEliminationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00200000009a4371
- (long long)px_indexOfSortedAssetNearestToAsset:(id)arg1;	// IMP=0x00200000009a40ee
@property(readonly, nonatomic) unsigned long long px_sortOrder;
- (Class)px_sortByDatePropertySetClass;	// IMP=0x00200000009a3f08

// Remaining properties
@property(readonly, nonatomic) long long count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <PXDisplayAsset> firstObject;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <PXDisplayAsset> lastObject;
@property(readonly) Class superclass;
@end
