//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString, VNRequestSpecifier;
@protocol VNEntityIdentificationModelTrainingDataDelegate;

__attribute__((visibility("hidden")))
@interface VNEntityIdentificationModelTrainingData : NSObject
{
    unsigned long long _maximumEntities;	// 8 = 0x8
    id <VNEntityIdentificationModelTrainingDataDelegate> _delegate;	// 16 = 0x10
    VNRequestSpecifier *_entityPrintOriginatingRequestSpecifier;	// 24 = 0x18
    NSMutableArray *_entityUniqueIdentifiers;	// 32 = 0x20
    NSMutableDictionary *_serialNumberForEntityUniqueIdentifier;	// 40 = 0x28
    NSMutableDictionary *_observationsForSerialNumber;	// 48 = 0x30
    NSMutableIndexSet *_availableSerialNumbers;	// 56 = 0x38
    NSDate *_lastModificationDate;	// 64 = 0x40
    unsigned long long _lastDataChangeSequenceNumber;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000072c17
@property(readonly, copy) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property __weak id <VNEntityIdentificationModelTrainingDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) VNRequestSpecifier *entityPrintOriginatingRequestSpecifier; // @synthesize entityPrintOriginatingRequestSpecifier=_entityPrintOriginatingRequestSpecifier;
- (id)trainedModelObservationAtIndex:(unsigned long long)arg1 forEntityAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000072bb6
- (unsigned long long)trainedModelNumberOfObservationsForEntityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000072ba4
- (unsigned long long)trainedModelIndexOfEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000000072b92
- (id)trainedModelUniqueIdentifierOfEntityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000072b80
- (unsigned long long)trainedModelEntityCount;	// IMP=0x0000000000072b6e
- (id)lastModificationDateForEntityIdentificationModel:(id)arg1;	// IMP=0x0000000000072b60
- (unsigned long long)lastDataChangeSequenceNumberForEntityIdentificationModel:(id)arg1;	// IMP=0x0000000000072b56
- (id)entityIdentificationModel:(id)arg1 observationAtIndex:(unsigned long long)arg2 forEntityAtIndex:(unsigned long long)arg3;	// IMP=0x0000000000072b3e
- (unsigned long long)entityIdentificationModel:(id)arg1 numberOfObservationsForEntityAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000072b29
- (unsigned long long)entityIdentificationModel:(id)arg1 indexOfEntityWithUniqueIdentifier:(id)arg2;	// IMP=0x0000000000072b14
- (id)entityIdentificationModel:(id)arg1 uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000072aff
- (unsigned long long)numberOfEntitiesInEntityIdentificationModel:(id)arg1;	// IMP=0x0000000000072aed
- (_Bool)validateWithCanceller:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000072a59
- (_Bool)removeEntityWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007299d
- (_Bool)removeAllObservationsFromEntityWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000072903
- (_Bool)removeObservations:(id)arg1 fromEntityWithUniqueIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007275c
- (_Bool)addObservations:(id)arg1 toEntityWithUniqueIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007240b
- (id)observationAtIndex:(unsigned long long)arg1 forEntityAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000072346
- (unsigned long long)observationCountForEntityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000072298
- (unsigned long long)indexOfEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000000072282
- (id)uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007226c
- (unsigned long long)entityCount;	// IMP=0x0000000000072256
- (id)initWithModelConfiguration:(id)arg1;	// IMP=0x0000000000072113

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

