//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVButton.h"

@class CALayer;

__attribute__((visibility("hidden")))
@interface _TVRoundButton : TVButton
{
    CALayer *_imageMask;	// 8 = 0x8
    CDUnknownBlockType _updateFloatingViewFocusStateBlock;	// 16 = 0x10
    _Bool _shouldPunchThroughImage;	// 24 = 0x18
}

+ (id)_buttonContentWithFrame:(struct CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(_Bool)arg3;	// IMP=0x00600000000b4515
- (void).cxx_destruct;	// IMP=0x00000000000b5391
@property(nonatomic) _Bool shouldPunchThroughImage; // @synthesize shouldPunchThroughImage=_shouldPunchThroughImage;
- (void)_updateFocusStateWithCoordinator:(id)arg1;	// IMP=0x00000000000b52d8
- (void)_updateFloaingViewFocusState:(_Bool)arg1 coordinator:(id)arg2;	// IMP=0x00000000000b509d
- (void)_updateFloatingViewFocusStateIfNeeded;	// IMP=0x00000000000b4fbb
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000000b4f69
- (void)didMoveToWindow;	// IMP=0x00000000000b4f28
- (void)_updateBackgroundColorForState:(unsigned long long)arg1;	// IMP=0x00000000000b4d99
- (void)_updateImageMask;	// IMP=0x00000000000b4af5
- (void)_imageViewDidLoadImage:(id)arg1;	// IMP=0x00000000000b4a79
- (void)setImageView:(id)arg1;	// IMP=0x00000000000b49df
- (void)setCornerRadius:(double)arg1;	// IMP=0x00000000000b494f
- (void)setTextContentView:(id)arg1;	// IMP=0x00000000000b4949
- (void)setAccessoryView:(id)arg1;	// IMP=0x00000000000b4943
- (void)layoutSubviews;	// IMP=0x00000000000b472d
- (void)dealloc;	// IMP=0x00000000000b46b8
- (id)initWithFrame:(struct CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(_Bool)arg3;	// IMP=0x00000000000b4569

@end

