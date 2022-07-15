//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

@class CUIRenditionMetrics, CUIRenditionSliceInformation;

__attribute__((visibility("hidden")))
@interface CUIMutableThemeRendition : CUIThemeRendition
{
    struct _renditionkeytoken *_renditionKey;	// 216 = 0xd8
    struct CGImage *_image;	// 224 = 0xe0
    CUIRenditionSliceInformation *_sliceInformation;	// 232 = 0xe8
    CUIRenditionMetrics *_renditionMetrics;	// 240 = 0xf0
}

- (id)metrics;	// IMP=0x0000000000084ebe
- (id)sliceInformation;	// IMP=0x0000000000084ead
- (struct CGImage *)unslicedImage;	// IMP=0x0000000000084e9c
- (const struct _renditionkeytoken *)key;	// IMP=0x0000000000084e8b
- (void)setName:(id)arg1;	// IMP=0x0000000000084e50
- (void)dealloc;	// IMP=0x0000000000084dd8
- (id)initWithCGImage:(struct CGImage *)arg1 withDescription:(id)arg2 forKey:(const struct _renditionkeytoken *)arg3;	// IMP=0x000000000008473c

@end
