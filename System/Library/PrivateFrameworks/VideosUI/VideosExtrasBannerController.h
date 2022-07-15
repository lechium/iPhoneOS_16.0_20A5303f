//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKDocumentBannerElement, NSArray, NSLayoutConstraint, UIImageView, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface VideosExtrasBannerController : NSObject
{
    IKDocumentBannerElement *_bannerElement;	// 8 = 0x8
    unsigned long long _vignetteType;	// 16 = 0x10
    UIView *_installedView;	// 24 = 0x18
    UIScrollView *_trackingScrollView;	// 32 = 0x20
    NSArray *_installedConstraints;	// 40 = 0x28
    UIImageView *_bannerImageView;	// 48 = 0x30
    UIImageView *_vignetteImageView;	// 56 = 0x38
    NSLayoutConstraint *_bannerImageViewHeightConstraint;	// 64 = 0x40
    UIView *_maskView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001a0705
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NSLayoutConstraint *bannerImageViewHeightConstraint; // @synthesize bannerImageViewHeightConstraint=_bannerImageViewHeightConstraint;
@property(retain, nonatomic) UIImageView *vignetteImageView; // @synthesize vignetteImageView=_vignetteImageView;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(retain, nonatomic) NSArray *installedConstraints; // @synthesize installedConstraints=_installedConstraints;
@property(nonatomic) __weak UIScrollView *trackingScrollView; // @synthesize trackingScrollView=_trackingScrollView;
@property(nonatomic) __weak UIView *installedView; // @synthesize installedView=_installedView;
@property(nonatomic) unsigned long long vignetteType; // @synthesize vignetteType=_vignetteType;
@property(readonly, nonatomic) IKDocumentBannerElement *bannerElement; // @synthesize bannerElement=_bannerElement;
- (void)_updateVignetteImage;	// IMP=0x00000000001a05c4
- (void)installBannerOnView:(id)arg1 anchoredToScrollView:(id)arg2;	// IMP=0x00000000001a054d
- (void)_doAllSetup;	// IMP=0x000000000019ff78
- (void)_configureBanner;	// IMP=0x000000000019fcea
- (id)initWithBannerElement:(id)arg1;	// IMP=0x000000000019fc10

@end
