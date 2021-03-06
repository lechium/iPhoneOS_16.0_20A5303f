//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBackgroundActivityScheduler;

@interface RMPeriodicSync : NSObject
{
    NSBackgroundActivityScheduler *_periodicSyncActivity;	// 8 = 0x8
}

+ (void)start;	// IMP=0x000000000005dbb0
+ (id)sharedInstance;	// IMP=0x001000000005db5b
- (void).cxx_destruct;	// IMP=0x002000000005e019
@property(retain, nonatomic) NSBackgroundActivityScheduler *periodicSyncActivity; // @synthesize periodicSyncActivity=_periodicSyncActivity;
- (void)forceSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005de86
- (void)dealloc;	// IMP=0x001000000005de44
- (id)init;	// IMP=0x001000000005dbd2

@end

