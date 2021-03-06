//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/CNTask.h>

@class CNChangeHistoryEventFactory, CNSaveRequest;
@protocol CNChangeHistoryEventVisitorPrivate;

__attribute__((visibility("hidden")))
@interface CNSaveRequestVisitationTask : CNTask
{
    CNSaveRequest *_saveRequest;	// 24 = 0x18
    id <CNChangeHistoryEventVisitorPrivate> _visitor;	// 32 = 0x20
    CNChangeHistoryEventFactory *_factory;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000cc7f2
@property(readonly) CNChangeHistoryEventFactory *factory; // @synthesize factory=_factory;
@property(readonly) id <CNChangeHistoryEventVisitorPrivate> visitor; // @synthesize visitor=_visitor;
@property(readonly) CNSaveRequest *saveRequest; // @synthesize saveRequest=_saveRequest;
- (void)sendDifferentMeCardEvent;	// IMP=0x00000000000cc6c4
- (void)sendPreferredContactForImageEvents;	// IMP=0x00000000000cc5e0
- (void)sendPreferredContactForNameEvents;	// IMP=0x00000000000cc500
- (void)sendUnlinkContactEvents;	// IMP=0x00000000000cc41f
- (void)sendLinkContactsEvents;	// IMP=0x00000000000cc338
- (void)sendRemoveSubgroupFromGroupEvents;	// IMP=0x00000000000cc254
- (void)sendAddSubgroupToGroupEvents;	// IMP=0x00000000000cc170
- (void)sendRemoveMemberFromGroupEvents;	// IMP=0x00000000000cc08c
- (void)sendAddMemberToGroupEvents;	// IMP=0x00000000000cbfa8
- (void)sendDeletedGroupEvents;	// IMP=0x00000000000cbec7
- (void)sendUpdatedGroupEvents;	// IMP=0x00000000000cbde6
- (void)sendAddedGroupEvents;	// IMP=0x00000000000cbd02
- (void)sendDeletedContactEvents;	// IMP=0x00000000000cbc21
- (void)sendUpdatedContactEvents;	// IMP=0x00000000000cbb40
- (void)sendAddedContactEvents;	// IMP=0x00000000000cba5c
- (id)run:(id *)arg1;	// IMP=0x00000000000cb974
- (id)initWithSaveRequest:(id)arg1 visitor:(id)arg2 factory:(id)arg3;	// IMP=0x00000000000cb89c

@end

