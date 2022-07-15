//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCRateControlAlgorithmSparseNOWRD
{
    double _pauseStartTime;	// 4752 = 0x1290
    unsigned short _previousTimestamp;	// 4760 = 0x1298
    unsigned int _timestampWrapAroundCounter;	// 4764 = 0x129c
    double _statisticsArrivalTime;	// 4768 = 0x12a0
    double _previousStatisticsArrivalTime;	// 4776 = 0x12a8
    double _lastCongestionTime;	// 4784 = 0x12b0
    double _lastRampUpTime;	// 4792 = 0x12b8
    double _lastAllowRampUpTime;	// 4800 = 0x12c0
    unsigned int _actualSendBitrate;	// 4808 = 0x12c8
    unsigned int _instantBitrate;	// 4812 = 0x12cc
    unsigned int _expectedBitrate;	// 4816 = 0x12d0
    int _recentTierWindow[256];	// 4820 = 0x12d4
    unsigned int _recentTierWindowSize;	// 5844 = 0x16d4
    unsigned int _recentTierWindowIndex;	// 5848 = 0x16d8
    unsigned int _totalTierNumbersInWindow;	// 5852 = 0x16dc
    double _recentAverageTier;	// 5856 = 0x16e0
    double _lastTimeDetectNoOscillation;	// 5864 = 0x16e8
    _Bool _isTargetBitrateOscillating;	// 5872 = 0x16f0
    int _deviationChangeCount;	// 5876 = 0x16f4
    unsigned int _totalPacketSent;	// 5880 = 0x16f8
    unsigned int _roundTripTimeTick;	// 5884 = 0x16fc
    double _averageRoundTripTime;	// 5888 = 0x1700
    double _basebandNotificationArrivalTime;	// 5896 = 0x1708
    unsigned int _basebandAverageBitrate;	// 5904 = 0x1710
    unsigned int _basebandTotalQueueDepth;	// 5908 = 0x1714
    double _basebandExpectedQueuingDelay;	// 5912 = 0x1718
    double _basebandNormalizedBDCD;	// 5920 = 0x1720
    double _basebandNormalizedQueuingDelay;	// 5928 = 0x1728
    _Bool _isWaitingForBasebandRampDown;	// 5936 = 0x1730
    double _lastBasebandRampDownTime;	// 5944 = 0x1738
    double _lastHighNBDCDTime;	// 5952 = 0x1740
    double _lastEmergencyBasebandRampDownTime;	// 5960 = 0x1748
    int _basebandAdditionalTiersForRampUp;	// 5968 = 0x1750
    _Bool _basebandAdaptationEnabled;	// 5972 = 0x1754
}

@property(readonly, nonatomic) _Bool basebandAdaptationEnabled; // @synthesize basebandAdaptationEnabled=_basebandAdaptationEnabled;
- (void)printRateControlInfoToLogDump;	// IMP=0x000000000005ffde
- (void)resetRampingStatus;	// IMP=0x000000000005ffbc
- (void)resetOscillationDetection;	// IMP=0x000000000005ff7b
- (int)countDeviationChangeInTierWindow;	// IMP=0x000000000005fecd
- (_Bool)updateRecentTierWindow;	// IMP=0x000000000005fe31
- (void)checkTargetBitrateOscillation;	// IMP=0x000000000005fdb7
- (void)checkActualBitrates;	// IMP=0x000000000005fd40
- (void)updateLastEmergencyBasebandRampDownTimeWithTierIndex:(int)arg1;	// IMP=0x000000000005fd0f
- (int)rampDownTierDueToBaseband;	// IMP=0x000000000005fbf4
- (int)rampDownTier;	// IMP=0x000000000005faf6
- (int)rampUpTier;	// IMP=0x000000000005f96b
- (_Bool)shouldRampUpDueToBaseband;	// IMP=0x000000000005f902
- (_Bool)shouldUnblockRampUpAfterTimeOut;	// IMP=0x000000000005f889
- (_Bool)shouldRampDownDueToBaseband;	// IMP=0x000000000005f79c
- (_Bool)shouldRampDown;	// IMP=0x000000000005f551
- (_Bool)shouldRampUp;	// IMP=0x000000000005f27d
- (_Bool)shouldBlockRampUpDueToRecentLossEvent;	// IMP=0x000000000005f1d1
- (_Bool)shouldBlockRampUpDueToNetworkUnstable;	// IMP=0x000000000005f1a6
- (void)checkCongestionStatus;	// IMP=0x000000000005f151
- (_Bool)noServerStatsActivityDetected;	// IMP=0x000000000005f0e9
- (_Bool)doRateControlWithBasebandStatistics:(CDStruct_7df19fcb)arg1;	// IMP=0x000000000005ee70
- (_Bool)doRateControlWithVCRCStatistics:(CDStruct_7df19fcb)arg1;	// IMP=0x000000000005e741
- (_Bool)doRateControlWithStatistics:(CDStruct_7df19fcb)arg1;	// IMP=0x000000000005e6ac
- (void)configure:(struct VCRateControlAlgorithmConfig)arg1 restartRequired:(_Bool)arg2;	// IMP=0x000000000005e428
- (id)init;	// IMP=0x000000000005e3a8

@end
