//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC13callservicesd33GroupFaceTimeNotificationProvider : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *conversationManager;	// 16 = 0x10
    MISSING_TYPE *ftNetworkSupport;	// 24 = 0x18
    MISSING_TYPE *invitationResolver;	// 32 = 0x20
    MISSING_TYPE *featureFlags;	// 40 = 0x28
    MISSING_TYPE *notificationIdentifiersByConversationUUID;	// 48 = 0x30
    MISSING_TYPE *carPlayNotificationIdentifiersByConversationUUID;	// 56 = 0x38
    MISSING_TYPE *faceTimeNotificationCenter;	// 64 = 0x40
    MISSING_TYPE *conversationServerBag;	// 72 = 0x48
    MISSING_TYPE *facetimeIsShowingOnScreen;	// 80 = 0x50
    MISSING_TYPE *openURL;	// 88 = 0x58
    MISSING_TYPE *unlockAndOpenSensitiveURL;	// 104 = 0x68
    MISSING_TYPE *localizeConversationName;	// 120 = 0x78
    MISSING_TYPE *localizeHandleName;	// 136 = 0x88
    MISSING_TYPE *localizeHandleNameWithConversation;	// 152 = 0x98
    MISSING_TYPE *notificationType;	// 168 = 0xa8
    MISSING_TYPE *categories;	// 176 = 0xb0
    MISSING_TYPE *add;	// 184 = 0xb8
    MISSING_TYPE *replace;	// 200 = 0xc8
    MISSING_TYPE *removeNotification;	// 216 = 0xd8
    MISSING_TYPE *updateBadgeValue;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x00400000001fc210
- (void)handlePendingMessageDidReceiveInviteNotification:(id)arg1;	// IMP=0x0000000000201480
- (void)momentsStartedRemoteCapture:(id)arg1;	// IMP=0x0010000000200be0
- (void)dealloc;	// IMP=0x00100000001fc1a0
- (id)init;	// IMP=0x00100000001fc130

@end
