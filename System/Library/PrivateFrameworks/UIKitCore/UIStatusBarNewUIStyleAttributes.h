//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIStatusBarNewUIStyleAttributes
{
    UIColor *_backgroundColor;	// 8 = 0x8
    UIColor *_foregroundColor;	// 16 = 0x10
    _Bool _hasBusyBackground;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000f8d3ae
- (id)newForegroundStyleWithHeight:(double)arg1;	// IMP=0x0000000000f8d314
- (Class)foregroundStyleClass;	// IMP=0x0000000000f8d303
- (id)backgroundColorWithTintColor:(id)arg1;	// IMP=0x0000000000f8d2ee
- (id)foregroundColor;	// IMP=0x0000000000f8d2d9
- (_Bool)shouldUseVisualAltitude;	// IMP=0x0000000000f8d2d1
- (_Bool)isTransparent;	// IMP=0x0000000000f8d2bc
- (_Bool)isTranslucent;	// IMP=0x0000000000f8d286
- (long long)legibilityStyle;	// IMP=0x0000000000f8d245
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f8d1d6
- (id)initWithRequest:(id)arg1;	// IMP=0x0000000000f8d1bf
- (id)initWithRequest:(id)arg1 backgroundColor:(id)arg2 foregroundColor:(id)arg3;	// IMP=0x0000000000f8d1a3
- (id)initWithRequest:(id)arg1 backgroundColor:(id)arg2 foregroundColor:(id)arg3 hasBusyBackground:(_Bool)arg4;	// IMP=0x0000000000f8d055

@end

