//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (TVPlaybackAdditions)
+ (id)tvp_dateWithMillisecondsSince1970:(id)arg1;	// IMP=0x0050000000057e04
+ (_Bool)tvp_networkTimeIsApproximatelyCorrect;	// IMP=0x0050000000057ddf
- (_Bool)_isEqualToDateIgnoringTime:(id)arg1;	// IMP=0x001000000005832c
- (_Bool)tvp_isYesterday;	// IMP=0x00100000000582ac
- (_Bool)tvp_isTomorrow;	// IMP=0x001000000005822c
- (_Bool)tvp_isToday;	// IMP=0x00100000000581d2
- (id)tvp_dateBySubtractingDays:(long long)arg1;	// IMP=0x00100000000581bd
- (id)tvp_dateByAddingDays:(long long)arg1;	// IMP=0x001000000005811d
- (id)tvp_dateCeiledToNearestMinute:(int)arg1;	// IMP=0x0010000000057fc1
- (id)tvp_dateFlooredToNearestMinute:(int)arg1;	// IMP=0x0010000000057e96
@end
