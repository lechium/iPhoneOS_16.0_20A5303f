//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CSDIDSSessionProvider-Protocol.h"

@class NSData, NSDictionary, NSSet, NSString;
@protocol CSDIDSDualSessionProviderDelegate;

@protocol CSDIDSDualSessionProvider <CSDIDSSessionProvider>
- (void)end;
- (void)reconnectSession;
- (void)declineInvitationWithData:(NSData *)arg1;
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;
- (void)cancelInvitationWithData:(NSData *)arg1;
- (void)acceptInvitationWithData:(NSData *)arg1;
- (void)sendInvitationWithData:(NSData *)arg1 declineOnError:(_Bool)arg2;
- (void)sendData:(NSData *)arg1 toDestinations:(NSSet *)arg2;
- (void)sendData:(NSData *)arg1;
- (void)setStreamPreferences:(NSDictionary *)arg1;
- (void)setPreferences:(NSDictionary *)arg1;
@property(nonatomic) long long invitationTimeout;
@property(nonatomic) _Bool audioEnabled;
- (_Bool)isAudioEnabled;
@property(nonatomic, readonly) unsigned long long initialLinkType;
@property(nonatomic, readonly) NSString *destination;
@property(nonatomic, readonly) int socket;
@property(nonatomic, readonly) _Bool shouldUseSocketForTransport;
@property(nonatomic, readonly) unsigned int endedReason;
@property(nonatomic) __weak id <CSDIDSDualSessionProviderDelegate> delegate;
@end
