//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol NavdDoomStorageSnapshotDataSource, OS_dispatch_queue;

@interface NavdDoomEvalDumper : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSDictionary *_currentStateDictionary;	// 16 = 0x10
    id <NavdDoomStorageSnapshotDataSource> _snapshotDataSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002dc25
@property(retain, nonatomic) id <NavdDoomStorageSnapshotDataSource> snapshotDataSource; // @synthesize snapshotDataSource=_snapshotDataSource;
- (void)didEndUpdate;	// IMP=0x001000000002da30
- (void)didScheduleWakeup;	// IMP=0x001000000002d856
- (void)didFireAlert;	// IMP=0x001000000002d67c
- (void)willFireAlert;	// IMP=0x001000000002d4a2
- (void)didUpdateRoutes;	// IMP=0x001000000002d2c8
- (void)willUpdateRoutes;	// IMP=0x001000000002d0ee
- (void)didUpdateDestinations;	// IMP=0x001000000002cf14
- (void)willUpdateDestinations;	// IMP=0x001000000002cd3a
- (void)didUpdateWindow;	// IMP=0x001000000002cb60
- (void)didInvalidateWindow;	// IMP=0x001000000002c986
- (void)didUpdateExitTime;	// IMP=0x001000000002c7ac
- (void)willUpdateExitTime;	// IMP=0x001000000002c5d2
- (void)willStartUpdate;	// IMP=0x001000000002c3d8
- (void)logCurrentState:(id)arg1 stepName:(id)arg2 stopReason:(id)arg3;	// IMP=0x001000000002bf60
- (id)init;	// IMP=0x001000000002becc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
