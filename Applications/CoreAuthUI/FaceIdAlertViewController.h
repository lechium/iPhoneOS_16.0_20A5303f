//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAlertController.h>

@class LAUIPearlGlyphView;

@interface FaceIdAlertViewController : UIAlertController
{
    LAUIPearlGlyphView *_glyph;	// 8 = 0x8
    CDUnknownBlockType _onDismiss;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000004813
@property(copy, nonatomic) CDUnknownBlockType onDismiss; // @synthesize onDismiss=_onDismiss;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000004766
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000000475e
- (int)_preferredStatusBarVisibility;	// IMP=0x0010000000004756
- (void)dismissWithDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004499
- (void)_shakeTitleLabel;	// IMP=0x0010000000003f8f
- (void)shake;	// IMP=0x0010000000003f0d
@property(nonatomic) __weak LAUIPearlGlyphView *glyph; // @synthesize glyph=_glyph;

@end

