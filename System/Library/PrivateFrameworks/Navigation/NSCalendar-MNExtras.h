//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCalendar.h>

@interface NSCalendar (MNExtras)
- (id)_navigation_transitRelativeDateStringForDate:(id)arg1 context:(long long)arg2 inTimeZone:(id)arg3 outUsedFormat:(out unsigned long long *)arg4;	// IMP=0x007000000009b8ba
- (id)_navigation_relativeDateStringForDate:(id)arg1 context:(long long)arg2 inTimeZone:(id)arg3;	// IMP=0x007000000009b6c1
- (id)_navigation_dateStringForDate:(id)arg1 withStyle:(unsigned long long)arg2 useRelativeFormatting:(_Bool)arg3 inTimeZone:(id)arg4;	// IMP=0x007000000009b52e
- (_Bool)_navigation_isDateInTomorrow:(id)arg1 inTimeZone:(id)arg2;	// IMP=0x007000000009b4db
- (_Bool)_navigation_isDateInToday:(id)arg1 inTimeZone:(id)arg2;	// IMP=0x007000000009b488
- (id)_navigation_offsetDate:(id)arg1 toTimeZone:(id)arg2;	// IMP=0x007000000009b3ae
@end

