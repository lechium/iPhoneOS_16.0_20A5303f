//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSUOnce, UIImage;

__attribute__((visibility("hidden")))
@interface OITSUImage : NSObject
{
    struct CGImage *mCachedSliceableImage;	// 8 = 0x8
    struct __CFDictionary *mImageSlices;	// 16 = 0x10
    TSUOnce *mImageSlicesOnce;	// 24 = 0x18
    id mCachedSystemImage;	// 32 = 0x20
    TSUOnce *mCachedImageOnce;	// 40 = 0x28
}

+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x0060000000288be3
+ (id)imageWithCGImage:(struct CGImage *)arg1;	// IMP=0x0060000000288bb4
+ (id)imageWithData:(id)arg1;	// IMP=0x0060000000288b85
+ (id)imageWithContentsOfFile:(id)arg1;	// IMP=0x0060000000288b56
+ (id)imageNamed:(id)arg1;	// IMP=0x0060000000288b3d
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0060000000288ad2
+ (id)imageWithUIImage:(id)arg1;	// IMP=0x006000000028a58e
+ (id)noisePatternWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 factor:(double)arg3;	// IMP=0x006000000028ed50
- (void)drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 stretchingCenterWidthBy:(double)arg3;	// IMP=0x000000000028a1bc
- (struct CGImage *)CGImageForContentsScale:(double)arg1;	// IMP=0x000000000028a1aa
- (id)stretchedImageOfSize:(struct CGSize)arg1 leftCapWidth:(double)arg2 rightCapWidth:(double)arg3 topCapHeight:(double)arg4 bottomCapHeight:(double)arg5;	// IMP=0x0000000000289a04
- (id)PNGRepresentation;	// IMP=0x00000000002899ea
- (id)JPEGRepresentationWithCompressionQuality:(double)arg1;	// IMP=0x00000000002899be
- (id)TIFFRepresentation;	// IMP=0x00000000002899a4
- (_Bool)isEmpty;	// IMP=0x00000000002898b3
@property(readonly, nonatomic) long long imageOrientation;
@property(readonly, nonatomic) struct CGImage *CGImage;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;	// IMP=0x000000000028957d
- (void)dealloc;	// IMP=0x0000000000289515
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
- (id)initWithImageSourceRef:(struct CGImageSource *)arg1;	// IMP=0x00000000002891df
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x00000000002890cd
- (id)initWithCGImage:(struct CGImage *)arg1;	// IMP=0x0000000000288fbb
- (id)initWithData:(id)arg1;	// IMP=0x0000000000288ea9
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x0000000000288d97
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000288c85
- (id)init;	// IMP=0x0000000000288c29
@property(readonly, nonatomic) UIImage *UIImage;
- (id)initWithUIImage:(id)arg1;	// IMP=0x000000000028a5c4
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 isFlipped:(_Bool)arg3;	// IMP=0x00000000002e1b3a

@end

