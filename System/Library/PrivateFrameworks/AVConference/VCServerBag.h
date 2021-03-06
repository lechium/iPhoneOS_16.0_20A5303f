//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCServerBag : NSObject
{
    struct _opaque_pthread_cond_t isLoadedCondition;	// 8 = 0x8
    struct _opaque_pthread_mutex_t isLoadedMutex;	// 56 = 0x38
    _Bool isLoaded;	// 120 = 0x78
    id observer;	// 128 = 0x80
}

+ (_Bool)verifyRequiredKeys:(id *)arg1;	// IMP=0x00600000003815f6
+ (_Bool)verifyRequiredVoiceChatKeys:(id *)arg1;	// IMP=0x0060000000381574
+ (_Bool)verifyRequiredKeys:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000038129c
+ (void)retrieveBag;	// IMP=0x0060000000381296
+ (void)checkKeysAgainstHardcodedPrefs:(id)arg1;	// IMP=0x00600000003810fb
+ (void)clearBagWithRefreshIntervalInSeconds:(int)arg1;	// IMP=0x00600000003810e2
+ (void)pullStoreBagKeys;	// IMP=0x00600000003810dc
+ (id)sharedInstance;	// IMP=0x0060000000380cb7
- (void)waitForBagLoad;	// IMP=0x0000000000380cfc
- (id)init;	// IMP=0x0000000000380c47

@end

