//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSDAVConferenceConfiguration, CSDIDSTransport, NSData, NSDate, NSDictionary, NSError, NSObject, NSString, VCCapabilities;
@protocol CSDAVConferenceDelegate, OS_dispatch_queue;

@protocol CSDAVConference <NSObject>
@property(readonly, nonatomic) long long outputAudioPowerSpectrumToken;
@property(readonly, nonatomic) long long inputAudioPowerSpectrumToken;
@property(nonatomic) unsigned int remoteVideoPresentationState;
@property(nonatomic) struct CGSize remoteVideoPresentationSize;
@property(readonly, nonatomic, getter=isRemoteVideoPaused) _Bool remoteVideoPaused;
@property(nonatomic, getter=isSendingVideo) _Bool sendingVideo;
@property(readonly, nonatomic) _Bool hasReceivedFirstRemoteFrame;
@property(nonatomic, getter=isSendingAudioData) _Bool sendingAudioData;
@property(nonatomic, getter=isSendingAudio) _Bool sendingAudio;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(readonly, nonatomic) NSDate *dateEnded;
@property(readonly, nonatomic) NSDate *dateConnected;
@property(readonly, nonatomic) NSDate *dateStartedConnecting;
@property(readonly, nonatomic) NSError *endedError;
@property(readonly, nonatomic) long long endedReason;
@property(readonly, nonatomic) int state;
@property(nonatomic) int deviceRole;
@property(nonatomic) double connectionTimeout;
@property(nonatomic, getter=isCaller) _Bool caller;
@property(readonly, nonatomic) long long callID;
@property(copy, nonatomic) NSDictionary *remoteInviteDictionary;
@property(readonly, copy, nonatomic) NSDictionary *localInviteDictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(nonatomic) __weak id <CSDAVConferenceDelegate> delegate;
- (void)setRemoteIDSDestinationURI:(NSString *)arg1 crossDeviceIdentifier:(NSString *)arg2;
- (void)sendData:(NSData *)arg1;
- (void)updateCapabilities:(VCCapabilities *)arg1;
- (void)cancel;
- (void)stop;
- (void)startConnectionWithTransport:(CSDIDSTransport *)arg1;
- (void)prepareWithConfiguration:(CSDAVConferenceConfiguration *)arg1;
@end

