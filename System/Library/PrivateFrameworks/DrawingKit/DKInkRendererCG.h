//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIColor;
@protocol DKInkRendererDelegate;

__attribute__((visibility("hidden")))
@interface DKInkRendererCG : UIView
{
    _Bool scaleDrawingToFitCanvas;	// 8 = 0x8
    _Bool drawingEnabled;	// 9 = 0x9
    UIColor *inkColor;	// 16 = 0x10
    id <DKInkRendererDelegate> delegate;	// 24 = 0x18
    double drawingScale;	// 32 = 0x20
    unsigned long long mode;	// 40 = 0x28
    NSMutableArray *_cachedInterpolatedBrushStrokes;	// 48 = 0x30
    NSMutableArray *_currentInterpolatedBrushStroke;	// 56 = 0x38
    struct CGRect _invalidRect;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000022f7
@property(retain, nonatomic) NSMutableArray *currentInterpolatedBrushStroke; // @synthesize currentInterpolatedBrushStroke=_currentInterpolatedBrushStroke;
@property(retain, nonatomic) NSMutableArray *cachedInterpolatedBrushStrokes; // @synthesize cachedInterpolatedBrushStrokes=_cachedInterpolatedBrushStrokes;
@property(nonatomic) struct CGRect invalidRect; // @synthesize invalidRect=_invalidRect;
@property(nonatomic) _Bool drawingEnabled; // @synthesize drawingEnabled;
@property(nonatomic) unsigned long long mode; // @synthesize mode;
@property(nonatomic) double drawingScale; // @synthesize drawingScale;
@property(nonatomic) _Bool scaleDrawingToFitCanvas; // @synthesize scaleDrawingToFitCanvas;
@property(nonatomic) __weak id <DKInkRendererDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UIColor *inkColor; // @synthesize inkColor;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000001c1d
- (void)display;	// IMP=0x0000000000001b47
@property(readonly, nonatomic) _Bool initialized;
- (void)teardown;	// IMP=0x0000000000001b2b
@property(readonly, nonatomic) unsigned long long maximumPointsForBleedAnimation;
@property(readonly, nonatomic) _Bool supportsBleedAnimation;
- (id)snapshotImage;	// IMP=0x0000000000001a8f
- (void)flush;	// IMP=0x0000000000001a89
- (void)force;	// IMP=0x0000000000001a83
- (void)removeLastStroke;	// IMP=0x0000000000001a66
- (void)completeAnimationsImmediately;	// IMP=0x0000000000001a60
- (void)resetRendererState;	// IMP=0x0000000000001a5a
- (void)clear;	// IMP=0x00000000000019bb
- (void)endStroke;	// IMP=0x0000000000001970
- (void)addPoint:(CDStruct_09aaf5d3)arg1;	// IMP=0x000000000000184b
- (void)beginStroke;	// IMP=0x000000000000179b
- (void)dealloc;	// IMP=0x000000000000176c
- (void)_commonInit;	// IMP=0x00000000000016e9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000169d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000001640

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

