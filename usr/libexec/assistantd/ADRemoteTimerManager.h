//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADRemoteTimerManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_storagesByDeviceIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000094b49
- (void)_sendStereoPartnerAction:(id)arg1 timerID:(id)arg2 changes:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000094a78
- (void)_invalidateStorageForDeviceWithIdentifier:(id)arg1;	// IMP=0x00100000000949f8
- (id)_storageForDeviceWithIdentifier:(id)arg1;	// IMP=0x0010000000094964
- (void)clockItemStorageDidUpdate:(id)arg1 insertedItemIDs:(id)arg2 updatedItemIDs:(id)arg3 deletedItemIDs:(id)arg4;	// IMP=0x0010000000094920
- (void)removeTimerWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000947ce
- (void)updateTimerWithID:(id)arg1 changes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000094644
- (void)accessStorageForDeviceWithIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000094516
- (void)finalizeStorageForDeviceWithIdentifier:(id)arg1;	// IMP=0x001000000009446e
- (void)prepareStorageForDeviceWithIdentifier:(id)arg1;	// IMP=0x00100000000943bd
- (void)getSnapshotsByDeviceIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000940af
- (void)getSnapshotForDeviceWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000093e2d
- (id)init;	// IMP=0x0010000000093d8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
