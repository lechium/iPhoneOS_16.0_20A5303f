//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VCRateControlMediaController;

__attribute__((visibility("hidden")))
@interface VCRateControlAlgorithmBase : NSObject
{
    struct VCRateControlAlgorithmConfig _config;	// 8 = 0x8
    VCRateControlMediaController *_mediaController;	// 672 = 0x2a0
    _Atomic _Bool _paused;	// 680 = 0x2a8
    double _pauseStartTime;	// 688 = 0x2b0
    int _state;	// 696 = 0x2b8
    int _rampUpStatus;	// 700 = 0x2bc
    int _rampDownStatus;	// 704 = 0x2c0
    int _currentTierIndex;	// 708 = 0x2c4
    int _previousTierIndex;	// 712 = 0x2c8
    double _targetBitrateContinuous;	// 720 = 0x2d0
    unsigned int _targetBitrate;	// 728 = 0x2d8
    unsigned int _actualBitrate;	// 732 = 0x2dc
    unsigned int _rateChangeCounter;	// 736 = 0x2e0
    unsigned int _rateControlCounter;	// 740 = 0x2e4
    double _rateControlTime;	// 744 = 0x2e8
    double _rampUpFrozenTime;	// 752 = 0x2f0
    _Bool _isCongested;	// 760 = 0x2f8
    _Bool _isNewRateSentOut;	// 761 = 0x2f9
    _Bool _isSendBitrateLimited;	// 762 = 0x2fa
    _Bool _isFirstInitialRampUpDone;	// 763 = 0x2fb
    _Bool _isFirstTimestampArrived;	// 764 = 0x2fc
    unsigned int _consecutiveRampDown;	// 768 = 0x300
    double _lastTimeStartRampingDown;	// 776 = 0x308
    double _lastCongestionTime;	// 784 = 0x310
    double _lastRampDownTimeDueToFeedback;	// 792 = 0x318
    double _lastRampDownTimeDueToBaseband;	// 800 = 0x320
    unsigned int _remoteBandwidthEstimation;	// 808 = 0x328
    unsigned int _localBandwidthEstimation;	// 812 = 0x32c
    double _lastNoOvershootBWEstimationTime;	// 816 = 0x330
    double _firstBelowNoRampUpBandwidthTime;	// 824 = 0x338
    _Bool _belowNoRampUpBandwidth;	// 832 = 0x340
    _Bool _isOvershoot;	// 833 = 0x341
    CDStruct_55dce769 _owrdList;	// 840 = 0x348
    _Bool _isOWRDListReady;	// 2488 = 0x9b8
    _Bool _isOWRDConstant;	// 2489 = 0x9b9
    double _owrd;	// 2496 = 0x9c0
    double _nowrd;	// 2504 = 0x9c8
    double _nowrdShort;	// 2512 = 0x9d0
    double _nowrdAcc;	// 2520 = 0x9d8
    double _lastOWRDChangeTime;	// 2528 = 0x9e0
    struct {
        double time;
        double packetLossRate;
        double packetLossRateVideo;
        _Bool isLossIncreasing;
    } _lossEventBuffer[64];	// 2536 = 0x9e8
    unsigned int _lossEventBufferIndex;	// 4584 = 0x11e8
    double _lastLossEventRampDownTime;	// 4592 = 0x11f0
    double _firstLossEventRampDownTime;	// 4600 = 0x11f8
    int _packetLossRateBadTrendCount;	// 4608 = 0x1200
    unsigned int _lossEventBandwidthLimit;	// 4612 = 0x1204
    unsigned int _lossEventBandwidthConfidence;	// 4616 = 0x1208
    unsigned int _mostBurstLoss;	// 4620 = 0x120c
    double _packetLossRate;	// 4624 = 0x1210
    double _previousPacketLossRate;	// 4632 = 0x1218
    double _packetLossRateThreshold;	// 4640 = 0x1220
    double _packetLossRateAvgLong;	// 4648 = 0x1228
    double _packetLossRateAvgLongPrevious;	// 4656 = 0x1230
    double _packetLossRateAvgLongAtLBAStart;	// 4664 = 0x1238
    double _packetLossRateAvgLongAtLBAExit;	// 4672 = 0x1240
    double _packetLossRateAudio;	// 4680 = 0x1248
    double _packetLossRateVideo;	// 4688 = 0x1250
    double _roundTripTime;	// 4696 = 0x1258
    double _worstRecentRoundTripTime;	// 4704 = 0x1260
    unsigned int _worstRecentBurstLoss;	// 4712 = 0x1268
    unsigned int _totalPacketReceived;	// 4716 = 0x126c
    _Bool _shouldConsiderVideoInLossEvent;	// 4720 = 0x1270
    unsigned int _rateSharingCount;	// 4724 = 0x1274
    void *_logDump;	// 4728 = 0x1278
    void *_logBasebandDump;	// 4736 = 0x1280
    _Bool _isPeriodicLoggingEnabled;	// 4744 = 0x1288
    _Bool _didMBLRampDown;	// 4745 = 0x1289
}

