//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSRecursiveLock, NSString, SHAttribution;
@protocol SHMediaLibrarySyncDelegate, SHWorkerDelegate;

@interface SHMediaLibrarySyncManager : NSObject
{
    id <SHMediaLibrarySyncDelegate> _delegate;	// 8 = 0x8
    id <SHWorkerDelegate> _workerDelegate;	// 16 = 0x10
    NSMapTable *_activeControllers;	// 24 = 0x18
    SHAttribution *_attribution;	// 32 = 0x20
    NSRecursiveLock *_lock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000004d17
@property(readonly, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) SHAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) NSMapTable *activeControllers; // @synthesize activeControllers=_activeControllers;
@property(nonatomic) __weak id <SHWorkerDelegate> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
@property(nonatomic) __weak id <SHMediaLibrarySyncDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_synchronizeSnapshot:(id)arg1 startCondition:(id)arg2;	// IMP=0x0010000000004c4b
- (void)updateSnapshotWithAttribution:(id)arg1;	// IMP=0x00100000000048c2
- (double)timeRequiredToPerformWork;	// IMP=0x00100000000048b1
@property(readonly, nonatomic) _Bool managesRecordingSession;
- (oneway void)stop;	// IMP=0x00100000000047c3
- (id)requiredEntitlements;	// IMP=0x00100000000047b6
@property(readonly) _Bool isRunning;
- (void)_libraryDidCompleteSync:(id)arg1;	// IMP=0x00100000000044c2
- (void)_library:(id)arg1 didProduceError:(id)arg2 failedItemIdentifiers:(id)arg3;	// IMP=0x0010000000004439
- (void)_library:(id)arg1 didChangeWithSnapshot:(id)arg2;	// IMP=0x00100000000043c4
- (void)_libraryWillBeginSync:(id)arg1;	// IMP=0x0010000000004378
- (void)synchronizeSnapshot:(id)arg1 startCondition:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004142
- (id)initWithAttribution:(id)arg1;	// IMP=0x0010000000004085

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

