//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface ADSyncFlagManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableSet *_cachedFlags;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00400000002421c0
- (void).cxx_destruct;	// IMP=0x0020000000242eb2
- (void)_clearSyncNeededFlagsForKeys:(id)arg1;	// IMP=0x0010000000242be2
- (void)_setSyncNeededFlagsForKeys:(id)arg1;	// IMP=0x00100000002428b6
- (void)_fetchSyncFlagsOnDisk;	// IMP=0x00100000002425ec
- (void)clearAllFlags;	// IMP=0x0010000000242532
- (void)clearFlagsForKeys:(id)arg1;	// IMP=0x0010000000242456
- (void)setSyncNeededFlagForKeys:(id)arg1;	// IMP=0x001000000024237a
- (void)fetchKeysThatNeedToSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000002422ae
- (id)init;	// IMP=0x0010000000242215

@end
