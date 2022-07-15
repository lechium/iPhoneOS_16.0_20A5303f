//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CARSession, CRSUIWallpaper, CRSUIWallpaperPreferences, NSString, UIImage, UIImageView;

@interface CARWallpaperCellView : UIView
{
    _Bool _cellFocused;	// 8 = 0x8
    _Bool cellHighlighted;	// 9 = 0x9
    _Bool cellSelected;	// 10 = 0xa
    _Bool _showsApperanceIcon;	// 11 = 0xb
    CARSession *_carSession;	// 16 = 0x10
    CRSUIWallpaper *_wallpaper;	// 24 = 0x18
    CRSUIWallpaperPreferences *_wallpaperPreferences;	// 32 = 0x20
    UIImage *_backgroundImage;	// 40 = 0x28
    UIView *_focusRingView;	// 48 = 0x30
    UIImageView *_backgroundImageView;	// 56 = 0x38
    UIImageView *_appearanceIcon;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000128d4
@property(retain, nonatomic) UIImageView *appearanceIcon; // @synthesize appearanceIcon=_appearanceIcon;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *focusRingView; // @synthesize focusRingView=_focusRingView;
@property(nonatomic) _Bool showsApperanceIcon; // @synthesize showsApperanceIcon=_showsApperanceIcon;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) CRSUIWallpaperPreferences *wallpaperPreferences; // @synthesize wallpaperPreferences=_wallpaperPreferences;
@property(retain, nonatomic) CRSUIWallpaper *wallpaper; // @synthesize wallpaper=_wallpaper;
@property(retain, nonatomic) CARSession *carSession; // @synthesize carSession=_carSession;
@property(nonatomic, getter=isCellSelected) _Bool cellSelected; // @synthesize cellSelected;
@property(nonatomic, getter=isCellHighlighted) _Bool cellHighlighted; // @synthesize cellHighlighted;
@property(nonatomic, getter=isCellFocused) _Bool cellFocused; // @synthesize cellFocused=_cellFocused;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000012609
- (_Bool)canBecomeFocused;	// IMP=0x0010000000012601
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x0010000000012450
- (id)initWithWallpaper:(id)arg1 wallpaperPreferences:(id)arg2;	// IMP=0x001000000001132b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
