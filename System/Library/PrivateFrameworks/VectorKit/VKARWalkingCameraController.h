//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VKARWalkingCameraController
{
    void *_arLogic;	// 96 = 0x60
    void *_elevationLogic;	// 104 = 0x68
    struct Quaternion<double> _rotationCorrectionQuaternion;	// 112 = 0x70
    Coordinate3D_b0aa8be1 _coordinate;	// 144 = 0x90
    struct EulerAngles _eulerAngles;	// 168 = 0xa8
    Unit_6d5b752b _heading;	// 192 = 0xc0
    struct vector<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>, std::allocator<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>>> _gestures;	// 200 = 0xc8
    struct Monitorable<md::ConfigValue<GEOConfigKeyDouble, double>> _maxClipDistance;	// 224 = 0xe0
}

- (id).cxx_construct;	// IMP=0x0000000000912bca
- (void).cxx_destruct;	// IMP=0x0000000000912b8b
- (void)stopTrackingAnnotation;	// IMP=0x0000000000912b85
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(CDUnknownBlockType)arg5;	// IMP=0x0000000000912b7f
- (double)maxPitch;	// IMP=0x0000000000912b76
- (double)minPitch;	// IMP=0x0000000000912b6d
- (double)topDownMinimumZoomLevel;	// IMP=0x0000000000912b5f
- (double)currentZoomLevel;	// IMP=0x0000000000912b51
- (double)maximumZoomLevel;	// IMP=0x0000000000912b43
- (double)minimumZoomLevel;	// IMP=0x0000000000912b35
- (_Bool)usesVKCamera;	// IMP=0x0000000000912b2d
- (double)pitch;	// IMP=0x0000000000912ac1
- (void)setPitch:(double)arg1;	// IMP=0x0000000000912a55
- (double)presentationHeading;	// IMP=0x0000000000912a43
- (double)heading;	// IMP=0x00000000009129d7
- (void)setHeading:(double)arg1;	// IMP=0x000000000091296b
- (void)setAltitude:(double)arg1;	// IMP=0x0000000000912878
- (double)altitude;	// IMP=0x000000000091286f
- (double)distanceFromCenterCoordinate;	// IMP=0x000000000091280b
- (void)setDistanceFromCenterCoordinate:(double)arg1;	// IMP=0x00000000009127a7
- (CDStruct_c3b9c2ee)centerCoordinate;	// IMP=0x0000000000912696
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1;	// IMP=0x0000000000912620
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x000000000091256b
- (void)setVkCamera:(id)arg1;	// IMP=0x000000000091253c
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000009124ce
- (void)_updateDebugOverlay:(void *)arg1;	// IMP=0x0000000000911fd3
- (id)_buildDebugString:(void *)arg1;	// IMP=0x0000000000911ec0
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x0000000000911e58
- (void)_updateClipPlanes;	// IMP=0x0000000000911dce
- (void *)_locationProvider;	// IMP=0x0000000000911db6
- (void)pushGesture:(void *)arg1;	// IMP=0x0000000000911b77
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1 mapDataAccess:(void *)arg2 animationRunner:(struct AnimationRunner *)arg3 runLoopController:(struct RunLoopController *)arg4 cameraDelegate:(id)arg5 arLogic:(void *)arg6 elevationLogic:(void *)arg7;	// IMP=0x000000000091191e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

