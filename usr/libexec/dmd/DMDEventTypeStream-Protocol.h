//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CEMEventBase, DMDEventStreamEvent, NSDate, NSString;

@protocol DMDEventTypeStream
@property(readonly, copy, nonatomic) NSString *eventType;
- (DMDEventStreamEvent *)eventStatusRollupSinceStartDate:(NSDate *)arg1;
- (void)startNotificationStreamWithEventsHandler:(void (^)(NSArray *))arg1;
- (void)updateEvent:(CEMEventBase *)arg1;
@end

