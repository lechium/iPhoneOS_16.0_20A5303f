//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKCalendarEventInvitationNotification, EKEvent, EKEventOccurrenceInfo, NSDictionary;

@interface InboxRepliedSectionItem : NSObject
{
    EKEventOccurrenceInfo *_occurrenceInfo;	// 8 = 0x8
    EKEvent *_event;	// 16 = 0x10
    EKCalendarEventInvitationNotification *_notification;	// 24 = 0x18
    NSDictionary *_cellFrameDictionary;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000032234
@property(retain, nonatomic) NSDictionary *cellFrameDictionary; // @synthesize cellFrameDictionary=_cellFrameDictionary;
@property(retain, nonatomic) EKCalendarEventInvitationNotification *notification; // @synthesize notification=_notification;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) EKEventOccurrenceInfo *occurrenceInfo; // @synthesize occurrenceInfo=_occurrenceInfo;
- (id)description;	// IMP=0x001000000003209d
- (id)initWithOccurrenceInfo:(id)arg1;	// IMP=0x0010000000032032

@end
