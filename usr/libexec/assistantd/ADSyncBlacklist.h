//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface ADSyncBlacklist : NSObject
{
    NSDictionary *_cachedTimeoutTable;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x004000000009bcb8
- (void).cxx_destruct;	// IMP=0x002000000009da0b
- (void)_saveTimeouts:(id)arg1;	// IMP=0x001000000009d8fb
- (void)saveTimeouts:(id)arg1;	// IMP=0x001000000009d853
- (id)_timeouts:(id)arg1 expiringAfter:(id)arg2;	// IMP=0x001000000009d71c
- (id)_timeoutsExpiringAfter:(id)arg1;	// IMP=0x001000000009d703
- (id)timeoutsExpiringAfter:(id)arg1;	// IMP=0x001000000009d5a1
- (void)filterBlacklistedKeys:(id)arg1 appSources:(id)arg2;	// IMP=0x001000000009d0ea
- (void)filterBlacklistedKeys:(id)arg1 vocabSources:(id)arg2;	// IMP=0x001000000009cb9c
- (void)filterBlacklistedAnchorsFrom:(id)arg1 includingNewRestrictionsFromResponse:(id)arg2;	// IMP=0x001000000009c561
- (void)checkPermissionToSyncSlot:(id)arg1 forApp:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009c2e4
- (void)checkIfAnyUserVocabularyIsBlacklistedForApp:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009bf8e
- (id)_storePath;	// IMP=0x001000000009bf40
- (id)init;	// IMP=0x001000000009bd3d

@end
