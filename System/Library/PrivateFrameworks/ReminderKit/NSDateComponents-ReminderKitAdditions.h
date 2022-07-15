//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (ReminderKitAdditions)
+ (id)rem_dateComponentsWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 allDay:(_Bool)arg7 timeZone:(id)arg8;	// IMP=0x006000000003ad92
+ (id)rem_dateWithDateComponents:(id)arg1 timeZone:(id)arg2;	// IMP=0x006000000003ad82
+ (id)rem_dateWithDateComponentsUsingArchivingTimeZone:(id)arg1;	// IMP=0x006000000003ab03
+ (id)rem_dateComponentsWithDate:(id)arg1 timeZone:(id)arg2 isAllDay:(_Bool)arg3;	// IMP=0x006000000003a995
+ (id)rem_dateComponentsWithDateUsingArchivingTimeZone:(id)arg1 isAllDay:(_Bool)arg2;	// IMP=0x006000000003a82a
- (id)rem_stringRepresentation;	// IMP=0x001000000003baf7
- (long long)rem_compare:(id)arg1;	// IMP=0x001000000003b599
- (_Bool)rem_isWeekendDateComponents;	// IMP=0x001000000003b3db
- (_Bool)rem_isAllDayDateComponents;	// IMP=0x001000000003b36a
- (_Bool)rem_isValidDateComponents;	// IMP=0x001000000003b216
- (id)rem_allDayDateComponents;	// IMP=0x001000000003b19c
- (id)rem_strippingTimeZone;	// IMP=0x001000000003b166
- (id)rem_dateComponentsByAddingTimeInterval:(double)arg1;	// IMP=0x001000000003b038
- (id)rem_gregorianEquivalent;	// IMP=0x001000000003aea2
@end
