//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKMapCameraController
{
    void *_mapEngine;	// 96 = 0x60
    VKTimedAnimation *_horizontalOffsetAnimation;	// 104 = 0x68
    double _minDistanceToGroundAlongForwardVector;	// 112 = 0x70
    double _maxDistanceToGroundAlongForwardVector;	// 120 = 0x78
    double _finalYaw;	// 128 = 0x80
    double _finalPitch;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000001ab3e2
@property(nonatomic) void *mapEngine; // @synthesize mapEngine=_mapEngine;
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x00000000001ab38f
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x00000000001ab04a
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;	// IMP=0x00000000001ab033
- (double)topDownMinimumZoomLevel;	// IMP=0x00000000001ab01c
- (double)currentZoomLevel;	// IMP=0x00000000001ab005
- (double)maximumZoomLevel;	// IMP=0x00000000001aafee
- (double)minimumZoomLevel;	// IMP=0x00000000001aafd7
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x00000000001aadb7
- (void)animateRegionWithDuration:(double)arg1 timingFunction:(CDUnknownBlockType)arg2 stepHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001aab14
- (void)setCenterCoordinateDistanceRange:(CDStruct_c3b9c2ee)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x00000000001aa54a
- (double)pitch;	// IMP=0x00000000001aa4a9
- (double)heading;	// IMP=0x00000000001aa408
- (double)altitude;	// IMP=0x00000000001aa373
- (double)distanceFromCenterCoordinate;	// IMP=0x00000000001aa2ec
- (CDStruct_c3b9c2ee)centerCoordinate;	// IMP=0x00000000001aa196
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000001aa0c3
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 forceDestination:(_Bool)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00000000001a9f08
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000001a9eed
- (void)_jumpToCenterPoint:(Matrix_6e1d3589)arg1 pitchRadians:(double)arg2 yawRadians:(double)arg3;	// IMP=0x00000000001a9abb
- (void)_animateToPosition:(Matrix_6e1d3589)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 forceDestination:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000001a8656
- (void)_animateToPosition:(Matrix_6e1d3589)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000001a863c
- (Matrix_6e1d3589)positionClampedToCameraRestriction:(Matrix_6e1d3589)arg1;	// IMP=0x00000000001a859c
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000001a8163
- (double)durationToAnimateToMapRegion:(id)arg1;	// IMP=0x00000000001a8025
- (CDStruct_c3b9c2ee)_mercatorCenterCoordinateForMapRegion:(id)arg1;	// IMP=0x00000000001a7fd8
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001a7890
- (double)yaw;	// IMP=0x00000000001a77ef
- (double)presentationYaw;	// IMP=0x00000000001a7783
- (void)updateCameraZBounds;	// IMP=0x00000000001a6666
- (void)updateCameraToPositionOrientationLimits;	// IMP=0x00000000001a6636
- (_Bool)canRotate;	// IMP=0x00000000001a6619
- (void)clampZoomLevelIfNecessary;	// IMP=0x00000000001a6164
- (void)setGesturing:(_Bool)arg1;	// IMP=0x00000000001a610e
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001a596b
- (_Bool)canEnter3DMode;	// IMP=0x00000000001a5906
- (double)maxPitch;	// IMP=0x00000000001a58cd
- (double)minPitch;	// IMP=0x00000000001a5894
- (_Bool)isFullyPitched;	// IMP=0x00000000001a57d8
- (_Bool)isPitched;	// IMP=0x00000000001a577b
- (void)exit3DMode;	// IMP=0x00000000001a5753
- (void)enter3DMode;	// IMP=0x00000000001a543e
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint)arg2;	// IMP=0x00000000001a5373
- (void)clampPitch:(double *)arg1 yaw:(double *)arg2 atTargetPositionZ:(double)arg3;	// IMP=0x00000000001a50ae
- (_Bool)snapMapIfNecessary:(_Bool)arg1;	// IMP=0x00000000001a4e19
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(CDUnknownBlockType)arg5;	// IMP=0x00000000001a4afa
- (void)zoomToLevel:(double)arg1 withPoint:(Matrix_6e1d3589)arg2;	// IMP=0x00000000001a44ac
- (void)zoom:(double)arg1 withPoint:(Matrix_6e1d3589)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a3fa6
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a3e33
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a3d89
- (void)rotateToYaw:(double)arg1 withPoint:(const void *)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001a35c7
- (void)rotateToPitch:(double)arg1 withPoint:(const void *)arg2 preserveAltitude:(_Bool)arg3 animated:(_Bool)arg4 exaggerate:(_Bool)arg5;	// IMP=0x00000000001a298e
- (float)maxPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x00000000001a28d5
- (float)idealPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x00000000001a289f
- (float)minimumPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x00000000001a2869
- (float)normalizedZoomLevelAdjustmentForTileSize:(long long)arg1;	// IMP=0x00000000001a281d
- (float)currentTopDownMinimumNormalizedZoomLevel;	// IMP=0x00000000001a2742
- (float)currentMinimumNormalizedZoomLevel;	// IMP=0x00000000001a26c9
- (float)currentMaximumNormalizedZoomLevel;	// IMP=0x00000000001a25ee
- (float)maximumNormalizedZoomLevel;	// IMP=0x00000000001a238e
- (float)minimumNormalizedZoomLevel;	// IMP=0x00000000001a2337
- (float)currentStyleZoomLevel;	// IMP=0x00000000001a22b9
- (float)currentNormalizedZoomLevel;	// IMP=0x00000000001a217d
- (float)currentDisplayZoomLevel;	// IMP=0x00000000001a1f7f
- (long long)tileSize;	// IMP=0x00000000001a1f51
- (void)canvasDidLayout;	// IMP=0x00000000001a1e6e
- (void)dealloc;	// IMP=0x00000000001a1df0
- (id)initWithMapDataAccess:(void *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4;	// IMP=0x00000000001a1cd6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

