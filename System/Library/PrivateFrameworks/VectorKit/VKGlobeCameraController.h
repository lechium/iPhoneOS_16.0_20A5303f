//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VKGlobeCameraController
{
    void *_globeView;	// 96 = 0x60
    struct CameraManager _cameraManager;	// 104 = 0x68
    double _currentDoublePanPitch;	// 528 = 0x210
    _Bool _isPitching;	// 536 = 0x218
    _Bool _isRotating;	// 537 = 0x219
    _Bool _wasPitched;	// 538 = 0x21a
    _Bool _couldEnter3DMode;	// 539 = 0x21b
    double _currentZoomLevel;	// 544 = 0x220
    double _maxZoomLevel;	// 552 = 0x228
    double _minZoomLevel;	// 560 = 0x230
    double _lastRotation;	// 568 = 0x238
    struct CGPoint _panStartScreenPoint;	// 576 = 0x240
    struct CGPoint _panLastScreenPoint;	// 592 = 0x250
    double _beganDoublePanPitch;	// 608 = 0x260
    shared_ptr_e963992e _taskContext;	// 616 = 0x268
    _Bool _tourShouldResumeWhenDoneGesturing;	// 632 = 0x278
}

- (id).cxx_construct;	// IMP=0x00000000006d382f
- (void).cxx_destruct;	// IMP=0x00000000006d381e
@property(nonatomic) _Bool tourShouldResumeWhenDoneGesturing; // @synthesize tourShouldResumeWhenDoneGesturing=_tourShouldResumeWhenDoneGesturing;
@property(nonatomic) void *globeView; // @synthesize globeView=_globeView;
- (void)animateToRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x00000000006d2f78
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x00000000006d2bcb
- (void)animateRegionWithDuration:(double)arg1 timingFunction:(CDUnknownBlockType)arg2 cursor:(Matrix_443f5d51)arg3 stepHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000006d293d
- (void)setCenterCoordinateDistanceRange:(CDStruct_c3b9c2ee)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x00000000006d23ac
- (void)setMinZoomLevel:(double)arg1;	// IMP=0x00000000006d2392
- (void)setMaxZoomLevel:(double)arg1;	// IMP=0x00000000006d2380
- (void)setCurrentZoomLevel:(double)arg1;	// IMP=0x00000000006d236e
- (double)topDownMinimumZoomLevel;	// IMP=0x00000000006d235c
- (double)currentZoomLevel;	// IMP=0x00000000006d234a
- (double)maximumZoomLevel;	// IMP=0x00000000006d2338
- (double)minimumZoomLevel;	// IMP=0x00000000006d2326
- (double)_fovAdjustment;	// IMP=0x00000000006d22b7
- (double)pitch;	// IMP=0x00000000006d2295
- (double)heading;	// IMP=0x00000000006d2252
- (double)altitude;	// IMP=0x00000000006d21f9
- (double)distanceFromCenterCoordinate;	// IMP=0x00000000006d21df
- (CDStruct_c3b9c2ee)centerCoordinate;	// IMP=0x00000000006d2124
- (CDStruct_c3b9c2ee)_centerCoordinateForMapRegion:(id)arg1;	// IMP=0x00000000006d20d7
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000006d1f4d
- (double)durationToAnimateToMapRegion:(id)arg1;	// IMP=0x00000000006d1f3f
- (double)zoomForMapRegion:(id)arg1;	// IMP=0x00000000006d1964
- (double)widestLatitudeForMapRegion:(id)arg1;	// IMP=0x00000000006d18bb
- (double)greatCircleMidPointLatitude:(double)arg1 fromLongitude:(double)arg2 toLongitude:(double)arg3;	// IMP=0x00000000006d183d
- (double)earthRadiusAt:(double)arg1;	// IMP=0x00000000006d17f6
- (double)geocAngleBetween:(CDStruct_c3b9c2ee)arg1 andCoordinate:(CDStruct_c3b9c2ee)arg2;	// IMP=0x00000000006d1691
- (id)mapRegionIgnoringEdgeInsets;	// IMP=0x00000000006d167f
- (id)mapRegion;	// IMP=0x00000000006d140e
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000000006d1386
- (double)presentationYaw;	// IMP=0x00000000006d1374
- (void)updateCameraManager;	// IMP=0x00000000006d1350
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(CDUnknownBlockType)arg5;	// IMP=0x00000000006d0fe9
- (void)setGesturing:(_Bool)arg1;	// IMP=0x00000000006d0f30
- (void)updateState;	// IMP=0x00000000006d0f02
- (void)_updateCanEnter3DMode;	// IMP=0x00000000006d0e74
- (void)_updateIsPitched;	// IMP=0x00000000006d0dd8
- (double)maxPitch;	// IMP=0x00000000006d0da4
- (double)minPitch;	// IMP=0x00000000006d0d96
- (_Bool)isFullyPitched;	// IMP=0x00000000006d0d56
- (_Bool)isPitched;	// IMP=0x00000000006d0d31
- (_Bool)canEnter3DMode;	// IMP=0x00000000006d0cfa
- (void)exit3DMode;	// IMP=0x00000000006d0cdb
- (void)enter3DMode;	// IMP=0x00000000006d0c87
- (void)stopGlobeAnimations;	// IMP=0x00000000006d0bb8
- (Geocentric_d8fde6f2)cameraPosition;	// IMP=0x00000000006d0b70
- (void)adjustLoadingForAnimation:(float)arg1 progressFactor:(float)arg2;	// IMP=0x00000000006d0b01
- (float)slowDownFactorFromLoadProgress;	// IMP=0x00000000006d0a91
- (_Bool)isFlyoverTourStarted;	// IMP=0x00000000006d0a69
- (void)interruptFlyoverTourAnimation;	// IMP=0x00000000006d0a46
- (void)stopFlyoverTourAnimation;	// IMP=0x00000000006d0a23
- (void)resumeFlyoverTourAnimation;	// IMP=0x00000000006d0a00
- (void)pauseFlyoverTourAnimation;	// IMP=0x00000000006d09b2
- (void)flyoverTourAnimation:(id)arg1 animateToStart:(_Bool)arg2 labelChanged:(CDUnknownBlockType)arg3 stateChange:(CDUnknownBlockType)arg4;	// IMP=0x00000000006d0106
- (void)moveToZoomOutZoomInTransition:(CDStruct_c3b9c2ee)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00000000006cf227
- (CDUnknownBlockType)createMoveToZoomOutZoomInFrameFunction:(CameraFrame_b765d6d7)arg1 toLatLon:(CameraFrame_b765d6d7)arg2;	// IMP=0x00000000006ce5c7
- (void)moveTo:(CDStruct_c3b9c2ee)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00000000006cd877
- (void)moveTo:(CDStruct_c3b9c2ee)arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000006cd84b
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000006cd42b
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3;	// IMP=0x00000000006cd414
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000006ccf8b
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000006ccad8
- (void)tiltTo:(double)arg1 animated:(_Bool)arg2 exaggerate:(_Bool)arg3;	// IMP=0x00000000006cc581
- (void)rotateTo:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000000006cbfc8
- (_Bool)snapMapIfNecessary:(_Bool)arg1;	// IMP=0x00000000006cbef5
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000006cbd7f
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000006cbbfa
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000006cbb25
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x00000000006cb98e
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000006cb8a6
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000006cb777
- (void)pitch:(struct CGPoint)arg1 translation:(double)arg2;	// IMP=0x00000000006cb5bc
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;	// IMP=0x00000000006cb4ee
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x00000000006cb3f5
- (long long)tileSize;	// IMP=0x00000000006cb3ea
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1 mapDataAccess:(void *)arg2 animationRunner:(struct AnimationRunner *)arg3 runLoopController:(struct RunLoopController *)arg4 cameraDelegate:(id)arg5;	// IMP=0x00000000006cb19c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
