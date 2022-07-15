//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OABDefaultsManager : NSObject
{
}

- (_Bool)hidden;	// IMP=0x000000000002df12
- (_Bool)textPathStrikethrough;	// IMP=0x0000000000301824
- (_Bool)textPathSmallcaps;	// IMP=0x00000000001ffc8c
- (_Bool)textPathUnderline;	// IMP=0x000000000030181a
- (_Bool)textPathItalic;	// IMP=0x00000000001ffc7a
- (_Bool)textPathBold;	// IMP=0x000000000023d3d9
- (id)textPathFontFamily;	// IMP=0x00000000003017d6
- (int)textPathFontSize;	// IMP=0x0000000000165b91
- (int)textPathTextAlignment;	// IMP=0x0000000000154a8e
- (id)textPathUnicodeString;	// IMP=0x0000000000301792
- (_Bool)isTextPath;	// IMP=0x0000000000029240
- (_Bool)isShadowOK;	// IMP=0x0000000000152a2c
- (_Bool)isStrokeOK;	// IMP=0x00000000001026ec
- (_Bool)isFillOK;	// IMP=0x0000000000102d20
- (int)shadowSoftness;	// IMP=0x0000000000152bee
- (int)shadowOffsetY;	// IMP=0x0000000000152d0a
- (int)shadowOffsetX;	// IMP=0x0000000000152c7c
- (int)shadowAlpha;	// IMP=0x0000000000152b5c
- (int)shadowType;	// IMP=0x0000000000152d98
- (_Bool)isShadowed;	// IMP=0x0000000000021468
- (int)strokeEndArrowLength;	// IMP=0x0000000000021206
- (int)strokeEndArrowWidth;	// IMP=0x0000000000021178
- (int)strokeEndArrowType;	// IMP=0x00000000000210ee
- (int)strokeStartArrowLength;	// IMP=0x000000000002101e
- (int)strokeStartArrowWidth;	// IMP=0x0000000000020f90
- (int)strokeStartArrowType;	// IMP=0x0000000000020f06
- (int)strokeJoinStyle;	// IMP=0x0000000000020e78
- (int)strokeCapStyle;	// IMP=0x0000000000021322
- (const void *)strokeCustomDash;	// IMP=0x0000000000020d42
- (int)strokePresetDash;	// IMP=0x0000000000020dcc
- (int)strokeCompoundType;	// IMP=0x00000000000213c4
- (int)strokeMiterLimit;	// IMP=0x00000000001d8f6d
- (int)strokeWidth;	// IMP=0x0000000000021294
- (int)strokeFgAlpha;	// IMP=0x0000000000020b6c
- (struct EshBlip *)strokeFillBlipDataReference;	// IMP=0x000000000030178a
- (id)strokeFillBlipName;	// IMP=0x00000000001d8632
- (unsigned int)strokeFillBlipID;	// IMP=0x0000000000200870
- (int)strokeFillType;	// IMP=0x0000000000020cb8
- (id)fillBlipName;	// IMP=0x0000000000102f32
- (struct EshBlip *)fillBlipDataReference;	// IMP=0x0000000000301782
- (unsigned int)fillBlipID;	// IMP=0x0000000000225c62
- (const void *)fillGradientColors;	// IMP=0x00000000001095ec
- (int)fillFocusBottom;	// IMP=0x0000000000162b64
- (int)fillFocusRight;	// IMP=0x0000000000162b02
- (int)fillFocusTop;	// IMP=0x0000000000162aa0
- (int)fillFocusLeft;	// IMP=0x0000000000162a3e
- (int)fillFocus;	// IMP=0x0000000000155578
- (int)fillAngle;	// IMP=0x0000000000155565
- (int)fillBgAlpha;	// IMP=0x000000000010964e
- (int)fillFgAlpha;	// IMP=0x0000000000020a1a
- (int)fillType;	// IMP=0x0000000000020818
- (struct EshColor)shadowColor;	// IMP=0x00000000001e10c8
- (struct EshColor)strokeBgColor;	// IMP=0x00000000001d8710
- (struct EshColor)strokeFgColor;	// IMP=0x00000000000ac768
- (_Bool)isStroked;	// IMP=0x000000000013cfe4
- (struct EshColor)fillBgColor;	// IMP=0x000000000016a810
- (struct EshColor)fillFgColor;	// IMP=0x0000000000102ea9
- (_Bool)isFilled;	// IMP=0x000000000013cfc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
