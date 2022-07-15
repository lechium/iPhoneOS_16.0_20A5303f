//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface PUPhotosSharingProgressOverlay : UIView
{
    _Bool _isShowing;	// 8 = 0x8
    UIView *_progressView;	// 16 = 0x10
    UIWindow *_cachedMainWindow;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003b810f
@property(nonatomic) __weak UIWindow *cachedMainWindow; // @synthesize cachedMainWindow=_cachedMainWindow;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
- (void)willRemoveSubview:(id)arg1;	// IMP=0x00000000003b8005
- (void)setShowing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000003b7fcf
- (void)addProgressView:(id)arg1;	// IMP=0x00000000003b7dc6
- (void)_tearDownOverlayAnimated:(_Bool)arg1;	// IMP=0x00000000003b7d43
- (void)_setupOverlayAnimated:(_Bool)arg1;	// IMP=0x00000000003b7ad8
- (id)_grayScaleImageFromImage:(id)arg1;	// IMP=0x00000000003b7947
- (id)_screenshotImage;	// IMP=0x00000000003b7930
- (void)_installInStatusBarWindow;	// IMP=0x00000000003b78d4
- (id)_mainWindow;	// IMP=0x00000000003b77e4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003b774d

@end
