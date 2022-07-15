//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNChangeHistoryEventVisitor-Protocol.h>

@class CNChangeHistoryDifferentMeCardEvent, CNChangeHistoryLinkContactsEvent, CNChangeHistoryPreferredContactForImageEvent, CNChangeHistoryPreferredContactForNameEvent, CNChangeHistoryUnlinkContactEvent;

@protocol CNChangeHistoryEventVisitorPrivate <CNChangeHistoryEventVisitor>
- (void)visitDifferentMeCardEvent:(CNChangeHistoryDifferentMeCardEvent *)arg1;
- (void)visitPreferredContactForImageEvent:(CNChangeHistoryPreferredContactForImageEvent *)arg1;
- (void)visitPreferredContactForNameEvent:(CNChangeHistoryPreferredContactForNameEvent *)arg1;
- (void)visitUnlinkContactEvent:(CNChangeHistoryUnlinkContactEvent *)arg1;
- (void)visitLinkContactsEvent:(CNChangeHistoryLinkContactsEvent *)arg1;
@end
