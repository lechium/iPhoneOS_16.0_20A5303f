//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DMDUserNotificationManager : NSObject
{
}

+ (id)sharedManager;	// IMP=0x0020000000083fea
- (void)promptUserToLogIntoiTunesWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x004000000008519c
- (void)displayUserNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonText:(id)arg4 alternateButtonText:(id)arg5 otherButtonText:(id)arg6 displayOnLockScreen:(_Bool)arg7 displayInAppWhitelistModes:(_Bool)arg8 dismissAfterTimeInterval:(double)arg9 assertion:(id)arg10 completionBlock:(CDUnknownBlockType)arg11;	// IMP=0x0010000000084ddd
- (void)displayUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButtonText:(id)arg3 alternateButtonText:(id)arg4 otherButtonText:(id)arg5 displayOnLockScreen:(_Bool)arg6 displayInAppWhitelistModes:(_Bool)arg7 dismissAfterTimeInterval:(double)arg8 assertion:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;	// IMP=0x0010000000084d88
- (void)cancelNotificationEntriesMatchingPredicate:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000008485e
- (void)cancelAllNotificationsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000008483a
- (void)mainQueueDidReceiveAppWhitelistChangedNotification;	// IMP=0x0010000000084288
- (void)dealloc;	// IMP=0x0010000000084204
- (id)init;	// IMP=0x001000000008406f

@end
