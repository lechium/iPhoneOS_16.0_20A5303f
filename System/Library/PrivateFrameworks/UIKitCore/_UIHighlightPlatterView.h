//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UITargetedPreview, _UIPlatterSoftShadowView, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIHighlightPlatterView : UIView
{
    double _shadowAlpha;	// 184 = 0xb8
    double _backgroundAlpha;	// 192 = 0xc0
    UITargetedPreview *_targetedPreview;	// 200 = 0xc8
    _UIPortalView *_portalView;	// 208 = 0xd0
    UIView *_backgroundView;	// 216 = 0xd8
    _UIPlatterSoftShadowView *_shadowView;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x0000000000f05e33
@property(retain, nonatomic) _UIPlatterSoftShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _UIPortalView *portalView; // @synthesize portalView=_portalView;
@property(retain, nonatomic) UITargetedPreview *targetedPreview; // @synthesize targetedPreview=_targetedPreview;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(nonatomic) double shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
- (_Bool)_isEligibleForFocusOcclusion;	// IMP=0x0000000000f05d73
- (id)initWithTargetedPreview:(id)arg1;	// IMP=0x0000000000f051ad

@end
