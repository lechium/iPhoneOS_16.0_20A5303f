//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOURLTimePoint, MKURLContext, MapsAction, MapsActivity, NSError, NSNumber, NSString, _MKURLHandler;

@interface _MKHandlerURLHandlingTask
{
    MapsAction *_currentAction;	// 80 = 0x50
    _Bool _needsUserLocation;	// 88 = 0x58
    _Bool _mkOptionsParsed;	// 89 = 0x59
    double _userLocationDesiredAccuracy;	// 96 = 0x60
    _Bool _taskFinished;	// 104 = 0x68
    _Bool _searchAlongRoute;	// 105 = 0x69
    _Bool _asyncTaskInProgress;	// 106 = 0x6a
    NSNumber *_routeAvoidHighways;	// 112 = 0x70
    NSNumber *_routeAvoidTolls;	// 120 = 0x78
    NSString *_searchTerm;	// 128 = 0x80
    GEOURLTimePoint *_timePoint;	// 136 = 0x88
    NSNumber *_radiusInMeter;	// 144 = 0x90
    int _analyticsAction;	// 152 = 0x98
    int _analyticsTarget;	// 156 = 0x9c
    NSString *_analyticsValue;	// 160 = 0xa0
    _MKURLHandler *_urlHandler;	// 168 = 0xa8
    MapsActivity *_mapsActivity;	// 176 = 0xb0
    NSString *_contentProvider;	// 184 = 0xb8
    NSError *_currentError;	// 192 = 0xc0
    MKURLContext *_urlContext;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0020000000381424
- (CDStruct_b7cb895d)regionForLaunchOptions:(id)arg1 andMapItems:(id)arg2;	// IMP=0x0010000000380b73
- (_Bool)URLHandlerShowAllCuratedCollections:(id)arg1;	// IMP=0x0010000000380b40
- (_Bool)URLHandler:(id)arg1 showPublisherWithID:(unsigned long long)arg2 resultProviderID:(int)arg3;	// IMP=0x0010000000380ae9
- (_Bool)URLHandler:(id)arg1 showCuratedCollectionWithID:(unsigned long long)arg2 resultProviderID:(int)arg3;	// IMP=0x0010000000380a92
- (_Bool)URLHandlerShowCarDestinations:(id)arg1;	// IMP=0x0010000000380a5f
- (_Bool)URLHandler:(id)arg1 showCollection:(id)arg2;	// IMP=0x00100000003809f6
- (_Bool)URLHandler:(id)arg1 showMapItem:(id)arg2 label:(id)arg3 at:(struct CLLocationCoordinate2D)arg4;	// IMP=0x00100000003809ee
- (_Bool)URLHandler:(id)arg1 launchIntoTesterWithParam:(id)arg2;	// IMP=0x001000000038091c
- (_Bool)URLHandler:(id)arg1 enterLookAroundWithViewState:(id)arg2;	// IMP=0x0010000000380837
- (_Bool)URLHandler:(id)arg1 showFavoritesType:(long long)arg2;	// IMP=0x0010000000380761
- (_Bool)URLHandler:(id)arg1 showLineWithID:(unsigned long long)arg2 name:(id)arg3;	// IMP=0x0010000000380602
- (_Bool)URLHandler:(id)arg1 search:(id)arg2 at:(struct CLLocationCoordinate2D)arg3;	// IMP=0x0010000000380455
- (_Bool)URLHandler:(id)arg1 showExternalBusinessID:(id)arg2 ofContentProvider:(id)arg3;	// IMP=0x001000000038031f
- (_Bool)URLHandler:(id)arg1 showMUID:(unsigned long long)arg2 resultProviderID:(int)arg3 coordinate:(struct CLLocationCoordinate2D)arg4 query:(id)arg5;	// IMP=0x0010000000380165
- (_Bool)URLHandler:(id)arg1 showLabel:(id)arg2 at:(struct CLLocationCoordinate2D)arg3;	// IMP=0x0010000000380054
- (_Bool)URLHandler:(id)arg1 showAddress:(id)arg2 label:(id)arg3 at:(struct CLLocationCoordinate2D)arg4;	// IMP=0x001000000037ff1b
- (_Bool)URLHandler:(id)arg1 showAddress:(id)arg2 label:(id)arg3;	// IMP=0x001000000037fdb1
- (_Bool)URLHandler:(id)arg1 showAddressByCNContactIdentifier:(id)arg2 addressIdentifier:(id)arg3;	// IMP=0x001000000037fbcc
- (_Bool)URLHandler:(id)arg1 showAddressByRecordID:(id)arg2 addressID:(id)arg3;	// IMP=0x001000000037f9d6
- (_Bool)URLHandler:(id)arg1 launchIntoTableBookingForMapItem:(id)arg2 options:(id)arg3 context:(id)arg4;	// IMP=0x001000000037f8cc
- (_Bool)URLHandler:(id)arg1 launchIntoPhotoThumbnailGalleryForMapItem:(id)arg2 options:(id)arg3 context:(id)arg4;	// IMP=0x001000000037f7c2
- (_Bool)URLHandler:(id)arg1 launchIntoRAPForMapItem:(id)arg2 options:(id)arg3 context:(id)arg4;	// IMP=0x001000000037f6b8
- (_Bool)URLHandler:(id)arg1 showDirectionsFrom:(id)arg2 toDestinations:(id)arg3 using:(unsigned long long)arg4;	// IMP=0x001000000037ee6e
- (_Bool)URLHandler:(id)arg1 showDirectionsFrom:(id)arg2 to:(id)arg3 using:(unsigned long long)arg4 muid:(unsigned long long)arg5 providerId:(int)arg6 showLabel:(id)arg7;	// IMP=0x001000000037ec15
- (_Bool)URLHandler:(id)arg1 showDirectionsFrom:(id)arg2 to:(id)arg3 using:(unsigned long long)arg4;	// IMP=0x001000000037ebf4
- (_Bool)URLHandler:(id)arg1 showMapWithoutPinAt:(struct CLLocationCoordinate2D)arg2;	// IMP=0x001000000037eb90
- (_Bool)URLHandler:(id)arg1 setShowTraffic:(_Bool)arg2;	// IMP=0x001000000037ea9c
- (_Bool)URLHandler:(id)arg1 setMapType:(unsigned long long)arg2;	// IMP=0x001000000037e968
- (_Bool)URLHandler:(id)arg1 setUserTrackingMode:(long long)arg2;	// IMP=0x001000000037e878
- (_Bool)URLHandler:(id)arg1 setRegionWithCenter:(struct CLLocationCoordinate2D)arg2;	// IMP=0x001000000037e798
- (_Bool)URLHandler:(id)arg1 setRegionWithCenter:(struct CLLocationCoordinate2D)arg2 zoomLevel:(double)arg3;	// IMP=0x001000000037e63d
- (_Bool)URLHandler:(id)arg1 setRegionWithCenterAndCamera:(struct CLLocationCoordinate2D)arg2 zoomLevel:(double)arg3 pitch:(double)arg4 yaw:(double)arg5;	// IMP=0x001000000037e4d2
- (_Bool)URLHandler:(id)arg1 setRegionWithCenterAndCamera:(struct CLLocationCoordinate2D)arg2 altitude:(double)arg3 pitch:(double)arg4 yaw:(double)arg5;	// IMP=0x001000000037e395
- (_Bool)URLHandler:(id)arg1 setRegionWithCamera:(CDStruct_b7cb895d)arg2 pitch:(double)arg3 yaw:(double)arg4;	// IMP=0x001000000037e18b
- (_Bool)URLHandler:(id)arg1 setRegion:(CDStruct_b7cb895d)arg2;	// IMP=0x001000000037dfad
- (_Bool)URLHandler:(id)arg1 launchIntoSearchWithMapItems:(id)arg2 options:(id)arg3 context:(id)arg4;	// IMP=0x001000000037d6cc
- (_Bool)URLHandler:(id)arg1 launchIntoShowMapItems:(id)arg2 options:(id)arg3 context:(id)arg4;	// IMP=0x001000000037d59d
- (_Bool)_shouldAddStopWithLaunchOptions:(id)arg1;	// IMP=0x001000000037d2c1
- (_Bool)URLHandler:(id)arg1 launchIntoDirectionsWithMapItems:(id)arg2 options:(id)arg3 context:(id)arg4;	// IMP=0x001000000037ca66
- (_Bool)URLHandler:(id)arg1 setContentProvider:(id)arg2;	// IMP=0x001000000037c9b5
- (_Bool)URLHandler:(id)arg1 setSchemeForCapture:(id)arg2 sourceApplication:(id)arg3 isLaunchedFromTTL:(_Bool)arg4 ttlEventTime:(id)arg5;	// IMP=0x001000000037c8fe
- (_Bool)URLHandler:(id)arg1 launchWithOptions:(id)arg2;	// IMP=0x001000000037c8e6
- (void)URLHandler:(id)arg1 didFinishAsynchronousHandlingOfURL:(id)arg2 sourceApplication:(id)arg3 context:(id)arg4 error:(id)arg5;	// IMP=0x001000000037c749
- (void)URLHandler:(id)arg1 willStartAsynchronousHandlingOfURL:(id)arg2 sourceApplication:(id)arg3 context:(id)arg4;	// IMP=0x001000000037c6a9
- (_Bool)URLHandlerShouldPerformForwardGeocoding:(id)arg1;	// IMP=0x001000000037c6a1
- (_Bool)URLHandlerShouldPerformReverseGeocoding:(id)arg1;	// IMP=0x001000000037c699
- (_Bool)URLHandlerShouldPerformRefinementRequest:(id)arg1;	// IMP=0x001000000037c691
- (void)_processMKOptions:(id)arg1;	// IMP=0x001000000037bbc8
- (void)_sendWidgetAnalytics;	// IMP=0x001000000037bb30
- (_Bool)isCompatibleWithNavigation;	// IMP=0x001000000037b98b
- (_Bool)shouldResetUI;	// IMP=0x001000000037b766
- (void)_createRichMapsActivity;	// IMP=0x001000000037b432
- (void)taskFailed;	// IMP=0x001000000037b3f1
- (void)taskFinished:(id)arg1;	// IMP=0x001000000037b3b0
- (void)performTask;	// IMP=0x001000000037b107
- (id)displayOptions;	// IMP=0x001000000037b021
- (id)mapsActivity;	// IMP=0x001000000037afe0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
