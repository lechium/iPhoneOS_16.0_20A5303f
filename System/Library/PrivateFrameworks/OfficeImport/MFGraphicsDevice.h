//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFDeviceContext, MFObjectTable, NSDictionary, NSMutableArray;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFGraphicsDevice : NSObject
{
    MFDeviceContext *m_currentDC;	// 8 = 0x8
    NSMutableArray *m_DCStack;	// 16 = 0x10
    int m_gStateStackHeight;	// 24 = 0x18
    MFDeviceContext *m_firstClipDC;	// 32 = 0x20
    NSObject<MFDeviceDriver> *m_deviceDriver;	// 40 = 0x28
    MFObjectTable *m_objectTable;	// 48 = 0x30
    MFObjectTable *m_stockObjects;	// 56 = 0x38
    NSDictionary *m_colorMap;	// 64 = 0x40
    NSDictionary *m_fillMap;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000003674a7
- (void)setMaximumObjectTableSize:(unsigned int)arg1;	// IMP=0x0000000000367491
- (int)plgBlt:(struct CGPoint *)arg1 in_sourceImage:(id)arg2 in_xSrc:(int)arg3 in_ySrc:(int)arg4 in_widthSrc:(int)arg5 in_heightSrc:(int)arg6 in_maskImage:(id)arg7 in_xMask:(int)arg8 in_yMask:(int)arg9 in_xform:(struct CGAffineTransform *)arg10 in_colour:(unsigned int)arg11;	// IMP=0x00000000003673a4
- (int)maskBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_maskImage:(id)arg8 in_xMask:(int)arg9 in_yMask:(int)arg10 in_rop:(unsigned int)arg11 in_xform:(struct CGAffineTransform *)arg12 in_colour:(unsigned int)arg13;	// IMP=0x00000000003672a6
- (int)alphaBlend:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_widthSrc:(int)arg8 in_heightSrc:(int)arg9 in_sourceConstantOpacity:(unsigned char)arg10 in_useSourceAlphaChannel:(_Bool)arg11 in_xform:(struct CGAffineTransform *)arg12 in_colour:(unsigned int)arg13;	// IMP=0x00000000003671c3
- (int)stretchBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_widthSrc:(int)arg8 in_heightSrc:(int)arg9 in_rop:(unsigned int)arg10 in_xform:(struct CGAffineTransform *)arg11 in_colour:(unsigned int)arg12 usePaletteForBilevel:(_Bool)arg13;	// IMP=0x000000000036715e
- (int)stretchBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_widthSrc:(int)arg8 in_heightSrc:(int)arg9 in_rop:(unsigned int)arg10 in_xform:(struct CGAffineTransform *)arg11 in_colour:(unsigned int)arg12;	// IMP=0x0000000000367088
- (int)bitBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_rop:(unsigned int)arg8 in_xform:(struct CGAffineTransform *)arg9 in_colour:(unsigned int)arg10;	// IMP=0x0000000000366fc4
- (int)patBlt:(int)arg1 in_y:(int)arg2 in_width:(int)arg3 in_height:(int)arg4 in_rop:(unsigned int)arg5;	// IMP=0x0000000000366f93
- (id)createBitmap:(unsigned int)arg1 in_height:(unsigned int)arg2 in_planes:(unsigned int)arg3 in_bitsPerPixel:(unsigned int)arg4 in_bitmap:(const char *)arg5 in_bitmapSize:(unsigned int)arg6;	// IMP=0x0000000000366f5b
- (id)createDIBitmap:(const char *)arg1 in_headerSize:(unsigned int)arg2 in_bitmap:(const char *)arg3 in_bitmapSize:(unsigned int)arg4 in_usage:(int)arg5;	// IMP=0x0000000000366f29
- (id)createDIBitmap:(const char *)arg1 in_dibSize:(unsigned int)arg2 in_usage:(int)arg3;	// IMP=0x0000000000366f06
- (int)frameRegion:(unsigned int)arg1 in_brushID:(unsigned int)arg2 in_width:(int)arg3 in_height:(int)arg4;	// IMP=0x0000000000366e4b
- (int)frameRegionWithRects:(id)arg1 in_brushID:(unsigned int)arg2 in_width:(int)arg3 in_height:(int)arg4;	// IMP=0x0000000000366d94
- (int)fillRgn:(unsigned int)arg1 in_brushID:(unsigned int)arg2;	// IMP=0x0000000000366caa
- (int)fillRgnWithRects:(id)arg1 in_brushID:(unsigned int)arg2;	// IMP=0x0000000000366bf3
- (int)invertRgn:(unsigned int)arg1;	// IMP=0x0000000000366b7e
- (int)invertRgnWithRects:(id)arg1;	// IMP=0x0000000000366b0e
- (int)paintRgn:(unsigned int)arg1;	// IMP=0x0000000000366a64
- (int)paintRgnWithRects:(id)arg1;	// IMP=0x00000000003669b3
- (int)setMetaRgn;	// IMP=0x00000000001dd74d
- (int)intersectClipRect:(struct CGRect)arg1;	// IMP=0x00000000000f7a89
- (int)excludeClipRect:(struct CGRect)arg1;	// IMP=0x0000000000165da3
- (int)setClipRegion:(unsigned int)arg1;	// IMP=0x000000000036692e
- (int)selectClipRegionWithRects:(id)arg1 in_mode:(int)arg2;	// IMP=0x0000000000366856
- (int)selectClipPath:(int)arg1;	// IMP=0x00000000001dd832
- (int)strokeAndFillPath:(_Bool)arg1 in_fill:(_Bool)arg2;	// IMP=0x00000000003667b9
- (int)endPath;	// IMP=0x000000000016acf4
- (int)widenPath;	// IMP=0x000000000036674d
- (int)beginPath;	// IMP=0x000000000016a9c4
- (int)abortPath;	// IMP=0x00000000003666f1
- (int)setRop2:(int)arg1;	// IMP=0x00000000001607b5
- (int)setMapMode:(int)arg1;	// IMP=0x00000000000f60aa
- (int)modifyWorldTransform:(const struct CGAffineTransform *)arg1 in_command:(int)arg2;	// IMP=0x0000000000366681
- (int)setWorldTransform:(const struct CGAffineTransform *)arg1;	// IMP=0x00000000001dd76b
- (int)scaleWindowExt:(int)arg1 in_xDenom:(int)arg2 in_yNum:(int)arg3 in_yDenom:(int)arg4;	// IMP=0x00000000003665fa
- (int)scaleViewportExt:(int)arg1 in_xDenom:(int)arg2 in_yNum:(int)arg3 in_yDenom:(int)arg4;	// IMP=0x0000000000366573
- (int)setViewportOrg:(int)arg1 in_y:(int)arg2;	// IMP=0x0000000000366503
- (int)offsetViewportOrg:(int)arg1 in_y:(int)arg2;	// IMP=0x0000000000366493
- (int)offsetWindowOrg:(int)arg1 in_y:(int)arg2;	// IMP=0x0000000000366423
- (int)setViewportExt:(int)arg1 in_y:(int)arg2;	// IMP=0x00000000003663b3
- (int)setWindowOrg:(int)arg1 in_y:(int)arg2;	// IMP=0x0000000000366343
- (int)setWindowExt:(int)arg1 in_y:(int)arg2;	// IMP=0x00000000003662d3
- (void)createStockObjects;	// IMP=0x000000000015659a
- (int)createPatternBrush:(id)arg1 index:(unsigned int)arg2 usePaletteForBilevel:(_Bool)arg3;	// IMP=0x0000000000366255
- (int)createPalette:(id)arg1 in_index:(unsigned int)arg2;	// IMP=0x00000000003661d4
- (int)resizePalette:(unsigned int)arg1 in_index:(unsigned int)arg2;	// IMP=0x0000000000366141
- (int)setPaletteEntries:(unsigned int)arg1 in_colours:(id)arg2 in_index:(unsigned int)arg3;	// IMP=0x000000000036607d
- (id)createColorWithRGBBytes:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3 flags:(unsigned char)arg4;	// IMP=0x0000000000365fd6
- (int)createPen:(int)arg1 width:(int)arg2 in_colour:(id)arg3 in_userStyleArray:(double *)arg4 index:(unsigned int)arg5;	// IMP=0x0000000000365f12
- (int)createFontIndirectW:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(_Bool)arg6 lfUnderline:(_Bool)arg7 lfStrikeOut:(_Bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15 elfFullName:(id)arg16 elfStyle:(id)arg17 elfVersion:(unsigned int)arg18 elfStyleSize:(unsigned int)arg19 elfMatch:(unsigned int)arg20 elfVendorId:(unsigned int)arg21 elfCulture:(unsigned int)arg22 index:(unsigned int)arg23;	// IMP=0x0000000000365dd5
- (int)createFontIndirect:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(_Bool)arg6 lfUnderline:(_Bool)arg7 lfStrikeOut:(_Bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15;	// IMP=0x0000000000365ceb
- (int)createBrush:(int)arg1 in_colour:(id)arg2 hatchstyle:(int)arg3 index:(unsigned int)arg4;	// IMP=0x0000000000365b6a
- (int)createRegion:(id)arg1;	// IMP=0x00000000001e170f
- (int)deleteObject:(int)arg1;	// IMP=0x00000000000f6eae
- (int)getStockObject:(unsigned int)arg1;	// IMP=0x0000000000156536
- (int)selectObject:(int)arg1;	// IMP=0x00000000000f649b
- (int)setPolyFillMode:(int)arg1;	// IMP=0x00000000000f7d2c
- (int)realizePalette;	// IMP=0x0000000000165d9b
- (int)roundRect:(int)arg1 top:(int)arg2 right:(int)arg3 bottom:(int)arg4 rx:(double)arg5 ry:(double)arg6;	// IMP=0x0000000000365b38
- (int)closeCurrentPath:(_Bool)arg1;	// IMP=0x000000000016abd6
- (int)bezier:(int)arg1 y:(int)arg2 x2:(int)arg3 y2:(int)arg4 x3:(int)arg5 y3:(int)arg6 x4:(int)arg7 y4:(int)arg8;	// IMP=0x0000000000365aed
- (int)bezierTo:(int)arg1 y:(int)arg2 x2:(int)arg3 y2:(int)arg4 x3:(int)arg5 y3:(int)arg6;	// IMP=0x0000000000365ab2
- (int)chord:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;	// IMP=0x0000000000365a67
- (int)arcTo:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;	// IMP=0x0000000000365a1c
- (int)angleArc:(int)arg1 y:(int)arg2 radius:(unsigned int)arg3 startAngle:(double)arg4 sweepAngle:(double)arg5;	// IMP=0x00000000003659f7
- (int)pie:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;	// IMP=0x00000000003659ac
- (int)arc:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;	// IMP=0x0000000000365961
- (int)polyPolyline:(struct CGPoint *)arg1 in_polyCounts:(int *)arg2 in_count:(int)arg3;	// IMP=0x000000000036593e
- (int)polyline:(struct CGPoint *)arg1 in_count:(int)arg2;	// IMP=0x000000000036591e
- (int)setArcDirection:(int)arg1;	// IMP=0x0000000000365905
- (int)polyPolygon:(struct CGPoint *)arg1 in_polyCounts:(int *)arg2 in_count:(int)arg3;	// IMP=0x00000000003658e2
- (int)polygon:(struct CGPoint *)arg1 in_count:(int)arg2;	// IMP=0x00000000003658c2
- (int)lineTo:(double)arg1 y:(double)arg2;	// IMP=0x00000000003658a8
- (int)moveTo:(double)arg1 y:(double)arg2;	// IMP=0x000000000036588f
- (int)offsetClipRegionByX:(int)arg1 y:(int)arg2;	// IMP=0x000000000036565b
- (int)selectClipRegion:(id)arg1 combineMode:(int)arg2;	// IMP=0x00000000003655e5
- (int)removeClip;	// IMP=0x00000000003655cc
- (int)selectClippingPath:(id)arg1 combineMode:(int)arg2;	// IMP=0x00000000003653d1
- (id)clippingPathByCombiningClippingPath:(id)arg1 withClippingPath:(id)arg2 combineMode:(int)arg3;	// IMP=0x0000000000365219
- (id)clippingPathByCombiningEmptyClippingPathWithClippingPath:(id)arg1 combineMode:(int)arg2;	// IMP=0x000000000036519b
- (id)clippingPathByCombiningImplicitClippingPathWithClippingPath:(id)arg1 combineMode:(int)arg2;	// IMP=0x00000000003650af
- (id)currentCummulatedClippingPath;	// IMP=0x0000000000364d72
- (id)normalizedClippingPathWithClippingPath:(id)arg1;	// IMP=0x0000000000364cbb
- (int)restoreDC:(int)arg1;	// IMP=0x00000000000f7af5
- (int)restoreDC;	// IMP=0x0000000000364b05
- (int)saveDC;	// IMP=0x00000000000f6fb5
- (void)setClippingPath:(id)arg1;	// IMP=0x000000000036498f
- (void)addClippingPathToCurrentDCAndCurrentContext:(id)arg1;	// IMP=0x00000000003648f2
- (void)applyDCAtIndexToCurrentContext:(unsigned long long)arg1;	// IMP=0x00000000003648b5
- (void)applyClippingOfDCAtIndexToCurrentContext:(unsigned long long)arg1;	// IMP=0x000000000036470b
- (void)addClippingPathToCurrentContext:(id)arg1 dc:(id)arg2;	// IMP=0x0000000000364575
- (id)clipEverythingClippingPath;	// IMP=0x00000000003644be
- (id)implicitClippingPath;	// IMP=0x000000000036445e
- (void)applyNonClippingOfDCAtIndexToCurrentContext:(unsigned long long)arg1;	// IMP=0x00000000003643cd
- (unsigned long long)clippingStartDCIndex;	// IMP=0x00000000003641d7
- (unsigned long long)firstClipDCIndex;	// IMP=0x00000000003641ba
- (unsigned long long)currentDCIndex;	// IMP=0x00000000003641a0
- (void)restoreGState:(id)arg1;	// IMP=0x0000000000364180
- (void)saveGState:(id)arg1;	// IMP=0x0000000000364160
- (int)setViewBox:(double)arg1 top:(double)arg2 width:(double)arg3 height:(double)arg4;	// IMP=0x000000000036414a
- (int)ellipse:(int)arg1 y1:(int)arg2 x2:(int)arg3 y2:(int)arg4;	// IMP=0x0000000000364118
- (int)fillRectangle:(int)arg1 y1:(int)arg2 x2:(int)arg3 y2:(int)arg4;	// IMP=0x00000000003640e6
- (int)rectangle:(int)arg1 y1:(int)arg2 x2:(int)arg3 y2:(int)arg4;	// IMP=0x00000000003640b4
- (int)extTextOutEncoded:(int)arg1 y:(int)arg2 in_data:(id)arg3 options:(int)arg4 left:(int)arg5 top:(int)arg6 right:(int)arg7 bottom:(int)arg8 spacingValues:(int *)arg9 numValues:(int)arg10;	// IMP=0x0000000000363dae
- (int)extTextOut:(int)arg1 y:(int)arg2 in_text:(id)arg3 options:(int)arg4 left:(int)arg5 top:(int)arg6 right:(int)arg7 bottom:(int)arg8 spacingValues:(int *)arg9 numValues:(int)arg10;	// IMP=0x0000000000363cca
- (int)textOutEncoded:(int)arg1 y:(int)arg2 in_data:(id)arg3;	// IMP=0x0000000000363bbf
- (int)textOut:(int)arg1 y:(int)arg2 in_text:(id)arg3;	// IMP=0x0000000000363b10
- (int)setTextAlign:(_Bool)arg1 textHorizontalAlign:(int)arg2 textVerticalAlign:(int)arg3 textDirection:(int)arg4;	// IMP=0x0000000000363a9d
- (int)setTextCharExtra:(int)arg1;	// IMP=0x00000000001e266c
- (int)setTextJustification:(int)arg1 in_breakCount:(int)arg2;	// IMP=0x0000000000363a95
- (int)setTextColour:(id)arg1;	// IMP=0x00000000000f65bd
- (int)setStretchBltMode:(int)arg1;	// IMP=0x0000000000157396
- (int)setBrushOrg:(double)arg1 y:(double)arg2;	// IMP=0x0000000000363a7c
- (int)setBkMode:(int)arg1;	// IMP=0x00000000000f659b
- (int)setBkColour:(id)arg1;	// IMP=0x000000000016074c
- (int)setMiterLimit:(double)arg1;	// IMP=0x00000000001d96e0
- (int)description:(id)arg1;	// IMP=0x000000000016a9bc
- (int)comment:(id)arg1;	// IMP=0x0000000000363a74
- (void)done;	// IMP=0x00000000000f7d88
- (id)recolor:(unsigned char)arg1 in_green:(unsigned char)arg2 in_blue:(unsigned char)arg3 fill:(_Bool)arg4;	// IMP=0x00000000003639f5
- (id)recolor:(id)arg1 fill:(_Bool)arg2;	// IMP=0x00000000000f6623
- (void)setColorMap:(id)arg1 fillMap:(id)arg2;	// IMP=0x00000000000f5cef
- (id)getCurrentFont;	// IMP=0x00000000001d1a2a
- (struct CGRect)getCanvas;	// IMP=0x0000000000155f7d
- (void)dealloc;	// IMP=0x00000000000f7dd9
- (id)initWithCanvas:(struct CGRect)arg1;	// IMP=0x00000000000f4ec1

@end
