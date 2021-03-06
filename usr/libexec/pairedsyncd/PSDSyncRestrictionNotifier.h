//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PSDScheduler;

@interface PSDSyncRestrictionNotifier : NSObject
{
    PSDScheduler *_scheduler;	// 8 = 0x8
    int _lastSyncSwitchIDNotifyToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000002bbd
- (void)setNotifyToken:(int)arg1 withValue:(unsigned long long)arg2 withNotificationName:(id)arg3;	// IMP=0x0010000000002a46
- (int)notifyTokenWithName:(id)arg1;	// IMP=0x001000000000297d
- (void)setSyncComplete;	// IMP=0x00100000000028e7
- (void)scheduler:(id)arg1 didClearSyncSession:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000028a0
- (void)scheduler:(id)arg1 willStartSyncSession:(id)arg2;	// IMP=0x001000000000284e
- (void)dealloc;	// IMP=0x00100000000027f1
- (id)initWithScheduler:(id)arg1;	// IMP=0x0010000000002761
- (id)init;	// IMP=0x0010000000002707

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

