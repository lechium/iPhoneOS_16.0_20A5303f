//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSSet, NSString, RMSubscribedStatusKeyPathUpdater;

@interface RMClientCapabilitiesController : NSObject
{
    MISSING_TYPE *_subscribedStatusUpdater;	// 8 = 0x8
}

+ (void)start;	// IMP=0x0020000000011510
+ (id)sharedController;	// IMP=0x00100000000113ff
- (void).cxx_destruct;	// IMP=0x0020000000011f2e
@property(retain, nonatomic) RMSubscribedStatusKeyPathUpdater *subscribedStatusUpdater; // @synthesize subscribedStatusUpdater=_subscribedStatusUpdater;
- (id)queryForUnacknowledgedStatusWithKeyPaths:(id)arg1 lastAcknowledgedDateByKeyPath:(id)arg2 onBehalfOfManagementChannel:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000011efb
- (id)queryForStatusWithKeyPaths:(id)arg1 onBehalfOfManagementChannel:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000011d83
@property(readonly, nonatomic) NSSet *supportedKeyPaths;
- (void)_notifyChangesIfNeeded;	// IMP=0x0010000000011578
- (id)initWithSubscribedStatusKeyPathUpdater:(id)arg1;	// IMP=0x00100000000114a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
