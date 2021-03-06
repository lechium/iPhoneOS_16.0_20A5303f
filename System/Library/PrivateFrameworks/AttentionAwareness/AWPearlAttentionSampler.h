//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKDevicePearl, BKFaceDetectOperation, NSObject, NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWPearlAttentionSampler
{
    BKDevicePearl *_pearlDevice;	// 16 = 0x10
    BKFaceDetectOperation *_pendingPresenceOperation;	// 24 = 0x18
    BKFaceDetectOperation *_finishingPresenceOperation;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_operationStalledTimer;	// 40 = 0x28
    unsigned long long _operationCreateTime;	// 48 = 0x30
    unsigned long long _lastErrorTime;	// 56 = 0x38
    int _displayNotifyToken;	// 64 = 0x40
    _Bool _displayState;	// 68 = 0x44
    _Bool _smartCoverClosed;	// 69 = 0x45
}

- (void).cxx_destruct;	// IMP=0x000000000001a426
- (id)unitTestSampler;	// IMP=0x000000000001a411
- (void)operation:(id)arg1 presenceStateChanged:(_Bool)arg2;	// IMP=0x000000000001a294
- (void)operation:(id)arg1 stateChanged:(long long)arg2;	// IMP=0x000000000001a11f
- (void)device:(id)arg1 pearlStateChanged:(long long)arg2;	// IMP=0x0000000000019f9c
- (void)device:(id)arg1 pearlEventOccurred:(long long)arg2;	// IMP=0x0000000000019daa
- (void)operation:(id)arg1 finishedWithReason:(long long)arg2;	// IMP=0x00000000000199c0
- (void)operation:(id)arg1 faceDetectStateChanged:(id)arg2;	// IMP=0x0000000000019617
- (void)updateSamplingDeadline:(unsigned long long)arg1 forClient:(id)arg2;	// IMP=0x0000000000019413
- (int)currentState;	// IMP=0x00000000000193c5
- (void)setSmartCoverClosed:(_Bool)arg1;	// IMP=0x00000000000191dc
- (void)setDisplayState:(_Bool)arg1;	// IMP=0x0000000000018fd0
- (void)setDisplayStateFromNotification;	// IMP=0x0000000000018f83
- (void)updateSuppressedMaskWithDisplayState:(_Bool)arg1 smartCoverClosed:(_Bool)arg2;	// IMP=0x0000000000018f2a
- (void)cancelStalledTimer;	// IMP=0x0000000000018ee7
- (void)startStalledTimerForOperation:(id)arg1;	// IMP=0x0000000000018ddf
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;	// IMP=0x0000000000018d9d
- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)arg1;	// IMP=0x0000000000018b38
- (void)setCurrentState:(int)arg1;	// IMP=0x0000000000018797
- (void)pearlAttentionSamplerErrorOccurred;	// IMP=0x00000000000185fd
- (void)updateFaceState:(int)arg1 withFaceMetadata:(struct AWFaceDetectMetadata *)arg2;	// IMP=0x0000000000018100
- (void)updateFaceState:(int)arg1;	// IMP=0x00000000000180d1
- (void)shouldSample:(_Bool)arg1 withDeadline:(unsigned long long)arg2 withOptions:(union)arg3;	// IMP=0x0000000000018060
- (void)cancelFaceDetect:(id)arg1;	// IMP=0x0000000000017f4b
- (void)finishingFaceDetect:(id)arg1;	// IMP=0x0000000000017da4
- (void)faceDetectStalled:(id)arg1;	// IMP=0x0000000000017b4d
- (void)triggerFaceDetectWithDeadline:(unsigned long long)arg1;	// IMP=0x00000000000174fc
- (id)init;	// IMP=0x00000000000174e8
- (id)initForUnitTest:(_Bool)arg1;	// IMP=0x00000000000171e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

