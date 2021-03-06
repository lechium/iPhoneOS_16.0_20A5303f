//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IMExtensionNotificationManager : NSObject
{
    NSMutableArray *_notificationsContext;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0060000000026b02
- (void).cxx_destruct;	// IMP=0x00000000000272b5
@property(retain, nonatomic) NSMutableArray *notificationsContext; // @synthesize notificationsContext=_notificationsContext;
- (_Bool)shouldRetractedMessageForBalloonBundleID:(id)arg1;	// IMP=0x000000000002713f
- (_Bool)canPopulateUserInfoForMessageBalloonBundleID:(id)arg1;	// IMP=0x0000000000026fbd
- (id)notificationCategories;	// IMP=0x0000000000026e29
- (void)populateUserInfoForNotificationContent:(id)arg1 messageBalloonBundleID:(id)arg2 payloadData:(id)arg3;	// IMP=0x0000000000026c67
- (id)init;	// IMP=0x0000000000026b57

@end

