//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class CMMotionAlarm, NSError;

@protocol CMMotionAlarmDelegateProtocol <NSObject>
- (void)remoteAppLaunchedWithResult:(unsigned int)arg1 error:(NSError *)arg2;
- (void)alarmDidFire:(CMMotionAlarm *)arg1 error:(NSError *)arg2;
- (void)alarmDidUnregister:(CMMotionAlarm *)arg1 error:(NSError *)arg2;
- (void)alarmDidRegister:(CMMotionAlarm *)arg1 error:(NSError *)arg2;
@end

