//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFShowNextEventRequest.h>

@interface AFShowNextEventRequest (ADShowNextEventRequestHandler)
+ (id)nanoCalendarLaunchURLForEvent:(id)arg1;	// IMP=0x0010000000245010
+ (id)_calendarIDsForSyncHashes:(id)arg1 inCalendars:(id)arg2;	// IMP=0x0010000000244c28
- (id)_selectedCalendarsForEventStore:(id)arg1;	// IMP=0x00200000002448d1
- (_Bool)_shouldExcludeEvent:(id)arg1 allowAllDayEvents:(_Bool)arg2;	// IMP=0x00100000002447ab
- (id)_nextEventFromFilteredEvents:(id)arg1;	// IMP=0x00100000002443c1
- (void)_ad_handleShowNextEventRequestWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000243d64
@end
