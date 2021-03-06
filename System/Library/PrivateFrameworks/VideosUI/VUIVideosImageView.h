//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface VUIVideosImageView : UIImageView
{
    _Bool _selected;	// 8 = 0x8
    UIImage *_flatImage;	// 16 = 0x10
    UIImage *_highlightOrSelectedImage;	// 24 = 0x18
}

+ (id)imageWithImage:(id)arg1 existingImageView:(id)arg2;	// IMP=0x006000000021f0d6
- (void).cxx_destruct;	// IMP=0x000000000021f309
@property(retain, nonatomic) UIImage *highlightOrSelectedImage; // @synthesize highlightOrSelectedImage=_highlightOrSelectedImage;
- (void)_updateImage;	// IMP=0x000000000021f262
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000021f246
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000021f205
- (void)setImage:(id)arg1;	// IMP=0x000000000021f181

@end

