//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapView, NSMutableDictionary;
@protocol MapGestureCardDismissalHelperDelegate;

@interface MapGestureCardDismissalHelper : NSObject
{
    MKMapView *_mapView;	// 8 = 0x8
    NSMutableDictionary *_insidenessByGesture;	// 16 = 0x10
    double _dismissalRectTopEdge;	// 24 = 0x18
    unsigned long long _activeGestureCount;	// 32 = 0x20
    _Bool _shouldIgnoreGestures;	// 40 = 0x28
    _Bool _didDismiss;	// 41 = 0x29
    id <MapGestureCardDismissalHelperDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000002c2280
@property(nonatomic) __weak id <MapGestureCardDismissalHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleMapViewDiscreteGesture:(id)arg1;	// IMP=0x00100000002c21ea
- (void)handleMapViewContinuousGesture:(id)arg1;	// IMP=0x00100000002c2192
- (double)insidenessForGesture:(id)arg1;	// IMP=0x00100000002c20d1
- (void)dismissCard;	// IMP=0x00100000002c205c
- (_Bool)hasContinuousGestureInProgress;	// IMP=0x00100000002c204e
- (void)continuousGestureDidChange:(id)arg1;	// IMP=0x00100000002c1e63
- (void)continuousGestureDidEnd:(id)arg1;	// IMP=0x00100000002c1dcc
- (void)continuousGestureDidBegin:(id)arg1;	// IMP=0x00100000002c1ca4
- (void)dealloc;	// IMP=0x00100000002c1b18
- (id)initWithMapView:(id)arg1;	// IMP=0x00100000002c1917

@end

