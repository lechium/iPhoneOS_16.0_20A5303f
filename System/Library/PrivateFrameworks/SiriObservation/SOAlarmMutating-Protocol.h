//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriObservation/NSObject-Protocol.h>

@class NSString, NSURL, NSUUID;

@protocol SOAlarmMutating <NSObject>
- (void)setIsFiring:(_Bool)arg1;
- (void)setIsEnabled:(_Bool)arg1;
- (void)setRepeatSchedule:(unsigned long long)arg1;
- (void)setMinute:(unsigned long long)arg1;
- (void)setHour:(unsigned long long)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setAlarmURL:(NSURL *)arg1;
- (void)setAlarmID:(NSUUID *)arg1;
@end
