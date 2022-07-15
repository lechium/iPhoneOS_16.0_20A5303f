//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class GuidanceManeuverArtwork, MKArtworkImageView, NSArray, UIBezierPath, UIColor, UIImage;
@protocol GuidanceManeuverViewTextureProvider;

@interface GuidanceManeuverView : UIView
{
    _Bool _disallowMutation;	// 8 = 0x8
    _Bool _alerting;	// 9 = 0x9
    _Bool _disallowManeuversWithoutArt;	// 10 = 0xa
    id <GuidanceManeuverViewTextureProvider> _textureProvider;	// 16 = 0x10
    unsigned int _framing;	// 24 = 0x18
    UIColor *_arrowColor;	// 32 = 0x20
    UIColor *_accentColor;	// 40 = 0x28
    UIBezierPath *_arrowPath;	// 48 = 0x30
    UIBezierPath *_arrowStrokePath;	// 56 = 0x38
    UIBezierPath *_intersectionFillPath;	// 64 = 0x40
    UIBezierPath *_intersectionStrokePath;	// 72 = 0x48
    NSArray *_arrivalCircles;	// 80 = 0x50
    UIImage *_maneuverImage;	// 88 = 0x58
    MKArtworkImageView *_maneuverArtworkImageView;	// 96 = 0x60
    double _visibleWidth;	// 104 = 0x68
    GuidanceManeuverArtwork *_maneuverArtwork;	// 112 = 0x70
    double _accentFillAlpha;	// 120 = 0x78
    double _accentStrokeAlpha;	// 128 = 0x80
    long long _shieldIdiom;	// 136 = 0x88
    CDStruct_0e0a9ffd _arrowMetrics;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00200000004ffb2e
@property(nonatomic) _Bool disallowManeuversWithoutArt; // @synthesize disallowManeuversWithoutArt=_disallowManeuversWithoutArt;
@property(nonatomic) long long shieldIdiom; // @synthesize shieldIdiom=_shieldIdiom;
@property(nonatomic) double accentStrokeAlpha; // @synthesize accentStrokeAlpha=_accentStrokeAlpha;
@property(nonatomic) double accentFillAlpha; // @synthesize accentFillAlpha=_accentFillAlpha;
@property(retain, nonatomic) UIColor *accentColor; // @synthesize accentColor=_accentColor;
@property(retain, nonatomic) UIColor *arrowColor; // @synthesize arrowColor=_arrowColor;
@property(nonatomic) unsigned int framing; // @synthesize framing=_framing;
@property(nonatomic) CDStruct_0e0a9ffd arrowMetrics; // @synthesize arrowMetrics=_arrowMetrics;
@property(retain, nonatomic) GuidanceManeuverArtwork *maneuverArtwork; // @synthesize maneuverArtwork=_maneuverArtwork;
@property(readonly, nonatomic) UIImage *imageRepresentation;
- (struct CGSize)intrinsicContentSize;	// IMP=0x00100000004ff560
- (void)disallowMutation;	// IMP=0x00100000004ff4a6
@property(readonly, nonatomic) int displayManeuver;
- (id)_imageWithManeuverType:(int)arg1 inRect:(struct CGRect)arg2;	// IMP=0x00100000004ff0e7
- (void)_invalidateDrawingPaths;	// IMP=0x00100000004ff0b9
- (void)_drawProceedToRoute;	// IMP=0x00100000004feb8c
- (void)_drawArrival;	// IMP=0x00100000004fe65f
- (void)_drawDefaultPaths;	// IMP=0x00100000004fe5aa
- (void)_drawManeuverImage;	// IMP=0x00100000004fe533
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00100000004fe469
- (void)_updateDrawingPathsFromJunction;	// IMP=0x00100000004fe237
- (void)_updateDrawingPathsForProceedToRoute;	// IMP=0x00100000004fdf71
- (void)_updateDrawingPathsForArrival;	// IMP=0x00100000004fdbce
- (_Bool)_maneuverTypeRequiresDrawingPaths:(int)arg1;	// IMP=0x00100000004fdbac
- (void)_updateDrawingPaths;	// IMP=0x00100000004fd43e
- (void)_updateManeuverArtworkImage;	// IMP=0x00100000004fd21c
- (void)_updateManeuverImage;	// IMP=0x00100000004fd0da
- (void)drawArrow:(id)arg1 stroke:(id)arg2 withVisibleWidth:(double)arg3 intersectionFillPath:(id)arg4 intersectionStrokePath:(id)arg5 referenceSize:(struct CGSize)arg6;	// IMP=0x00100000004fcb61
- (struct CGAffineTransform)transformForDrawingPathsWithFrame:(struct CGRect)arg1 relativeToReferenceSize:(struct CGSize)arg2;	// IMP=0x00100000004fc961
- (void)drawArrow:(id)arg1 stroke:(id)arg2;	// IMP=0x00100000004fc83f
- (void)drawIntersectionStroke:(id)arg1 forFill:(id)arg2;	// IMP=0x00100000004fc747
- (void)drawIntersectionFill:(id)arg1;	// IMP=0x00100000004fc6bc
@property(readonly, nonatomic) _Bool _maneuverIsDrawnByDrawRect;
- (id)initWithFrame:(struct CGRect)arg1 textureProvider:(id)arg2;	// IMP=0x00100000004fc232
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000004fc21e

@end
