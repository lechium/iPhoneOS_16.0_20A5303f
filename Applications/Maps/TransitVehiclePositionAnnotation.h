//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;
@protocol GEOTransitVehiclePosition;

@interface TransitVehiclePositionAnnotation : NSObject
{
    id <GEOTransitVehiclePosition> _vehiclePosition;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000085098d
@property(readonly, nonatomic) id <GEOTransitVehiclePosition> vehiclePosition; // @synthesize vehiclePosition=_vehiclePosition;
- (_Bool)allowsTimestampLabel;	// IMP=0x001000000085097b
- (_Bool);	// IMP=0x0010000000850973
- (id)imageWithScale:(double)arg1 nightMode:(_Bool)arg2;	// IMP=0x00100000008508b0
@property(readonly, nonatomic) UIColor *color;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)updateVehiclePosition:(id)arg1;	// IMP=0x00100000008506fd
- (id)initWithVehiclePosition:(id)arg1;	// IMP=0x0010000000850692

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end
