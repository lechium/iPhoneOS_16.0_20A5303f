//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CustomPOIsController, MKAnnotationView, MKMapView, MapCameraController, NSString, VKLabelMarker;
@protocol CustomPOIAnnotation, MapSelectionManagerDelegate, OS_dispatch_group;

@interface MapSelectionManager : NSObject
{
    _Bool needsUpdate;	// 8 = 0x8
    _Bool _mapSelectionChangePending;	// 9 = 0x9
    _Bool _isCluster;	// 10 = 0xa
    _Bool _selectionFromTap;	// 11 = 0xb
    VKLabelMarker *_pendingSelectedLabelMarker;	// 16 = 0x10
    double _clusterDeselectZoomThreshold;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_updateGroup;	// 32 = 0x20
    int _updateCount;	// 40 = 0x28
    _Bool _ignoreSelectionChanges;	// 44 = 0x2c
    id <MapSelectionManagerDelegate> _delegate;	// 48 = 0x30
    MapCameraController *_mapCameraController;	// 56 = 0x38
    CustomPOIsController *_customPOIsController;	// 64 = 0x40
    VKLabelMarker *_labelMarker;	// 72 = 0x48
    MKAnnotationView *_annotationView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000a1703b
@property(nonatomic) _Bool ignoreSelectionChanges; // @synthesize ignoreSelectionChanges=_ignoreSelectionChanges;
@property(retain, nonatomic) MKAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
@property(retain, nonatomic) VKLabelMarker *labelMarker; // @synthesize labelMarker=_labelMarker;
@property(nonatomic) __weak CustomPOIsController *customPOIsController; // @synthesize customPOIsController=_customPOIsController;
@property(retain, nonatomic) MapCameraController *mapCameraController; // @synthesize mapCameraController=_mapCameraController;
@property(nonatomic) __weak id <MapSelectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (int)currentMapViewTargetForAnalytics;	// IMP=0x0010000000a16f18
- (int)currentUITargetForAnalytics;	// IMP=0x0010000000a16e73
- (void)resumeUpdates;	// IMP=0x0010000000a16e56
- (void)suspendUpdates;	// IMP=0x0010000000a16e39
- (void)_handleSelectingTapGesture:(id)arg1;	// IMP=0x0010000000a16e2f
- (void)_clearClusterSelectionOnGesture:(id)arg1;	// IMP=0x0010000000a16dd9
- (void)_handleMapZoomingGesture:(id)arg1;	// IMP=0x0010000000a16a96
- (void)_handleMapPinch:(id)arg1;	// IMP=0x0010000000a16a84
- (void)_applyMapSelectionDidChange;	// IMP=0x0010000000a16a4f
- (void)_performAnalyticsForTappingOnAnnotationView:(id)arg1;	// IMP=0x0010000000a167d3
- (void)_performAnalyticsForTappingOnLabelMarker:(id)arg1;	// IMP=0x0010000000a165bd
- (void)mapDidSelectAnnotationView:(id)arg1;	// IMP=0x0010000000a164ed
- (void)mapDidSelectLabelMarker:(id)arg1;	// IMP=0x0010000000a162b2
- (_Bool)shouldSelectLabelMarker:(id)arg1;	// IMP=0x0010000000a16165
- (void)restoreSelectionState:(id)arg1 animated:(_Bool)arg2 restoreRegion:(_Bool)arg3 notifyDelegate:(_Bool)arg4;	// IMP=0x0010000000a15da6
- (void)restoreSelectionState:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a15d88
- (id)selectionStateIncludingCamera:(_Bool)arg1 includeNotCustomLabelMarkers:(_Bool)arg2;	// IMP=0x0010000000a15b8b
- (void)_selectLabelMarkerWithKeys:(id)arg1 camera:(id)arg2 animated:(_Bool)arg3 restoreRegion:(_Bool)arg4 updateIfNeeded:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000a1572d
- (void)selectLabelMarkerWithKeys:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000a15705
- (void)selectMapItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a1554c
- (void)selectSearchResult:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a1542e
- (void)selectLabelMarker:(id)arg1 animated:(_Bool)arg2 updateIfNeeded:(_Bool)arg3;	// IMP=0x0010000000a152d2
- (void)selectLabelMarker:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000a152ba
- (void)clearSelectionAnimated:(_Bool)arg1 updateIfNeeded:(_Bool)arg2;	// IMP=0x0010000000a15017
- (void)clearSelectionAnimated:(_Bool)arg1;	// IMP=0x0010000000a15000
- (void)clearSelection;	// IMP=0x0010000000a14fe9
@property(readonly, nonatomic) _Bool hasSelection;
@property(readonly, nonatomic) id <CustomPOIAnnotation> customLabelMarker;
- (void)setLabelMarker:(id)arg1 updateIfNeeded:(_Bool)arg2;	// IMP=0x0010000000a14c8f
- (void)_removeGestureRecognizersForMapView:(id)arg1;	// IMP=0x0010000000a14b22
- (void)_addGestureRecognizersForMapView:(id)arg1;	// IMP=0x0010000000a149cc
- (void)_setNeedsUpdate;	// IMP=0x0010000000a147ce
- (void)_notifyDelegate;	// IMP=0x0010000000a14735
@property(readonly, nonatomic) __weak MKMapView *mapView;
- (void)dealloc;	// IMP=0x0010000000a14677
- (id)initWithCameraController:(id)arg1;	// IMP=0x0010000000a14571

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
