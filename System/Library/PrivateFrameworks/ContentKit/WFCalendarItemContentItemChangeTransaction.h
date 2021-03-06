//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFContentItemChangeTransaction.h"

@class EKCalendarItem, EKEventStore;

__attribute__((visibility("hidden")))
@interface WFCalendarItemContentItemChangeTransaction : WFContentItemChangeTransaction
{
    EKCalendarItem *_mutableEvent;	// 8 = 0x8
    EKEventStore *_eventStore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001042e4
@property(readonly, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(readonly, nonatomic) EKCalendarItem *mutableEvent; // @synthesize mutableEvent=_mutableEvent;
- (void)removeAllAttachments;	// IMP=0x000000000010410f
- (void)addAttachments:(id)arg1;	// IMP=0x0000000000103e2c
- (void)updateAttachments:(id)arg1;	// IMP=0x0000000000103d57
- (id)initWithContentItem:(id)arg1 eventStore:(id)arg2;	// IMP=0x0000000000103b9f

@end

