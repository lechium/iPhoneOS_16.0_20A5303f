//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/_HKFitnessFriendWorkout.h>

@class ASCodableCloudKitWorkout, NSString;

@interface _HKFitnessFriendWorkout (CloudKitCodingSupport)
+ (id)_fitnessFriendWorkoutWithCodableWorkout:(id)arg1 friendUUID:(id)arg2;	// IMP=0x0010000000005230
+ (id)fitnessFriendWorkoutWithCodableWorkout:(id)arg1 friendUUID:(id)arg2;	// IMP=0x001000000000521e
+ (id)fitnessFriendWorkoutWithCodableWorkout:(id)arg1;	// IMP=0x001000000000520a
+ (id)fitnessFriendWorkoutWithRecord:(id)arg1 friendUUID:(id)arg2;	// IMP=0x0010000000005045
- (id)recordWithZoneID:(id)arg1;	// IMP=0x0010000000004dc6
@property(readonly, nonatomic) ASCodableCloudKitWorkout *codableWorkout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

