//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSDScreenSharingActivityManager, NSError;
@protocol TUScreenShareAttributes;

@protocol CSDScreenSharingActivityManagerDelegate <NSObject>
- (void)screenSharingActivityManager:(CSDScreenSharingActivityManager *)arg1 invalidatedSessionWithReason:(NSError *)arg2 wasLocallySharing:(_Bool)arg3;
- (void)screenSharingActivityManager:(CSDScreenSharingActivityManager *)arg1 receivedUpdatedRemoteAttributes:(id <TUScreenShareAttributes>)arg2 isLocallySharing:(_Bool)arg3;
@end

