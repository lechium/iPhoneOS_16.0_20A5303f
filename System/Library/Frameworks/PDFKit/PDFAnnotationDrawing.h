//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PDFAnnotationDrawing : NSObject
{
}

+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withUnknownAnnotation:(id)arg3;	// IMP=0x008000000006f5bc
+ (void)strokeOval:(struct CGRect)arg1 color:(id)arg2 context:(struct CGContext *)arg3;	// IMP=0x008000000006f4ce
+ (void)fillOval:(struct CGRect)arg1 color:(id)arg2 context:(struct CGContext *)arg3;	// IMP=0x008000000006f3e0
+ (void)strokeRect:(struct CGRect)arg1 color:(id)arg2 context:(struct CGContext *)arg3;	// IMP=0x008000000006f2f2
+ (void)fillRect:(struct CGRect)arg1 color:(id)arg2 context:(struct CGContext *)arg3;	// IMP=0x008000000006f204
+ (_Bool)renderString:(id)arg1 forRect:(struct CGRect)arg2 font:(id)arg3 color:(id)arg4 alignment:(long long)arg5 rotation:(int)arg6 breaks:(_Bool)arg7 context:(struct CGContext *)arg8 withAnnotation:(id)arg9;	// IMP=0x008000000006ea9a
+ (id)stringByTrimmingTrailingCharactersInSet:(id)arg1 forString:(id)arg2;	// IMP=0x008000000006e9eb
+ (id)createLigtherColor:(struct CGColor *)arg1 withIntensity:(double)arg2;	// IMP=0x008000000006e939
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withTextWidgetAnnotation:(id)arg3;	// IMP=0x008000000006e4a2
+ (void)drawDisclosureBox:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x008000000006e2c0
+ (void)drawComboBox:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withAnnotation:(id)arg3 withStringValue:(id)arg4 withFont:(id)arg5 withFontColor:(id)arg6;	// IMP=0x008000000006e16c
+ (void)drawListBox:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withAnnotation:(id)arg3 withOptions:(id)arg4 withStringValue:(id)arg5 withFont:(id)arg6 withFontColor:(id)arg7;	// IMP=0x008000000006dd3d
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withChoiceWidgetAnnotation:(id)arg3;	// IMP=0x008000000006d8fb
+ (void)drawCheckBox:(id)arg1 inContext:(struct CGContext *)arg2 withState:(long long)arg3 withBackgroundColor:(id)arg4 withBorderColor:(id)arg5 withFontColor:(id)arg6 isHighlighted:(_Bool)arg7;	// IMP=0x008000000006d59a
+ (void)drawRadioButton:(id)arg1 inContext:(struct CGContext *)arg2 withState:(long long)arg3 withBackgroundColor:(id)arg4 withBorderColor:(id)arg5 withFontColor:(id)arg6 isHighlighted:(_Bool)arg7;	// IMP=0x008000000006d223
+ (void)drawPushButton:(id)arg1 inContext:(struct CGContext *)arg2 withBackgroundColor:(id)arg3 withCaption:(id)arg4 withFont:(id)arg5 withFontColor:(id)arg6 isHighlighted:(_Bool)arg7;	// IMP=0x008000000006cf17
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withButtonWidgetAnnotation:(id)arg3;	// IMP=0x008000000006c919
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withRedactAnnotation:(id)arg3;	// IMP=0x008000000006b2f4
+ (void)drawInsertIconInRect:(struct CGRect)arg1 withColor:(id)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x008000000006b17a
+ (void)drawParagraphIconInRect:(struct CGRect)arg1 withColor:(id)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x008000000006ae24
+ (void)drawNewParagraphIconInRect:(struct CGRect)arg1 withColor:(id)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x008000000006aaa0
+ (void)drawHelpIconInRect:(struct CGRect)arg1 withColor:(id)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x008000000006a646
+ (void)drawNoteIconInRect:(struct CGRect)arg1 withColor:(id)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x008000000006a38f
+ (void)drawKeyIconInRect:(struct CGRect)arg1 withColor:(id)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x0080000000069f1e
+ (void)drawCommentIconInRect:(struct CGRect)arg1 withColor:(id)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x0080000000069b41
+ (void)setupDrawColor:(id)arg1 withComponents:(double *)arg2 forContext:(struct CGContext *)arg3;	// IMP=0x0080000000069a76
+ (void)drawCommonCommentNoteIconToContext:(struct CGContext *)arg1 colorComponents:(double *)arg2 rect:(struct CGRect)arg3;	// IMP=0x0080000000069942
+ (void)drawNoteAsSelected:(struct CGContext *)arg1 rect:(struct CGRect)arg2;	// IMP=0x0080000000069814
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withTextAnnotation:(id)arg3;	// IMP=0x00800000000692f2
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withStampAnnotation:(id)arg3;	// IMP=0x0080000000068fbc
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withSquareAnnotation:(id)arg3;	// IMP=0x0080000000068c36
+ (struct CGRect)adjustedRectForBox:(long long)arg1 withAnnotation:(id)arg2;	// IMP=0x0080000000068907
+ (void)drawInContext:(struct CGContext *)arg1 withBounds:(struct CGRect)arg2 withPopupAnnotation:(id)arg3;	// IMP=0x0080000000068901
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withPopupAnnotation:(id)arg3;	// IMP=0x0080000000068821
+ (void)drawNoteInContext:(struct CGContext *)arg1 withParentAnnotation:(id)arg2;	// IMP=0x0080000000068637
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withMarkupAnnotation:(id)arg3;	// IMP=0x0080000000067cdb
+ (void)createPillBezier:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x0080000000067b16
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withLinkAnnotation:(id)arg3;	// IMP=0x008000000006765c
+ (void)drawArrowFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 open:(_Bool)arg3 inContext:(struct CGContext *)arg4 withBorder:(id)arg5;	// IMP=0x0080000000067494
+ (void)drawBulletAtPoint:(struct CGPoint)arg1 shape:(int)arg2 inContext:(struct CGContext *)arg3 withBorder:(id)arg4;	// IMP=0x00800000000672e4
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withLineAnnotation:(id)arg3;	// IMP=0x0080000000066cb8
+ (struct CGPath **)createCGPathArrayWithBezierPaths:(id)arg1;	// IMP=0x0080000000066bda
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withInkAnnotation:(id)arg3;	// IMP=0x0080000000066815
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withFreeTextAnnotation:(id)arg3;	// IMP=0x00800000000664d9
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withCircleAnnotation:(id)arg3;	// IMP=0x0080000000066139
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withAKAnnotation:(id)arg3 forAnnotation:(id)arg4;	// IMP=0x0080000000065f85
+ (void)drawAppearance:(int)arg1 ofAnnotation:(id)arg2 withBox:(long long)arg3 inContext:(struct CGContext *)arg4 scaleProportional:(_Bool)arg5;	// IMP=0x0080000000065ea8
+ (void)drawAppearance:(int)arg1 ofAnnotation:(id)arg2 withBox:(long long)arg3 inContext:(struct CGContext *)arg4;	// IMP=0x0080000000065e86
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withAnnotation:(id)arg3;	// IMP=0x00800000000658f0

@end

