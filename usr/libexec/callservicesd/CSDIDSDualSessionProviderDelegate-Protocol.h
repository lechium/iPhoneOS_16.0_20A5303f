//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSSet, NSString;
@protocol CSDIDSDualSessionProvider;

@protocol CSDIDSDualSessionProviderDelegate <NSObject>
- (void)sessionProvider:(id <CSDIDSDualSessionProvider>)arg1 receivedInvitationDeclineFromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)sessionProvider:(id <CSDIDSDualSessionProvider>)arg1 receivedInvitationCancelFromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)sessionProvider:(id <CSDIDSDualSessionProvider>)arg1 receivedInvitationAcceptFromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)sessionProvider:(id <CSDIDSDualSessionProvider>)arg1 endedWithReason:(unsigned int)arg2 error:(NSError *)arg3;
- (void)sessionProvider:(id <CSDIDSDualSessionProvider>)arg1 invitationSentToPushTokens:(NSSet *)arg2 shouldBreakBeforeMake:(_Bool)arg3;
- (void)sessionProviderStarted:(id <CSDIDSDualSessionProvider>)arg1;
- (void)sessionProvider:(id <CSDIDSDualSessionProvider>)arg1 receivedSessionMessageFromID:(NSString *)arg2 withData:(NSData *)arg3;
@end
