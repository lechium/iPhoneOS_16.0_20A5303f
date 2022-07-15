//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestionsInternals/SGJournalBaseObserver-Protocol.h>

@class SGStorageReminder;

@protocol SGJournalRemindersObserver <SGJournalBaseObserver>
- (void)orphanReminder:(SGStorageReminder *)arg1;
- (void)rejectReminderFromOtherDevice:(SGStorageReminder *)arg1;
- (void)confirmReminderFromOtherDevice:(SGStorageReminder *)arg1;
- (void)reminderAlarmTriggeredFromThisDevice:(SGStorageReminder *)arg1;
- (void)rejectReminderFromThisDevice:(SGStorageReminder *)arg1;
- (void)confirmReminderFromThisDevice:(SGStorageReminder *)arg1;
- (void)addReminder:(SGStorageReminder *)arg1;
@end
