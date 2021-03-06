//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDSecureRemoteSession, HMFMessage, NSError;

@protocol HMDSecureRemoteSessionDelegate <NSObject>
- (void)secureRemoteSession:(HMDSecureRemoteSession *)arg1 receivedRequestToSendMessage:(HMFMessage *)arg2;

@optional
- (void)secureRemoteSession:(HMDSecureRemoteSession *)arg1 didCloseWithError:(NSError *)arg2;
@end

