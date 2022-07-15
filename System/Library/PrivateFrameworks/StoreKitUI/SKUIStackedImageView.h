//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPUBorderConfiguration, MPUBorderDrawingCache, MPUStackView, NSString, UIView;

__attribute__((visibility("hidden")))
@interface SKUIStackedImageView
{
    MPUBorderConfiguration *_borderConfiguration;	// 8 = 0x8
    long long _stackDepth;	// 16 = 0x10
    MPUStackView *_stackView;	// 24 = 0x18
    MPUBorderDrawingCache *_borderDrawingCache;	// 32 = 0x20
}

+ (struct SKUIStackedImageConfiguration)_configurationForSize:(struct CGSize)arg1;	// IMP=0x0010000000139fa1
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;	// IMP=0x00100000001393f7
- (void).cxx_destruct;	// IMP=0x000000000013a08e
@property(retain, nonatomic) MPUBorderDrawingCache *borderDrawingCache; // @synthesize borderDrawingCache=_borderDrawingCache;
- (void)stackView:(id)arg1 didCreateItem:(id)arg2;	// IMP=0x0000000000139f81
- (void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0000000000139ba9
- (long long)numberOfItemsInStackView:(id)arg1;	// IMP=0x0000000000139b98
- (void)layoutSubviews;	// IMP=0x0000000000139a70
- (void)setCenter:(struct CGPoint)arg1;	// IMP=0x00000000001399f6
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000013995c
@property(nonatomic) struct CGPoint vanishingPoint;
- (void)updateForChangedDistanceFromVanishingPoint;	// IMP=0x0000000000139922
@property(nonatomic) __weak UIView *perspectiveTargetView;
- (void)setImageSize:(struct CGSize)arg1;	// IMP=0x00000000001397ca
- (void)setImage:(id)arg1;	// IMP=0x000000000013962c
- (void)performCompressionAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000013947a
- (void)dealloc;	// IMP=0x00000000001393ac
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000013927a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
