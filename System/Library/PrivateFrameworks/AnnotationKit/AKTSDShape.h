//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKTSDBezierPath, AKTSDBrushStroke, AKTSDLineEnd;

@interface AKTSDShape : NSObject
{
    struct {
        unsigned int path:1;
        unsigned int pathBounds:1;
        unsigned int pathBoundsWithoutStroke:1;
        unsigned int pathIsOpen:1;
        unsigned int pathIsLineSegment:1;
        unsigned int alignmentFrame:1;
        unsigned int headAndTail:1;
        unsigned int headLineEnd:1;
        unsigned int tailLineEnd:1;
        unsigned int clippedPath:1;
    } mShapeInvalidFlags;	// 8 = 0x8
    struct CGPoint mHeadPoint;	// 16 = 0x10
    struct CGPoint mTailPoint;	// 32 = 0x20
    struct CGPoint mHeadLineEndPoint;	// 48 = 0x30
    struct CGPoint mTailLineEndPoint;	// 64 = 0x40
    double mHeadLineEndAngle;	// 80 = 0x50
    double mTailLineEndAngle;	// 88 = 0x58
    long long mHeadCutSegment;	// 96 = 0x60
    long long mTailCutSegment;	// 104 = 0x68
    double mHeadCutT;	// 112 = 0x70
    double mTailCutT;	// 120 = 0x78
    AKTSDBezierPath *mCachedClippedPath;	// 128 = 0x80
    AKTSDBezierPath *_path;	// 136 = 0x88
    AKTSDBrushStroke *_stroke;	// 144 = 0x90
    AKTSDLineEnd *_headLineEnd;	// 152 = 0x98
    AKTSDLineEnd *_tailLineEnd;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000004ad08
@property(retain, nonatomic) AKTSDLineEnd *tailLineEnd; // @synthesize tailLineEnd=_tailLineEnd;
@property(retain, nonatomic) AKTSDLineEnd *headLineEnd; // @synthesize headLineEnd=_headLineEnd;
@property(retain, nonatomic) AKTSDBrushStroke *stroke; // @synthesize stroke=_stroke;
@property(retain, nonatomic) AKTSDBezierPath *path; // @synthesize path=_path;
- (id)_newClippedPath;	// IMP=0x000000000004aa36
- (void)p_computeAngle:(double *)arg1 point:(struct CGPoint *)arg2 cutSegment:(long long *)arg3 cutT:(double *)arg4 forLineEndAtHead:(_Bool)arg5;	// IMP=0x000000000004a5ed
- (void)p_validateTailLineEnd;	// IMP=0x000000000004a5a9
- (void)p_validateHeadLineEnd;	// IMP=0x000000000004a554
- (void)p_validateHeadAndTail;	// IMP=0x000000000004a4e4
- (void)p_invalidateClippedPath;	// IMP=0x000000000004a4c0
- (void)p_invalidateTail;	// IMP=0x000000000004a4a8
- (void)p_invalidateHead;	// IMP=0x000000000004a492
- (id)clippedPathForLineEnds;	// IMP=0x000000000004a449
- (double)tailLineEndAngle;	// IMP=0x000000000004a427
- (double)headLineEndAngle;	// IMP=0x000000000004a405
- (struct CGPoint)tailLineEndPoint;	// IMP=0x000000000004a3de
- (struct CGPoint)headLineEndPoint;	// IMP=0x000000000004a3b7
- (double)lineEndScale;	// IMP=0x000000000004a32f
- (id)strokeTailLineEnd;	// IMP=0x000000000004a273
- (id)strokeHeadLineEnd;	// IMP=0x000000000004a1b7
- (void)p_drawLineEndForHead:(_Bool)arg1 withDelta:(struct CGPoint)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(_Bool)arg4;	// IMP=0x000000000004a066
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x0000000000049f86
- (id)init;	// IMP=0x0000000000049f4c

@end

