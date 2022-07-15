//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "FCAppActivityObserving-Protocol.h"

@class NSDate;

@protocol FRAppActivityObserving <FCAppActivityObserving>

@optional
- (void)startRecordingExposure;
- (void)recordExposureEventWithStartDate:(NSDate *)arg1;
- (void)activityObservingUserDidPerformAction;
- (void)activityObservingApplicationWillTerminate;
- (void)activityObservingApplicationWillResignActive;
- (void)activityObservingApplicationDidBecomeActive;
@end
