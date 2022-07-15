//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFHomeAnnouncementObserver, AFHomeAnnouncementSnapshot, AFInstanceContext, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface ADHomeAnnouncementContextAdaptor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
    AFHomeAnnouncementObserver *_observer;	// 24 = 0x18
    AFHomeAnnouncementSnapshot *_snapshot;	// 32 = 0x20
    CDUnknownBlockType _snapshotUpdater;	// 40 = 0x28
    double _expirationDuration;	// 48 = 0x30
    AFInstanceContext *_instanceContext;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000021c459
- (void)_setSnapshot:(id)arg1;	// IMP=0x001000000021c33c
- (void)_processAndEvaluateSnapshot:(id)arg1;	// IMP=0x001000000021ba41
- (void)_invalidate;	// IMP=0x001000000021b9c2
- (void)homeAnnouncementObserver:(id)arg1 snapshotDidUpdateFrom:(id)arg2 to:(id)arg3;	// IMP=0x001000000021b91a
- (void)homeAnnouncementObserver:(id)arg1 stateDidUpdateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x001000000021b914
- (void)invalidate;	// IMP=0x001000000021b8b3
- (void)getSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000021b7be
- (void)unregisterSnapshotUpdater;	// IMP=0x001000000021b6db
- (void)registerSnapshotUpdater:(CDUnknownBlockType)arg1;	// IMP=0x001000000021b4ce
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x001000000021b345

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
