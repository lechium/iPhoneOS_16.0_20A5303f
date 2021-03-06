//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BPSSink, NSMutableDictionary, NSString, PDDatabase;
@protocol OS_dispatch_queue;

@interface PDBiomeClient : NSObject
{
    BPSSink *_sink;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_biomeQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_taskQueue;	// 24 = 0x18
    NSString *_scheduleMarkDoneTaskID;	// 32 = 0x20
    NSString *_scheduleHalfDoneTaskID;	// 40 = 0x28
    NSMutableDictionary *_bannerTimerMap;	// 48 = 0x30
    PDDatabase *_database;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000b1800
@property(retain, nonatomic) PDDatabase *database; // @synthesize database=_database;
- (void)cleanUpScheduledTaskTriggers:(long long)arg1;	// IMP=0x00100000000b1637
- (_Bool)triggerScheduledTask:(long long)arg1 targetInterval:(double)arg2;	// IMP=0x00100000000b13d8
- (void)rescheduleTask:(long long)arg1 current:(id)arg2 targetDate:(id)arg3;	// IMP=0x00100000000b11ca
- (_Bool)checkScheduledTask:(id)arg1 completionType:(long long)arg2;	// IMP=0x00100000000b0fbb
- (id)localizedTimeInterval:(double)arg1 calendar:(id)arg2;	// IMP=0x00100000000b0f05
- (void)presentHalfWayCompletedBanner:(id)arg1;	// IMP=0x00100000000b0cd4
- (void)presentAppBasedAssignmentCompletedBanner:(id)arg1;	// IMP=0x00100000000b0885
- (void)presentProgressBannerWithAttachmentID:(id)arg1;	// IMP=0x00100000000b0200
- (id)tryAgainDateFromCollaborationState:(id)arg1;	// IMP=0x00100000000b0164
- (double)calculateDelta:(id)arg1 usage:(id)arg2 completionType:(long long)arg3 isTryAgain:(_Bool)arg4 tryAgainDate:(id)arg5;	// IMP=0x00100000000aff33
- (_Bool)scheduleHalfWayNotificationIfNeeded:(id)arg1 appUsage:(id)arg2 isTryAgain:(_Bool)arg3 tryAgainDate:(id)arg4;	// IMP=0x00100000000afe2c
- (_Bool)scheduleMarkDoneIfNeeded:(id)arg1 appUsage:(id)arg2 isTryAgain:(_Bool)arg3 tryAgainDate:(id)arg4;	// IMP=0x00100000000afd45
- (void)createScheduleTasks:(id)arg1;	// IMP=0x00100000000afa5f
- (void)markDone:(id)arg1 then:(CDUnknownBlockType)arg2;	// IMP=0x00100000000af25f
- (void)scheduleActivityDone:(id)arg1 appUsage:(id)arg2 timeInterval:(double)arg3 saveTrigger:(_Bool)arg4;	// IMP=0x00100000000aedd7
- (void)scheduleHalfWayDoneNotification:(double)arg1 attachmentID:(id)arg2 saveTrigger:(_Bool)arg3;	// IMP=0x00100000000aea34
- (void)handleTimeExpectationReached:(id)arg1 appUsage:(id)arg2 interval:(double)arg3;	// IMP=0x00100000000ae83c
- (void)generateTimeIntervalForActivity:(id)arg1 startDate:(id)arg2 interval:(double)arg3;	// IMP=0x00100000000ae69d
- (void)updateAppBasedUsageIfNeeded:(id)arg1 isStarting:(_Bool)arg2 dateInterval:(id)arg3;	// IMP=0x00100000000ade34
- (void)startSubscription;	// IMP=0x00100000000ad9ce
- (void)cancelSubscription;	// IMP=0x00100000000ad9b8
- (id)init;	// IMP=0x00100000000ad84b

@end

