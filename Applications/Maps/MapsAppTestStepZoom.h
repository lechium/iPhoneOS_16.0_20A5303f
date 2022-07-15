//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapsAppTestCirclePan;

@interface MapsAppTestStepZoom
{
    MapsAppTestCirclePan *_currentCirclePan;	// 8 = 0x8
    _Bool _clearCacheOnZoom;	// 16 = 0x10
    long long _zoomStart;	// 24 = 0x18
    long long _zoomEnd;	// 32 = 0x20
    double _stepAnimationDuration;	// 40 = 0x28
    CDStruct_2c43369c _focusPoint;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000008acff7
@property(nonatomic) _Bool clearCacheOnZoom; // @synthesize clearCacheOnZoom=_clearCacheOnZoom;
@property(nonatomic) double stepAnimationDuration; // @synthesize stepAnimationDuration=_stepAnimationDuration;
@property(nonatomic) long long zoomEnd; // @synthesize zoomEnd=_zoomEnd;
@property(nonatomic) long long zoomStart; // @synthesize zoomStart=_zoomStart;
@property(nonatomic) CDStruct_c3b9c2ee focusPoint; // @synthesize focusPoint=_focusPoint;
- (void)onFullyDrawn:(id)arg1;	// IMP=0x00100000008acc83
- (void)addFullyDrawnCallback:(CDUnknownBlockType)arg1;	// IMP=0x00100000008acb0f
- (void)stepZoomCompleted;	// IMP=0x00100000008acafd
- (void)stepLoadCompleted:(id)arg1;	// IMP=0x00100000008ac859
- (void)runStepZoomTest:(double)arg1;	// IMP=0x00100000008ac340
- (_Bool)runTest;	// IMP=0x00100000008ac0e0
- (long long)_zoomAmount;	// IMP=0x00100000008ac0b8
- (double)_regionSizeForZoom:(double)arg1;	// IMP=0x00100000008ac095
- (id)initWithApplication:(id)arg1 testName:(id)arg2 options:(id)arg3;	// IMP=0x00100000008abf1c

@end
