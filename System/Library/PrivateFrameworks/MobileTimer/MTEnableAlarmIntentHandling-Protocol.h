//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTEnableAlarmIntent;

@protocol MTEnableAlarmIntentHandling <NSObject>
- (void)handleEnableAlarm:(MTEnableAlarmIntent *)arg1 completion:(void (^)(MTEnableAlarmIntentResponse *))arg2;

@optional
- (void)confirmEnableAlarm:(MTEnableAlarmIntent *)arg1 completion:(void (^)(MTEnableAlarmIntentResponse *))arg2;
@end

