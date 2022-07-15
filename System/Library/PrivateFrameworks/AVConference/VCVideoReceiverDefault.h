//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCDisplayLink, VCVideoStreamRateAdaptationFeedbackOnly, VideoAttributes;

__attribute__((visibility("hidden")))
@interface VCVideoReceiverDefault
{
    struct tagVCVideoReceiverConfig _videoReceiverConfig;	// 72 = 0x48
    struct tagHANDLE *_videoReceiverHandle;	// 1312 = 0x520
    struct tagHANDLE *_videoTransmitterHandle;	// 1320 = 0x528
    long long _streamToken;	// 1328 = 0x530
    void *_controlInfoGenerator;	// 1336 = 0x538
    VideoAttributes *remoteVideoAttributes;	// 1344 = 0x540
    _Bool receivedFirstRemoteFrame;	// 1352 = 0x548
    _Bool _shouldEnableFaceZoom;	// 1353 = 0x549
    _Bool _shouldEnableMLEnhance;	// 1354 = 0x54a
    _Bool _shouldUpdateRemoteScreenAttributes;	// 1355 = 0x54b
    double _lastKeyFrameRequestTime;	// 1360 = 0x550
    unsigned short _lastKeyFrameRequestStreamID;	// 1368 = 0x558
    VCVideoStreamRateAdaptationFeedbackOnly *_rateAdaptation;	// 1376 = 0x560
    VCDisplayLink *_displayLink;	// 1384 = 0x568
    _Bool _notifyDelegateVideoAttributeChanges;	// 1392 = 0x570
    _Bool _lastLocalPortrait;	// 1393 = 0x571
    _Bool _lastRemotePortrait;	// 1394 = 0x572
    struct CGSize _remoteScreenPortraitAspectRatio;	// 1400 = 0x578
    struct CGSize _remoteScreenLandscapeAspectRatio;	// 1416 = 0x588
    struct CGSize _remoteExpectedPortraitAspectRatio;	// 1432 = 0x598
    struct CGSize _remoteExpectedLandscapeAspectRatio;	// 1448 = 0x5a8
    _Bool _remoteSupportsExpectedAspectRatio;	// 1464 = 0x5b8
    _Bool _canLocalResizePIP;	// 1465 = 0x5b9
    _Bool _canRemoteResizePIP;	// 1466 = 0x5ba
    unsigned long long _cvoExtensionID;	// 1472 = 0x5c0
}

@property struct tagVCVideoReceiverConfig videoReceiverConfig; // @synthesize videoReceiverConfig=_videoReceiverConfig;
@property(nonatomic) _Bool shouldUpdateRemoteScreenAttributes; // @synthesize shouldUpdateRemoteScreenAttributes=_shouldUpdateRemoteScreenAttributes;
@property(nonatomic) _Bool shouldEnableMLEnhance; // @synthesize shouldEnableMLEnhance=_shouldEnableMLEnhance;
@property(nonatomic) _Bool shouldEnableFaceZoom; // @synthesize shouldEnableFaceZoom=_shouldEnableFaceZoom;
@property(retain) VideoAttributes *remoteVideoAttributes; // @synthesize remoteVideoAttributes;
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x00000000001666a3
- (void)setSynchronizer:(id)arg1;	// IMP=0x000000000016669d
- (void)collectChannelMetrics:(CDStruct_b671a7c4 *)arg1 interval:(float)arg2;	// IMP=0x0000000000166681
- (void)didSwitchFromStreamID:(unsigned short)arg1 toStreamID:(unsigned short)arg2;	// IMP=0x0000000000166612
- (void)handleKeyFrameRequestWithSizeAndFistMBs:(unsigned short *)arg1 count:(int)arg2 didReceiveRTCPFB:(_Bool)arg3 didReceiveFIR:(_Bool)arg4;	// IMP=0x00000000001665cf
- (void)handleRequestingKeyFrameGenerationWithStreamID:(unsigned short)arg1 firType:(int)arg2;	// IMP=0x0000000000166187
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x00000000001660f6
- (void)handleRemoteFrame:(struct __CVBuffer *)arg1 timestamp:(CDStruct_1b6d18a9)arg2 cameraStatusBits:(unsigned char)arg3;	// IMP=0x0000000000165984
- (void)updateSourcePlayoutTimestamp:(CDStruct_1b6d18a9 *)arg1;	// IMP=0x000000000016597e
- (void)setEnableRateAdaptation:(_Bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;	// IMP=0x0000000000165961
- (double)roundTripTime;	// IMP=0x000000000016594c
- (void)rtcpSendIntervalElapsed;	// IMP=0x0000000000165946
- (void)pauseVideo;	// IMP=0x0000000000165940
- (unsigned int)lastDisplayedFrameRTPTimestamp;	// IMP=0x0000000000165938
- (void)setTargetStreamID:(unsigned short)arg1;	// IMP=0x0000000000165932
- (float)lastLastVideoStallDuration;	// IMP=0x0000000000165924
- (double)lastReceivedVideoRTCPPacketTime;	// IMP=0x0000000000165916
- (double)lastReceivedVideoRTPPacketTime;	// IMP=0x0000000000165908
- (void)stopVideo;	// IMP=0x00000000001658f6
- (void)startVideo;	// IMP=0x00000000001658d1
- (void)cleanUpDisplayLink;	// IMP=0x0000000000165898
- (_Bool)initializeDisplayLink;	// IMP=0x000000000016575f
- (void)setEnableCVO:(_Bool)arg1 cvoExtensionID:(unsigned long long)arg2;	// IMP=0x0000000000165759
- (void)dealloc;	// IMP=0x00000000001654ba
- (void)setUpRemoteAspectRatiosFromFreatureListString:(const char *)arg1;	// IMP=0x0000000000164eff
- (void)setUpRemoteAspectRatiosForPayload:(int)arg1;	// IMP=0x0000000000164e0e
- (void)setUpRemoteAspectRatios;	// IMP=0x0000000000164db8
- (int)oneToOneStreamIndex;	// IMP=0x0000000000164b60
- (void)setFeedbackDelegate:(id)arg1;	// IMP=0x0000000000164b5a
@property(nonatomic) int mode;
- (id)initWithConfig:(struct tagVCVideoReceiverConfig *)arg1 delegate:(id)arg2 reportingAgent:(struct opaqueRTCReporting *)arg3 statisticsCollector:(id)arg4 transmitterHandle:(struct tagHANDLE *)arg5;	// IMP=0x0000000000164491

@end
