//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (GKExtensions)
+ (id)_gkFormattedTimeIntervalStringWithStartDate:(id)arg1 endDate:(id)arg2 calendarUnits:(unsigned long long)arg3 style:(long long)arg4;	// IMP=0x002000000008a32c
+ (id)_gkServerTimestamp;	// IMP=0x001000000008d410
+ (id)_gkDateFromServerTimestamp:(id)arg1;	// IMP=0x001000000008d3c1
+ (id)_gkDateFromScalarServerTimestamp:(unsigned long long)arg1;	// IMP=0x001000000008d369
- (id)_gkFormattedWhenStringWithOptions:(unsigned long long)arg1;	// IMP=0x002000000008a5d2
- (id)_gkFormattedDateForStyle:(unsigned long long)arg1 relative:(_Bool)arg2;	// IMP=0x001000000008a4ea
- (id)_gkFormattedStringWithDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2;	// IMP=0x001000000008a447
- (id)_gkServerTimestamp;	// IMP=0x001000000008d460
@end
