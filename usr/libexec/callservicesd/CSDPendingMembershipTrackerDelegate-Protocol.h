//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSDConversation, CSDPendingMembershipTracker, NSData, NSUUID, TUConversationMember;

@protocol CSDPendingMembershipTrackerDelegate
- (void)pendingMembershipTracker:(CSDPendingMembershipTracker *)arg1 didTrack:(TUConversationMember *)arg2 forGroupUUID:(NSUUID *)arg3;
- (void)pendingMembershipTracker:(CSDPendingMembershipTracker *)arg1 willNotAdd:(TUConversationMember *)arg2 to:(CSDConversation *)arg3 using:(NSData *)arg4;
- (void)pendingMembershipTracker:(CSDPendingMembershipTracker *)arg1 willAdd:(TUConversationMember *)arg2 to:(CSDConversation *)arg3 using:(NSData *)arg4;
@end

