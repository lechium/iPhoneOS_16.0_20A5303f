//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSPHistoryContainer, NSString, RAPStorage;

@interface MSPHistoryRAPStorage : NSObject
{
    RAPStorage *_underlyingStorage;	// 8 = 0x8
    MSPHistoryContainer *_historyContainer;	// 16 = 0x10
}

+ (Class)recordingClass;	// IMP=0x0020000000afe25a
- (void).cxx_destruct;	// IMP=0x0010000000afe2bf
@property(readonly, nonatomic) RAPStorage *underlyingStorage; // @synthesize underlyingStorage=_underlyingStorage;
@property(nonatomic) __weak MSPHistoryContainer *historyContainer; // @synthesize historyContainer=_historyContainer;
- (void)garbageCollectRAPStorageIfNeeded;	// IMP=0x0010000000afe262
- (void)saveRecording:(id)arg1 forHistoryEntryWithStorageIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000afe13c
- (void)editRecordingForHistoryEntryWithStorageIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000afdf96
- (void)loadAllRecordingsWithConcurrentBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000afd989
- (void)historyContainerPerformMaintenanceForValidIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000afd896
- (id)initWithStorageDirectoryURL:(id)arg1;	// IMP=0x0010000000afd4dc
- (id)init;	// IMP=0x0010000000afd4b2
- (void)saveHistoryEntry:(id)arg1 origin:(long long)arg2 searchTicket:(id)arg3;	// IMP=0x0010000000364a51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
