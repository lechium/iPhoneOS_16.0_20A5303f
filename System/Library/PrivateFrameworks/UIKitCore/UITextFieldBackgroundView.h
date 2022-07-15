//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface UITextFieldBackgroundView : UIView
{
    _Bool _active;	// 184 = 0xb8
    _Bool _enabled;	// 185 = 0xb9
    float _progress;	// 188 = 0xbc
    UIColor *_fillColor;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000011cee7a
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void)setProgress:(float)arg1;	// IMP=0x00000000011ced9e
- (void)setActive:(_Bool)arg1;	// IMP=0x00000000011ced5c
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000011cecc0
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000011cec24
- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2;	// IMP=0x00000000011ceb7c
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000011ceb6c
- (void)_updateImages;	// IMP=0x00000000011ceb66

@end
