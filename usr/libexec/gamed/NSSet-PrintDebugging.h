//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@interface NSSet (PrintDebugging)
+ (id)_gkSetOfResourcesWithIDs:(id)arg1;	// IMP=0x00100000001d8ca6
- (id)_gkDescriptionWithChildren:(long long)arg1;	// IMP=0x002000000008e337
- (id)_gkSetByRemovingObject:(id)arg1;	// IMP=0x00100000001016ba
- (id)_gkDistinctValuesForKeyPath:(id)arg1;	// IMP=0x00100000001014e7
- (id)_gkValuesForKeyPath:(id)arg1;	// IMP=0x0010000000101314
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;	// IMP=0x001000000010103f
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;	// IMP=0x001000000010102b
- (id)_gkMapWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000100ef3
- (_Bool)_gkContainsInvalidResource;	// IMP=0x00100000001d933e
- (_Bool)_gkContainsExpiredResource;	// IMP=0x00100000001d9310
- (_Bool)_gkContainsInvalidOrExpiredResource;	// IMP=0x00100000001d92a9
- (id)_gkAllResourceIDs;	// IMP=0x00100000001d9290
- (id)_gkAllRepresentedItems;	// IMP=0x00100000001d9277
- (id)_gkInvalidOrExpiredResources;	// IMP=0x00100000001d9210
- (id)_gkValidAndNonExpiredResources;	// IMP=0x00100000001d91a7
- (id)_gkInvalidResources;	// IMP=0x00100000001d9179
- (id)_gkExpiredResources;	// IMP=0x00100000001d914b
- (_Bool)_gkContainsObjectPassingPredicate:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d9034
- (id)_gkResourceWithID:(id)arg1;	// IMP=0x00100000001d8f06
- (id)_gkResourcesWithIDs:(id)arg1;	// IMP=0x00100000001d8d36
@end

