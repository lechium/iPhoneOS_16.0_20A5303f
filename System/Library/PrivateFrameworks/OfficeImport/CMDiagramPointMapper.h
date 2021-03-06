//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CMDrawingContext, NSString, OADOrientedBounds, ODDPoint;

__attribute__((visibility("hidden")))
@interface CMDiagramPointMapper
{
    ODDPoint *mPoint;	// 40 = 0x28
    CMDrawingContext *mDrawingContext;	// 48 = 0x30
    OADOrientedBounds *mOrientedBounds;	// 56 = 0x38
    NSString *mPresentationName;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000046477e
- (float)defaultFontSize;	// IMP=0x00000000001ecd95
- (id)diagram;	// IMP=0x00000000001eb502
- (id)baseTextListStyleWithBounds:(id)arg1 isCentered:(_Bool)arg2;	// IMP=0x00000000001ecb4b
- (id)plainText;	// IMP=0x00000000001eab8c
- (id)transformPresentationName;	// IMP=0x00000000001ea6aa
- (id)transformForPresentationWithName:(id)arg1;	// IMP=0x00000000001ea6b2
- (void)mapSiblingTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4;	// IMP=0x0000000000203b89
- (void)mapChildrenTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4;	// IMP=0x0000000000203dd8
- (void)mapTextAt:(id)arg1 withBounds:(id)arg2 isCentered:(_Bool)arg3 includeChildren:(_Bool)arg4 withState:(id)arg5;	// IMP=0x00000000001ec833
- (void)renderShapeAsBackgroundInBounds:(id)arg1;	// IMP=0x00000000001ebff6
- (id)stroke;	// IMP=0x00000000001ec3c6
- (id)fill;	// IMP=0x00000000001ec22b
- (void)applyDiagramStyleToShapeProperties;	// IMP=0x00000000001eb0f8
- (id)styleMatrix;	// IMP=0x00000000001ebd04
- (id)shapeStyle;	// IMP=0x00000000001eb202
- (id)presentationWithName:(id)arg1;	// IMP=0x00000000001ea91f
- (void)mapChlidrenAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000001ed322
- (void)setPresentationName:(id)arg1;	// IMP=0x000000000022d4b8
- (id)presentationName;	// IMP=0x00000000001eb5e9
- (void)mapStyledRectangle:(struct CGRect)arg1 at:(id)arg2 withState:(id)arg3;	// IMP=0x00000000001ebffc
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000001eae9c
- (id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4;	// IMP=0x00000000001ea470
- (void)mapPointTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4;	// IMP=0x00000000001ece70

@end

