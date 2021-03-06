//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSString;

@protocol IDSDSession
- (void)sendCancelInvitationMessage;
- (void)didSessionReinitiated;
- (void)reinitiate;
- (void)startQRSession;
- (void)registerClientChannel;
- (void)openSocketToDevice:(NSString *)arg1;
- (void)networkingIsAvailable:(void (^)(_Bool))arg1;
- (_Bool)isWithDefaultPairedDevice;
- (void)invitationDeclined;
- (void)handleAVConferenceError:(NSError *)arg1;
- (void)endSessionWithReason:(unsigned int)arg1;
@end

