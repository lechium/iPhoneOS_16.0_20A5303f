//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class PDFPageLayerEffectPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageLayerEffect : CALayer
{
    PDFPageLayerEffectPrivate *_private;	// 8 = 0x8
}

+ (id)createFlashEffectForPDFLinkAnnotation:(id)arg1 withLayer:(id)arg2 forType:(long long)arg3;	// IMP=0x006000000008d561
+ (id)createPDFNoteLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;	// IMP=0x006000000008d47a
+ (id)createPDFMarkupLayerEffectsForAnnotation:(id)arg1 withLayer:(id)arg2;	// IMP=0x006000000008d2ad
+ (id)createPDFAnnotationLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;	// IMP=0x006000000008cf19
+ (id)createPDFCoachmarkLayerEffectsWithFrame:(struct CGRect)arg1 withLayer:(id)arg2;	// IMP=0x006000000008cb05
+ (id)createPDFSelectionLayerEffectsForSelections:(id)arg1 withLayer:(id)arg2;	// IMP=0x006000000008c986
- (void).cxx_destruct;	// IMP=0x000000000008d9f7
- (id)pdfResult;	// IMP=0x000000000008c97e
- (void)updateColor:(unsigned long long)arg1;	// IMP=0x000000000008c978
- (void)addSelection:(id)arg1;	// IMP=0x000000000008c972
- (void)setSelections:(id)arg1;	// IMP=0x000000000008c96c
- (id)annotation;	// IMP=0x000000000008c964
- (_Bool)shouldRotateContent;	// IMP=0x000000000008c950
- (void)update;	// IMP=0x000000000008c94a
- (void)setPageFrame:(struct CGRect)arg1;	// IMP=0x000000000008c929
- (struct CGRect)pageFrame;	// IMP=0x000000000008c906
- (id)UUID;	// IMP=0x000000000008c8ed
- (id)initWithPDFPageLayer:(id)arg1;	// IMP=0x000000000008c686

@end
