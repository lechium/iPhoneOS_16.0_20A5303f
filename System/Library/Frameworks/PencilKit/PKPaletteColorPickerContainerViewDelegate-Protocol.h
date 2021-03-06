//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>

@class PKDrawingPaletteInputAssistantView, PKPaletteColorPickerContainerView;

@protocol PKPaletteColorPickerContainerViewDelegate <NSObject>

@optional
- (void)colorPickerContainerView:(PKPaletteColorPickerContainerView *)arg1 didDismissInputAssistantView:(PKDrawingPaletteInputAssistantView *)arg2;
- (void)colorPickerContainerView:(PKPaletteColorPickerContainerView *)arg1 willDismissInputAssistantView:(PKDrawingPaletteInputAssistantView *)arg2;
- (void)colorPickerContainerView:(PKPaletteColorPickerContainerView *)arg1 didPresentInputAssistantView:(PKDrawingPaletteInputAssistantView *)arg2;
- (void)colorPickerContainerView:(PKPaletteColorPickerContainerView *)arg1 willPresentInputAssistantView:(PKDrawingPaletteInputAssistantView *)arg2;
@end

