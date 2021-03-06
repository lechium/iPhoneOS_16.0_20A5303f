//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMapTable, NSPersistentContainer, NSPersistentHistoryToken;
@protocol NSObject;

@interface STConcreteCoreDataObserver : NSObject
{
    NSPersistentContainer *_persistentContainer;	// 8 = 0x8
    id <NSObject> _managedObjectContextObserver;	// 16 = 0x10
    NSMapTable *_triggerableObservationFiltersByDelegate;	// 24 = 0x18
    NSPersistentHistoryToken *_lastToken;	// 32 = 0x20
    NSDate *_startTime;	// 40 = 0x28
}

+ (id)_updatedOrInsertedChangePredicate;	// IMP=0x00200000000146af
+ (_Bool)_changeIsInteresting:(id)arg1 triggerPredicate:(id)arg2;	// IMP=0x001000000001469a
- (void).cxx_destruct;	// IMP=0x0020000000015611
@property(retain) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain) NSPersistentHistoryToken *lastToken; // @synthesize lastToken=_lastToken;
@property(retain) NSMapTable *triggerableObservationFiltersByDelegate; // @synthesize triggerableObservationFiltersByDelegate=_triggerableObservationFiltersByDelegate;
@property(retain) id <NSObject> managedObjectContextObserver; // @synthesize managedObjectContextObserver=_managedObjectContextObserver;
@property(readonly) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (id)_filteredTombstonesFromChanges:(id)arg1 predicate:(id)arg2;	// IMP=0x00100000000154e2
- (id)_filteredObjectIDsFromObjects:(id)arg1 predicate:(id)arg2;	// IMP=0x0010000000015453
- (id)_coreDataChangesFromInterestingDeleteChanges:(id)arg1 withObservationFilters:(id)arg2 inContext:(id)arg3;	// IMP=0x0010000000014f9e
- (id)_coreDataChangesFromInterestingUpsertChanges:(id)arg1 withObservationFilters:(id)arg2 inContext:(id)arg3;	// IMP=0x0010000000014867
- (id)_filteredPersistentHistoryChangesFromChanges:(id)arg1 predicate:(id)arg2;	// IMP=0x0010000000014741
- (void)handleManagedObjectContextDidMergeChangesNotification:(id)arg1;	// IMP=0x0010000000013a34
- (void)addObservationFiltersByTriggerPredicate:(id)arg1 forDelegate:(id)arg2;	// IMP=0x00100000000139ae
- (void)start;	// IMP=0x00100000000137e8
- (void)dealloc;	// IMP=0x0010000000013772
- (id)initWithPersistentContainer:(id)arg1;	// IMP=0x00100000000136d4

@end

