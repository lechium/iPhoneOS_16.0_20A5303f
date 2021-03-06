//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceSyncCommandPullSnapshotResponse, ADDeviceSyncSnapshot, NSString;

@interface _ADDeviceSyncCommandPullSnapshotResponseMutation : NSObject
{
    ADDeviceSyncCommandPullSnapshotResponse *_base;	// 8 = 0x8
    ADDeviceSyncSnapshot *_snapshot;	// 16 = 0x10
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasSnapshot:1;
    } _mutationFlags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001f87c4
- (void)setSnapshot:(id)arg1;	// IMP=0x00100000001f87a4
- (id)getSnapshot;	// IMP=0x00100000001f876c
- (_Bool)isDirty;	// IMP=0x00100000001f8761
- (id)initWithBase:(id)arg1;	// IMP=0x00100000001f86f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

