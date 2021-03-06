//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface CMAltimeterInternal : NSObject
{
    struct Dispatcher *fFilteredPressureDispatcher;	// 8 = 0x8
    CDUnknownBlockType fRelativeAltimeterHandler;	// 16 = 0x10
    NSOperationQueue *fRelativeAltimeterQueue;	// 24 = 0x18
    Sample_068dee23 fBaseAltimeterSample;	// 32 = 0x20
    float fBarometricBaseAltitude;	// 48 = 0x30
    _Bool fBaselineReceived;	// 52 = 0x34
    float fMostRecentFilteredPressure;	// 56 = 0x38
    struct deque<float, std::allocator<float>> fPressureSamples;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *fAppQueue;	// 120 = 0x78
    void *fLocationdConnection;	// 128 = 0x80
    CDUnknownBlockType fHandler;	// 136 = 0x88
    CDUnknownBlockType fSignificantElevationSampleHandler;	// 144 = 0x90
    double fElevationAscendedOffset;	// 152 = 0x98
    double fElevationDescendedOffset;	// 160 = 0xa0
    _Bool fStopSignificantElevationUpdates;	// 168 = 0xa8
    double fFilteredElevationOffset;	// 176 = 0xb0
    _Bool fStopRelativeAltitudeUpdates;	// 184 = 0xb8
    NSOperationQueue *fAbsoluteAltitudeClientQueue;	// 192 = 0xc0
    CDUnknownBlockType fAbsoluteAltitudeClientHandler;	// 200 = 0xc8
}

- (id).cxx_construct;	// IMP=0x00000000001c0169
- (void).cxx_destruct;	// IMP=0x00000000001c015b
- (void)_handleAbsoluteAltitudeUpdate:(shared_ptr_bdcc6d0f)arg1;	// IMP=0x00000000001bfcbb
- (void)_resumeAbsoluteAltitudeUpdates;	// IMP=0x00000000001bfcb5
- (void)_pauseAbsoluteAltitudeUpdates;	// IMP=0x00000000001bfcaf
- (void)_stopAbsoluteAltitudeUpdates;	// IMP=0x00000000001bfa7f
- (void)_startAbsoluteAltitudeUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001bf803
- (void)_releaseHandlerObjects;	// IMP=0x00000000001bf7ca
- (void)_stopRelativeAltitudeUpdates;	// IMP=0x00000000001bf5dc
- (void)_startRelativeAltitudeUpdates;	// IMP=0x00000000001bf3fd
- (void)_querySignificantElevationChangeFromDate:(id)arg1 toDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001bec87
- (void)_stopSignificantElevationUpdates;	// IMP=0x00000000001beaa0
- (void)_startSignificantElevationUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001be883
- (void)_stopElevationUpdates;	// IMP=0x00000000001be67c
- (void)_startElevationUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001be45f
- (void)_teardown;	// IMP=0x00000000001be3cd
- (void)dealloc;	// IMP=0x00000000001be355
- (id)init;	// IMP=0x00000000001bd25e

@end

