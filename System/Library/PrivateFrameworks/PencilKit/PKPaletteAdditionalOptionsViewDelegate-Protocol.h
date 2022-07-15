//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>

@class PKPaletteAdditionalOptionsView, UIMenu;

@protocol PKPaletteAdditionalOptionsViewDelegate <NSObject>
- (UIMenu *)keyboardSelectionMenuForAdditionalOptionsView:(PKPaletteAdditionalOptionsView *)arg1;
- (void)additionalOptionsViewDidPressTapToRadarButton:(PKPaletteAdditionalOptionsView *)arg1;
- (void)additionalOptionsViewDidPressReturnKeyButton:(PKPaletteAdditionalOptionsView *)arg1;
- (void)additionalOptionsViewDidPressKeyboardButton:(PKPaletteAdditionalOptionsView *)arg1;
- (void)additionalOptionsView:(PKPaletteAdditionalOptionsView *)arg1 didToggleAutoHideOption:(_Bool)arg2;
@end
