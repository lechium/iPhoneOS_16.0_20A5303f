//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EMFPlusPlayer, MFGraphicsDevice;

__attribute__((visibility("hidden")))
@interface EMFPlayer : NSObject
{
    MFGraphicsDevice *m_gdi;	// 8 = 0x8
    _Bool m_headerDone;	// 16 = 0x10
    EMFPlusPlayer *m_emfPlusPlayer;	// 24 = 0x18
    _Bool m_ignoreEMFRecords;	// 32 = 0x20
    _Bool m_ignoreEMFPlusRecords;	// 33 = 0x21
}

+ (struct CGRect)boundsInPoints:(id)arg1;	// IMP=0x006000000023ec9b
+ (struct CGRect)boundsInLogicalUnits:(id)arg1;	// IMP=0x0060000000358ec2
- (void).cxx_destruct;	// IMP=0x0000000000358fd0
- (int)playSetMetaRgn:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000358eac
- (int)playIntersectClipRect:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000358e3d
- (int)playExcludeClipRect:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000358dda
- (int)playInvertRgn:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000358d51
- (int)playPaintRgn:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000358cc8
- (int)playFillRgn:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000358c3a
- (int)playSelectClipRegion:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000358bac
- (int)playSelectClipPath:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000358b87
- (int)playStrokeAndFillPath:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_stroke:(_Bool)arg3 in_fill:(_Bool)arg4;	// IMP=0x0000000000358b6b
- (int)playCloseFigure:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000358b53
- (int)playWidenPath:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000358b3d
- (int)playEndPath:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000358b27
- (int)playAbortPath:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000358b11
- (int)playBeginPath:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000358afb
- (int)playSetRop2:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000358ad6
- (int)playSetMiterLimit:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000358a89
- (int)playSetPolyFillMode:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000358a57
- (int)playStretchDIBits:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003588f3
- (int)playSetDIBitsToDevice:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035878a
- (int)playPlgBlt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035835e
- (int)playMaskBlt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000357fe7
- (int)playAlphaBlend:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000357d6d
- (int)playStretchBlt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000357aea
- (int)playBitBlt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000357884
- (int)playAngleArc:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(_Bool)arg3;	// IMP=0x00000000003577e1
- (int)playPolyPolyLine:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(_Bool)arg3;	// IMP=0x00000000003575dd
- (int)playPolyPolygon:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(_Bool)arg3;	// IMP=0x0000000000357372
- (int)playRectangle:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000357340
- (int)playEllipse:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000357310
- (int)playPie:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003572be
- (int)playChord:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035726c
- (int)playArcTo:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035721a
- (int)playArc:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003571c8
- (int)playSetArcDirection:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003571a3
- (int)playMoveToEx:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000357177
- (int)playLineTo:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035714b
- (int)playRestoreDC:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000357126
- (int)playSaveDC:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000357104
- (int)playSetStretchBltMode:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003570d7
- (int)playRoundRect:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000357088
- (int)playPolyLineTo:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(_Bool)arg3;	// IMP=0x0000000000356fbf
- (int)playPolyLine:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(_Bool)arg3;	// IMP=0x0000000000356e84
- (int)playPolygon:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(_Bool)arg3;	// IMP=0x0000000000356d47
- (int)playPolyBezierTo:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(_Bool)arg3;	// IMP=0x0000000000356bf0
- (int)playPolyBezier:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(_Bool)arg3;	// IMP=0x0000000000356a60
- (int)playPolyDraw:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(_Bool)arg3;	// IMP=0x00000000003567a0
- (int)playSetMapMode:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000356773
- (int)playSetBrushOrg:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000356747
- (int)playSetBkMode:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035671a
- (int)playOffsetClipRegion:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003566f2
- (int)playSetBkColour:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035666e
- (int)playSetTextJustification:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000356644
- (int)playSetTextColour:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003565c0
- (int)playSetTextAlign:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035657e
- (int)playExtTextOutW:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000356566
- (int)playExtTextOutA:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000356551
- (int)playExtTextOut:(unsigned int)arg1 in_pRecord:(const char *)arg2 wideChars:(_Bool)arg3;	// IMP=0x0000000000356231
- (int)playCreateDibPatternBrushPT:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035615f
- (int)playCreateMonoBrush:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000356094
- (int)playCreateBrushIndirect:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000355f96
- (int)playExtCreateFontIndirectW:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000355bd4
- (int)playRealizePalette:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000355bb2
- (int)playResizePalette:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000355b88
- (int)playSetPaletteEntries:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000355a26
- (int)playCreatePalette:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003558f3
- (int)playExtCreatePen:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035577c
- (int)playCreatePen:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003556d1
- (int)playDeleteObject:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003556ac
- (int)playSelectObject:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035566f
- (int)playSelectPalette:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000355632
- (int)playScaleViewportExt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000355600
- (int)playSetViewportOrg:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003555d8
- (int)playSetViewportExt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003555b0
- (int)playModifyWorldTransform:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035549d
- (int)playSetWorldTransform:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035538d
- (int)playScaleWindowExt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035535b
- (int)playSetWindowOrg:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000355333
- (int)playSetWindowExt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035530b
- (int)playUnsupported:(unsigned int)arg1 in_recordName:(const char *)arg2 in_pRecord:(const char *)arg3;	// IMP=0x0000000000355303
- (int)playUnknown:(unsigned int)arg1 in_recordType:(unsigned int)arg2 in_pRecord:(const char *)arg3;	// IMP=0x00000000003552fb
- (int)playHeader:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000355162
- (void)done;	// IMP=0x000000000015710c
- (int)play:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035486d
- (id)getGdi;	// IMP=0x000000000035485f
- (void)setIgnoreEMFPlusRecords:(_Bool)arg1;	// IMP=0x0000000000156516
- (void)setIgnoreEMFRecords:(_Bool)arg1;	// IMP=0x0000000000156521
- (id)initWithGraphicsDevice:(id)arg1;	// IMP=0x0000000000155e84

@end

