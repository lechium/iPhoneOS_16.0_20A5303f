//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

__attribute__((visibility("hidden")))
@interface CNGameCenterAddFriendAction : CNContactAction
{
}

- (CDUnknownBlockType)addFriendsMenuProvider;	// IMP=0x0000000000028b78
- (id)actionTitleForContact:(id)arg1;	// IMP=0x0000000000028a40
- (id)contactPerHandleForContact:(id)arg1;	// IMP=0x0000000000028958
- (void)createInviteFriendViewControllerForContact:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028828
- (void)addContactAsFriend:(id)arg1;	// IMP=0x0000000000028768
- (void)performActionWithSender:(id)arg1;	// IMP=0x000000000002871c
- (id)title;	// IMP=0x00000000000286c0

@end

