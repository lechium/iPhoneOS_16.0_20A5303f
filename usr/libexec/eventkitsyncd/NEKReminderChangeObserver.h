//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NEKReminderChangeTrackingStateMap, NEKReminderStore, NSObject;
@protocol OS_dispatch_queue;

@interface NEKReminderChangeObserver
{
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    _Bool _sawSeqnoFailure;	// 40 = 0x28
    NEKReminderChangeTrackingStateMap *_changeTrackingStateMap;	// 48 = 0x30
    NEKReminderStore *_weakReminderDatabaseController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000006ebc4
@property(nonatomic) __weak NEKReminderStore *weakReminderDatabaseController; // @synthesize weakReminderDatabaseController=_weakReminderDatabaseController;
- (id)changeStateMap;	// IMP=0x001000000006eae2
- (void)_sendChangesIfAvailable;	// IMP=0x001000000006ead0
- (void)setPreviousDefaultReminderListID:(id)arg1;	// IMP=0x001000000006e9d4
- (id)previousDefaultReminderListID;	// IMP=0x001000000006e893
- (void)saveChangeTrackingStateMap:(id)arg1;	// IMP=0x001000000006e72a
- (id)loadChangeTrackingStateMapWithStore:(id)arg1;	// IMP=0x001000000006e521
- (id)_sequenceKey;	// IMP=0x001000000006e514
- (_Bool)_fetchChangesInto:(id)arg1 from:(id)arg2 inside:(id)arg3 outDeletedReminderAndListMapping:(id *)arg4 outMovedReminderAndListMapping:(id *)arg5;	// IMP=0x001000000006cd0e
- (id)fetchReminderChangeSet;	// IMP=0x001000000006c777
- (_Bool)allRemindersInto:(id)arg1 filter:(CDUnknownBlockType)arg2 window:(id)arg3;	// IMP=0x001000000006c412
- (_Bool)allListsInto:(id)arg1;	// IMP=0x001000000006bd22
- (_Bool)allCloudKitAccountsInto:(id)arg1;	// IMP=0x001000000006b907
- (void)notifyForDatabaseUpdates;	// IMP=0x001000000006b8bb
- (void)notifyForDatabaseUpdatesIfNeeded;	// IMP=0x001000000006b8a9
- (void)storeDidChange;	// IMP=0x001000000006b6e6
- (void)stopObservingChanges;	// IMP=0x001000000006b666
- (void)beginObservingChanges;	// IMP=0x001000000006b5d3
- (id)reminderDatabaseController;	// IMP=0x001000000006b5c1
- (void)dealloc;	// IMP=0x001000000006b583
- (id)_reminderListKey;	// IMP=0x001000000006b576
- (id)initWithQueue:(id)arg1 environment:(id)arg2;	// IMP=0x001000000006b4ee
- (id)initWithEnvironment:(id)arg1;	// IMP=0x001000000006b4e0

@end

