//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (PhotosUICore)
+ (id)px_roundedCornerMaskImage:(CDStruct_c2259bfa)arg1 size:(struct CGSize)arg2;	// IMP=0x0020000000719954
+ (id)_px_createOverlayImageWithGlyphStyle:(unsigned long long)arg1 backgroundWhite:(double)arg2 backgroundAlpha:(double)arg3 glyphAlpha:(double)arg4;	// IMP=0x00200000007197e0
+ (void)px_preloadPlayOverlayGlyphsIfNeeded;	// IMP=0x00200000007197bc
+ (id)px_playOverlayImage:(unsigned long long)arg1;	// IMP=0x00200000007194e0
+ (id)px_imageFromSolidColor:(id)arg1;	// IMP=0x002000000071942b
+ (id)px_systemImageNamed:(id)arg1;	// IMP=0x0020000000719412
+ (id)px_imageNamed:(id)arg1;	// IMP=0x0020000000719384
- (id)px_predrawnImage;	// IMP=0x0010000000718c08
- (id)px_backdropImageWithStyle:(long long)arg1;	// IMP=0x0010000000718b00
- (id)px_debugImageWithStrokeRect:(struct CGRect)arg1 color:(id)arg2 text:(id)arg3;	// IMP=0x0010000000718880
- (id)px_debugImageWithStrokeRect:(struct CGRect)arg1 color:(id)arg2;	// IMP=0x001000000071886c
- (id)px_ASTCCompressedImageWithBlockSize:(unsigned int)arg1;	// IMP=0x00100000007187bf
- (id)px_extractPlayOverlayBackgroundImageFromLocation:(struct CGPoint)arg1 inViewportWithSize:(struct CGSize)arg2 contentMode:(long long)arg3 contentsRect:(struct CGRect)arg4 asynchronously:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x001000000071856c
- (void)px_drawInRect:(struct CGRect)arg1 withContentMode:(long long)arg2;	// IMP=0x0010000000718315
- (id)px_imageByCroppingRect:(struct CGRect)arg1 pixelTargetSize:(struct CGSize)arg2 cornerRadius:(double)arg3;	// IMP=0x001000000071805c
- (id)px_imageByCroppingRect:(struct CGRect)arg1;	// IMP=0x0010000000717fb7
- (id)px_imageByCroppingEdgeInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0010000000717f32
- (id)px_imageWithDebugRect:(struct CGRect)arg1;	// IMP=0x0010000000717e68
- (id)px_tintedCircularImageWithColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0010000000717cbb
- (id)px_imageByApplyingAlpha:(double)arg1;	// IMP=0x0010000000717c03
- (id)px_tintedImageWithColor:(id)arg1;	// IMP=0x0010000000717b07
- (_Bool)px_isLargerThan:(id)arg1;	// IMP=0x0010000000717a7b
@property(readonly, nonatomic) struct CGSize px_pixelSize;
@end

