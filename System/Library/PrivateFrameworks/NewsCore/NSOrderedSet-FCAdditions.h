//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOrderedSet.h>

@interface NSOrderedSet (FCAdditions)
+ (id)fc_orderedSet:(CDUnknownBlockType)arg1;	// IMP=0x0010000000229482
- (_Bool)fc_isEqualToOrderedSet:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x001000000022adcb
- (id)fc_orderedSetByAddingObject:(id)arg1;	// IMP=0x001000000022ad65
- (id)fc_orderedSetByCollectingObjectsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000022ab79
- (id)fc_orderedSetByMinusingOrderedSet:(id)arg1;	// IMP=0x001000000022ab01
- (id)fc_orderedSetWithObjectsAtIndexes:(id)arg1;	// IMP=0x001000000022aa9e
- (id)fc_orderedSetWithObjectsInRange:(struct _NSRange)arg1;	// IMP=0x001000000022aa79
- (id)fc_orderedSetOfObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000022a82b
- (_Bool)fc_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000022a6e9
- (id)fc_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000022a585
- (id)fc_indexesOfObjectsInOrderedSet:(id)arg1;	// IMP=0x001000000022a3d5
- (id)fc_diffAgainstOrderedSet:(id)arg1;	// IMP=0x0010000000229ce5
- (id)fc_diffAgainstOrderedSet:(id)arg1 withEqualityTest:(CDUnknownBlockType)arg2 identityValueProvider:(CDUnknownBlockType)arg3;	// IMP=0x001000000022966f
- (id)fc_objectInSortedOrderedCollectionWithFeature:(id)arg1 usingFeatureProvider:(CDUnknownBlockType)arg2 comparator:(CDUnknownBlockType)arg3;	// IMP=0x001000000022965c
- (id)fc_diffAgainstSortedOrderedCollection:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x0010000000229649
- (_Bool)fc_isSortedUsingComparator:(CDUnknownBlockType)arg1;	// IMP=0x001000000022963c
- (void)fc_enumerateObjectsPairwiseUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000022962f
- (id)fc_orderedSetByTransformingWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000022951f
@end

