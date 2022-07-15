//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKAnnotationView.h>

@class DebugLocationAnnotation, UIImageView, UIView;

@interface DebugLocationAnnotationView : MKAnnotationView
{
    DebugLocationAnnotation *_debugLocationAnnotation;	// 8 = 0x8
    UIView *_circleView;	// 16 = 0x10
    UIView *_outerCircleView;	// 24 = 0x18
    UIImageView *_courseImageView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000a1c1a0
@property(retain, nonatomic) DebugLocationAnnotation *debugLocationAnnotation; // @synthesize debugLocationAnnotation=_debugLocationAnnotation;
- (void)_setMapRotationRadians:(double)arg1;	// IMP=0x0010000000a1c14e
- (void)_setMapPitchRadians:(double)arg1;	// IMP=0x0010000000a1bf85
- (id)initWithAnnotation:(id)arg1 debugLocationAnnotation:(id)arg2 reuseIdentifier:(id)arg3;	// IMP=0x0010000000a1b8b7
- (void)_updateAccuracy;	// IMP=0x0010000000a1b65d
- (void)_updateCourse;	// IMP=0x0010000000a1b560
- (void)_updateFillColor;	// IMP=0x0010000000a1b44e

@end
