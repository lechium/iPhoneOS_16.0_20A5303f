//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILocalNotification.h"

@class CLRegion, NSCalendar, NSData, NSDate, NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface UIConcreteLocalNotification : UILocalNotification
{
    NSDate *fireDate;	// 8 = 0x8
    NSTimeZone *timeZone;	// 16 = 0x10
    unsigned long long repeatInterval;	// 24 = 0x18
    NSCalendar *repeatCalendar;	// 32 = 0x20
    CLRegion *region;	// 40 = 0x28
    _Bool regionTriggersOnce;	// 48 = 0x30
    NSString *alertBody;	// 56 = 0x38
    _Bool hasAction;	// 64 = 0x40
    NSString *alertAction;	// 72 = 0x48
    NSString *alertLaunchImage;	// 80 = 0x50
    NSString *alertTitle;	// 88 = 0x58
    NSString *soundName;	// 96 = 0x60
    long long applicationIconBadgeNumber;	// 104 = 0x68
    NSData *userInfoData;	// 112 = 0x70
    NSString *category;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000d11a60
- (void).cxx_destruct;	// IMP=0x0000000000d1426d
- (void)setAlertTitle:(id)arg1;	// IMP=0x0000000000d1425c
- (id)alertTitle;	// IMP=0x0000000000d1424b
- (void)setRegionTriggersOnce:(_Bool)arg1;	// IMP=0x0000000000d1423b
- (_Bool)regionTriggersOnce;	// IMP=0x0000000000d1422b
- (void)setRegion:(id)arg1;	// IMP=0x0000000000d1421a
- (id)region;	// IMP=0x0000000000d14209
- (void)setCategory:(id)arg1;	// IMP=0x0000000000d141f8
- (id)category;	// IMP=0x0000000000d141e7
- (void)setApplicationIconBadgeNumber:(long long)arg1;	// IMP=0x0000000000d141d6
- (long long)applicationIconBadgeNumber;	// IMP=0x0000000000d141c5
- (void)setSoundName:(id)arg1;	// IMP=0x0000000000d141b4
- (id)soundName;	// IMP=0x0000000000d141a3
- (void)setAlertLaunchImage:(id)arg1;	// IMP=0x0000000000d14192
- (id)alertLaunchImage;	// IMP=0x0000000000d14181
- (void)setAlertAction:(id)arg1;	// IMP=0x0000000000d14170
- (id)alertAction;	// IMP=0x0000000000d1415f
- (void)setHasAction:(_Bool)arg1;	// IMP=0x0000000000d1414f
- (_Bool)hasAction;	// IMP=0x0000000000d1413f
- (void)setAlertBody:(id)arg1;	// IMP=0x0000000000d1412e
- (id)alertBody;	// IMP=0x0000000000d1411d
- (void)setRepeatCalendar:(id)arg1;	// IMP=0x0000000000d1410c
- (id)repeatCalendar;	// IMP=0x0000000000d140fb
- (void)setRepeatInterval:(unsigned long long)arg1;	// IMP=0x0000000000d140ea
- (unsigned long long)repeatInterval;	// IMP=0x0000000000d140d9
- (void)setTimeZone:(id)arg1;	// IMP=0x0000000000d140c8
- (id)timeZone;	// IMP=0x0000000000d140b7
- (void)setFireDate:(id)arg1;	// IMP=0x0000000000d140a6
- (id)fireDate;	// IMP=0x0000000000d14095
- (_Bool)isTriggeredByRegion;	// IMP=0x0000000000d14080
- (_Bool)isTriggeredByDate;	// IMP=0x0000000000d1406b
- (void)validate;	// IMP=0x0000000000d13f83
- (_Bool)isValid;	// IMP=0x0000000000d13f07
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;	// IMP=0x0000000000d13278
- (id)nextFireDateForLastFireDate:(id)arg1;	// IMP=0x0000000000d1313e
- (id)description;	// IMP=0x0000000000d12cdc
- (id)userInfo;	// IMP=0x0000000000d12c6b
- (void)setUserInfo:(id)arg1;	// IMP=0x0000000000d12ac8
- (void)_setUserInfoData:(id)arg1;	// IMP=0x0000000000d12ab4
- (long long)compareFireDates:(id)arg1;	// IMP=0x0000000000d1290d
- (unsigned long long)hash;	// IMP=0x0000000000d12879
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d12300
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d12164
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000d11f79
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000d11b00
- (id)init;	// IMP=0x0000000000d11a68

@end

