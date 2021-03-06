//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NDTLogFacility, NDTMessaging, NSString;

@interface NEKRPCEndpoint : NSObject
{
    NSString *_clientName;	// 8 = 0x8
    NDTMessaging *_messaging;	// 16 = 0x10
    NDTLogFacility *_messageLogging;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002c4fe
- (void)_recvSetReminderKitAlarmSnoozeEndpoint:(id)arg1;	// IMP=0x001000000002bba3
- (void)_recvSetEventKitAlarmSnoozeEndpoint:(id)arg1;	// IMP=0x001000000002b13a
- (_Bool)_calendarItem:(id)arg1 snoozeAlarmID:(id)arg2 withTimeIntervalFromNow:(double)arg3;	// IMP=0x001000000002af13
- (void)_recvDeleteEventEndpoint:(id)arg1;	// IMP=0x001000000002a5a4
- (void)_recvSetReminderKitReminderCompletedEndpoint:(id)arg1;	// IMP=0x001000000002a058
- (void)_recvSetEventKitReminderCompletedEndpoint:(id)arg1;	// IMP=0x00100000000294d2
- (void)_recvSetParticipantStatusEndpoint:(id)arg1;	// IMP=0x001000000002903d
- (void)sendSetEventAlarmSnooze:(double)arg1 calendarName:(id)arg2 storeId:(id)arg3 eventId:(id)arg4 alarmIdentifier:(id)arg5;	// IMP=0x0010000000029037
- (void)sendSetReminderAlarmSnooze:(double)arg1 calendarName:(id)arg2 title:(id)arg3 externalIdentifier:(id)arg4 alarmIdentifier:(id)arg5;	// IMP=0x0010000000029031
- (void)sendSetCompleted:(_Bool)arg1 calendarName:(id)arg2 title:(id)arg3 externalIdentifier:(id)arg4;	// IMP=0x001000000002902b
- (void)sendDeleteEventId:(id)arg1 title:(id)arg2 start:(double)arg3 inCalendarId:(id)arg4 title:(id)arg5 inSource:(id)arg6 span:(long long)arg7;	// IMP=0x0010000000029025
- (void)sendSetParticipantStatus:(long long)arg1 span:(long long)arg2 storeId:(id)arg3 eventId:(id)arg4;	// IMP=0x001000000002901f
- (_Bool)_disableMutation;	// IMP=0x0010000000028fe8
- (id)initWithReminderKitEnabled:(_Bool)arg1 clientName:(id)arg2;	// IMP=0x0010000000028cc3

@end

