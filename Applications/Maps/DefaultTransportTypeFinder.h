//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MapTypeSource;

@interface DefaultTransportTypeFinder : NSObject
{
    id <MapTypeSource> _mapTypeSource;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0010000000a2bca9
@property(readonly, nonatomic) __weak id <MapTypeSource> mapTypeSource; // @synthesize mapTypeSource=_mapTypeSource;
- (void)findDirectionsTypeForOriginCoordinate:(struct CLLocationCoordinate2D)arg1 destinationCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000a2bbce
- (void)transportTypeForCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2 ignoreMapType:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000a2b625
- (void)transportTypeForOrigin:(struct CLLocationCoordinate2D)arg1 destination:(struct CLLocationCoordinate2D)arg2 ignoreMapType:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000a2b5c5
- (void)mkDirectionsTypeForOrigin:(struct CLLocationCoordinate2D)arg1 destination:(struct CLLocationCoordinate2D)arg2 ignoreMapType:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000a2b4cb
- (int)geoIdealTransportTypeForCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2 ignoreMapType:(_Bool)arg3;	// IMP=0x0010000000a2b3cc
- (int)geoIdealTransportTypeForOrigin:(struct CLLocationCoordinate2D)arg1 destination:(struct CLLocationCoordinate2D)arg2 ignoreMapType:(_Bool)arg3;	// IMP=0x0010000000a2b36f
- (id)initWithMapTypeSource:(id)arg1;	// IMP=0x0010000000a2b2f4
- (void)transportTypeForDirectionItem:(id)arg1 ignoreMapType:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000570d14

@end
