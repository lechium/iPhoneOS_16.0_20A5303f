//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HDSPEventRecordMessage.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface HDSPSleepAlarmSnoozedIDSMessage : HDSPEventRecordMessage
{
}

- (id)dateDescription;	// IMP=0x0000000000039c3a
@property(readonly, nonatomic) NSDate *snoozedUntilDate;
- (unsigned long long)destinations;	// IMP=0x0000000000039c1d
- (id)initWithSnoozedUntilDate:(id)arg1;	// IMP=0x0000000000039c0b

@end

