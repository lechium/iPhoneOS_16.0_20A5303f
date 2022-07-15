//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HDSPEventScheduleDelegate;

__attribute__((visibility("hidden")))
@interface HDSPXPCAlarmScheduler : NSObject
{
    id <HDSPEventScheduleDelegate> delegate;	// 8 = 0x8
    CDUnknownBlockType _currentDateProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000580cc
@property(readonly, copy, nonatomic) CDUnknownBlockType currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property(nonatomic) __weak id <HDSPEventScheduleDelegate> delegate; // @synthesize delegate;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;	// IMP=0x0000000000057f12
- (void)unschedule;	// IMP=0x0000000000057ec6
- (void)scheduleEventForDate:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000057d80
- (id)initWithCurrentDateProvider:(CDUnknownBlockType)arg1;	// IMP=0x0000000000057cf6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
