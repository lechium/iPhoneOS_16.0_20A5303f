//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOComposedRouteStep, MISSING_TYPE, MKMapSnapshotter, NSArray, NSString, RAPReport, RAPUserPathEntry, RAPWebBundleRouteStepContext, UIImage;
@protocol RAPRouteStepDetailViewControllerDelegate;

@interface RAPRouteStepDetailViewController
{
    RAPReport *_report;	// 8 = 0x8
    GEOComposedRouteStep *_step;	// 16 = 0x10
    _Bool _isMissedStep;	// 24 = 0x18
    RAPUserPathEntry *_userPath;	// 32 = 0x20
    RAPWebBundleRouteStepContext *_context;	// 40 = 0x28
    NSArray *_locales;	// 48 = 0x30
    NSString *_aggregatedData;	// 56 = 0x38
    id <RAPRouteStepDetailViewControllerDelegate> _delegate;	// 64 = 0x40
    MKMapSnapshotter *_mapSnapshotter;	// 72 = 0x48
    NSString *_mapSnapshotId;	// 80 = 0x50
    UIImage *_mapSnapshot;	// 88 = 0x58
    MISSING_TYPE *_routeIndex;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000017cf71
- (void)macFooterViewRightButtonTapped:(id)arg1;	// IMP=0x001000000017cf5f
- (void)macFooterViewLeftButtonTapped:(id)arg1;	// IMP=0x001000000017cf4d
- (void)didReceiveMessageFromUserContentController:(id)arg1 message:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000017cc9c
- (struct CLLocationCoordinate2D)startingCoordinateForMapPicker;	// IMP=0x001000000017cc00
- (void)_uploadForm:(id)arg1;	// IMP=0x001000000017c28d
- (void)_submit;	// IMP=0x001000000017c17a
- (void)_dismiss;	// IMP=0x001000000017c0a7
- (void)_updateAggregatedDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000017bd7f
- (void)_submitPressed:(id)arg1;	// IMP=0x001000000017bc37
- (void)_cancelPressed:(id)arg1;	// IMP=0x001000000017bc25
- (void)_saveMapImageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000017b0dc
- (void)_saveManeuverIconWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000017a794
- (void)_takeSnapshots;	// IMP=0x001000000017a43f
- (id)context;	// IMP=0x001000000017a338
- (void)setupViews;	// IMP=0x001000000017a144
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000017a0c7
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000017a077
- (void)viewDidLoad;	// IMP=0x001000000017a036
- (id)initWithReport:(id)arg1 step:(id)arg2 userPath:(id)arg3 routeIndex:(unsigned long long)arg4 delegate:(id)arg5;	// IMP=0x0010000000179f0a

@end

