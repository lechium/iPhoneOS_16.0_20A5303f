//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SharedWithYouCore/SWCollaborationActionHandler-Protocol.h>

@class SWStartCollaborationAction, SWUpdateCollaborationParticipantsAction;

@protocol _SWCollaborationActionHandler <SWCollaborationActionHandler>

@optional
- (void)handleUpdateCollaborationParticipantsAction:(SWUpdateCollaborationParticipantsAction *)arg1;
- (void)handleStartCollaborationAction:(SWStartCollaborationAction *)arg1;
@end

