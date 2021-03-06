//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapView, NSMutableArray, NSMutableDictionary;

@interface NavDebugLocationManager : NSObject
{
    MKMapView *_mapView;	// 8 = 0x8
    NSMutableDictionary *_overlays;	// 16 = 0x10
    NSMutableArray *_annotations;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000271589
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000027139d
- (id)viewForAnnotation:(id)arg1;	// IMP=0x00100000002712cc
- (id)rendererForOverlay:(id)arg1;	// IMP=0x001000000027112a
- (void)addLocation:(id)arg1;	// IMP=0x0010000000270ff7
- (void)dealloc;	// IMP=0x0010000000270963
- (id)init;	// IMP=0x001000000027088a

@end

