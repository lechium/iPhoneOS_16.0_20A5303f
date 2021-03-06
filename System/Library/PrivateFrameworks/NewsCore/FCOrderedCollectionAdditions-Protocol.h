//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;
@protocol FCOrderedCollection;

@protocol FCOrderedCollectionAdditions
- (id)fc_objectInSortedOrderedCollectionWithFeature:(id)arg1 usingFeatureProvider:(id (^)(id))arg2 comparator:(long long (^)(id, id))arg3;
- (NSDictionary *)fc_diffAgainstSortedOrderedCollection:(id <FCOrderedCollection>)arg1 usingComparator:(long long (^)(id, id))arg2;
- (_Bool)fc_isSortedUsingComparator:(long long (^)(id, id))arg1;
- (void)fc_enumerateObjectsPairwiseUsingBlock:(void (^)(id, id, unsigned long long, _Bool *))arg1;
@end