@property(nonatomic) _Bool isFirstTimestampArrived; // @synthesize isFirstTimestampArrived=_isFirstTimestampArrived;
@property(nonatomic) unsigned int rateSharingCount; // @synthesize rateSharingCount=_rateSharingCount;
@property(readonly, nonatomic) _Bool isFirstInitialRampUpDone; // @synthesize isFirstInitialRampUpDone=_isFirstInitialRampUpDone;
@property(readonly, nonatomic) _Bool isSendBitrateLimited; // @synthesize isSendBitrateLimited=_isSendBitrateLimited;
@property(nonatomic) _Bool didMBLRampDown; // @synthesize didMBLRampDown=_didMBLRampDown;
@property(readonly, nonatomic) unsigned int actualBitrate; // @synthesize actualBitrate=_actualBitrate;
@property(readonly, nonatomic) double owrd; // @synthesize owrd=_owrd;
@property(readonly, nonatomic) unsigned int remoteBandwidthEstimation; // @synthesize remoteBandwidthEstimation=_remoteBandwidthEstimation;
@property(nonatomic) unsigned int localBandwidthEstimation; // @synthesize localBandwidthEstimation=_localBandwidthEstimation;
@property(readonly, nonatomic) _Bool isNewRateSentOut; // @synthesize isNewRateSentOut=_isNewRateSentOut;
@property(readonly, nonatomic) unsigned int worstRecentBurstLoss; // @synthesize worstRecentBurstLoss=_worstRecentBurstLoss;
@property(readonly, nonatomic) double worstRecentRoundTripTime; // @synthesize worstRecentRoundTripTime=_worstRecentRoundTripTime;
@property(readonly, nonatomic) double roundTripTime; // @synthesize roundTripTime=_roundTripTime;
@property(readonly, nonatomic) unsigned int totalPacketReceived; // @synthesize totalPacketReceived=_totalPacketReceived;
@property(readonly, nonatomic) double packetLossRateVideo; // @synthesize packetLossRateVideo=_packetLossRateVideo;
@property(readonly, nonatomic) double packetLossRateAudio; // @synthesize packetLossRateAudio=_packetLossRateAudio;
@property(readonly, nonatomic) double packetLossRate; // @synthesize packetLossRate=_packetLossRate;
@property(readonly, nonatomic) unsigned int mostBurstLoss; // @synthesize mostBurstLoss=_mostBurstLoss;
@property(retain, nonatomic) VCRateControlMediaController *mediaController; // @synthesize mediaController=_mediaController;
@property(readonly, nonatomic) unsigned int rateChangeCounter; // @synthesize rateChangeCounter=_rateChangeCounter;
@property(readonly, nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(readonly, nonatomic) _Bool isCongested; // @synthesize isCongested=_isCongested;
@property(readonly, nonatomic) struct VCRateControlAlgorithmConfig config; // @synthesize config=_config;
- (void)updateCongestionStatusWhenRampDown:(double)arg1;	// IMP=0x00000000001d1417
- (void)updateCongestionStatusWhenRampUp;	// IMP=0x00000000001d1397
- (_Bool)shouldRampDownDueToLossThreshold;	// IMP=0x00000000001d1126
- (_Bool)shouldRampDownDueToConsecutiveLoss;	// IMP=0x00000000001d10d6
- (_Bool)shouldRampDownDueToLossEvent;	// IMP=0x00000000001d107a
- (_Bool)shouldBlockRampUpDueToLossEventThreshold;	// IMP=0x00000000001d0f56
- (_Bool)allowRampUpWithContinuousTargetBitrate;	// IMP=0x00000000001d0e8b
- (double)rampUpTargetBitrateContinuousWithBandwidthDiff:(int)arg1;	// IMP=0x00000000001d0e3f
- (void)resetLossEventBandwidthLimit;	// IMP=0x00000000001d0e2e
- (void)updateLossEventBandwidthLimit:(unsigned int)arg1;	// IMP=0x00000000001d0d3e
- (void)resetLossEventBuffer;	// IMP=0x00000000001d0d11
- (double)lossEventOverThresholdRatio;	// IMP=0x00000000001d0c57
- (int)lossEventIncreasingCount;	// IMP=0x00000000001d0c17
- (void)updateLossEvent;	// IMP=0x00000000001d0b0c
@property(readonly, nonatomic) _Bool isLossBasedAdaptationOn;
- (_Bool)recentlyGoAboveRampUpBandwidth;	// IMP=0x00000000001d0a80
- (_Bool)keepOvershootingRampDownBandwidth;	// IMP=0x00000000001d0a49
- (void)checkBandwidthOvershootWithRemoteBandwidthEstimation:(unsigned int)arg1;	// IMP=0x00000000001d0949
- (void)stateEnter;	// IMP=0x00000000001d092a
- (void)stateExit;	// IMP=0x00000000001d0906
- (void)stateChangeTo:(int)arg1;	// IMP=0x00000000001d08b2
- (void)calculateCongestionMetricsFromOWRD:(double)arg1 time:(double)arg2;	// IMP=0x00000000001d07d8
- (unsigned short)getTimestampFromMicroTime:(double)arg1;	// IMP=0x00000000001d07bf
- (double)getDoubleTimeFromTimestamp:(unsigned int)arg1 timestampTick:(unsigned int)arg2 wrapAroundCounter:(unsigned int)arg3;	// IMP=0x00000000001d0793
- (void)logToDumpFilesWithString:(id)arg1;	// IMP=0x00000000001d06d3
- (void)enableBasebandDump:(void *)arg1;	// IMP=0x00000000001d06c1
- (void)enableLogDump:(void *)arg1 enablePeriodicLogging:(_Bool)arg2;	// IMP=0x00000000001d06a9
- (_Bool)doRateControlWithStatistics:(CDStruct_7df19fcb)arg1;	// IMP=0x00000000001d0648
- (void)configure:(struct VCRateControlAlgorithmConfig)arg1 restartRequired:(_Bool)arg2;	// IMP=0x00000000001d05e7
- (void)checkPaused;	// IMP=0x00000000001d039a
@property(nonatomic, getter=isPaused) _Bool paused;
- (void)dealloc;	// IMP=0x00000000001d031f
- (id)init;	// IMP=0x00000000001d02a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
