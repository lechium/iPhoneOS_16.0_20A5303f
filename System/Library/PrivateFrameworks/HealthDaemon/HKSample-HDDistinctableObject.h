//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKSample.h>

@class NSString;

@interface HKSample (HDDistinctableObject)
+ (_Bool)supportsDistinctByKeyPath:(id)arg1;	// IMP=0x00100000000ecdc8
+ (id)createWithCodable:(id)arg1;	// IMP=0x0010000000254fe9
+ (id)hd_sampleTypesForObjects:(id)arg1;	// IMP=0x0010000000057382
- (id)uniqueIdentifierForDistinctByKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ece52
- (_Bool)addCodableRepresentationToCollection:(id)arg1;	// IMP=0x0010000000020701
- (id)codableRepresentationForSync;	// IMP=0x001000000001747b
- (long long)entityType;	// IMP=0x001000000002ca52
- (id)hd_associatedSampleTypes;	// IMP=0x0010000000057584
- (id)hd_sampleType;	// IMP=0x00100000000190a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

