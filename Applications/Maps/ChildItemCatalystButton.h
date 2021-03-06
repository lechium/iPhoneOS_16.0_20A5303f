//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKCatalystButton.h>

@class GEOMapItemChildItem, _MKPlaceActionButtonController;
@protocol ChildItemButtonDelegate;

@interface ChildItemCatalystButton : MKCatalystButton
{
    _MKPlaceActionButtonController *_buttonController;	// 8 = 0x8
    id <ChildItemButtonDelegate> _delegate;	// 16 = 0x10
    GEOMapItemChildItem *_childItem;	// 24 = 0x18
}

+ (struct CGColor *)extraShadowLayerBackgroundColorWithDarkMode:(_Bool)arg1 isbuttonEnabled:(_Bool)arg2;	// IMP=0x00200000005b2d2a
+ (id)titleFont;	// IMP=0x00100000005b2d07
+ (id)buttonTitleFont;	// IMP=0x00100000005b29a3
+ (struct UIEdgeInsets)contentEdgeInsets;	// IMP=0x00100000005b2985
+ (id)childItemCatalystButton;	// IMP=0x00100000005b2884
- (void).cxx_destruct;	// IMP=0x00200000005b2da7
@property(retain, nonatomic) GEOMapItemChildItem *childItem; // @synthesize childItem=_childItem;
@property(nonatomic) __weak id <ChildItemButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setTitle:(id)arg1 tapHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000005b2baf
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000005b294c

@end

